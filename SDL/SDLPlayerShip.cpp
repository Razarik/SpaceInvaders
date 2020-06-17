//
// Created by Jonas on 24/02/2020.
//


#include "SDLPlayerShip.h"

namespace Si_sdl {
    SDLPlayerShip::SDLPlayerShip(SDL_Renderer* renderer, SDL_Texture* texture) : Si::PlayerShip() {
        pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        clip = new SDL_Rect();
        clip->x = 202;
        clip->y = 82;
        clip->w = 52;
        clip->h = 32;
        this->texture = texture;
        warning = Mix_LoadWAV("../Sounds/warning.wav");
        Mix_VolumeChunk(warning, 16);
        explosion = Mix_LoadWAV("../Sounds/explosion_big.wav");
        Mix_VolumeChunk(explosion, 16);
    }

    void SDLPlayerShip::visualise() {
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        SDL_RenderCopy(renderer, texture, clip, &renderQuad);
    }

    SDLPlayerShip::~SDLPlayerShip() {
        renderer = nullptr;
        texture = nullptr;
        delete (clip);
        clip = nullptr;
        Mix_FreeChunk(warning);
        warning = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
    }

    void SDLPlayerShip::destroy() {
        active = false;
    }

    void SDLPlayerShip::getHit() {
        PlayerShip::getHit();
        if (getLives() > 0) {
            Mix_PlayChannel(-1, warning, 0);
        } else {
            Mix_PlayChannel(-1, explosion, 0);
        }

    }
}