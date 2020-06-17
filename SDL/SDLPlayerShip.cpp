//
// Created by Jonas on 24/02/2020.
//

#include "SDLPlayerShip.h"

namespace Si_sdl {
    SDLPlayerShip::SDLPlayerShip(SDL_Renderer *renderer, SDL_Texture *texture) : Si::PlayerShip() {
        this->pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        this->pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        this->clip = new SDL_Rect();
        clip->x = 202;
        clip->y = 82;
        clip->w = 52;
        clip->h = 32;
        this->texture = texture;
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
        clip = nullptr;
    }

    void SDLPlayerShip::destroy() {
        active = false;
    }
}