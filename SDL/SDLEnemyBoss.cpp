//
// Created by Jonas on 17/06/2020.
//

#include "SDLEnemyBoss.h"

namespace Si_sdl {
    SDLEnemyBoss::SDLEnemyBoss(SDL_Renderer* renderer, SDL_Texture* texture) : Si::EnemyBoss() {
        pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        clip = new SDL_Rect();
        clip->x = 325;
        clip->y = 80;
        clip->w = 42;
        clip->h = 42;
        barClip = new SDL_Rect();
        barClip->x = 399;
        barClip->y = 88;
        barClip->w = 90;
        barClip->h = 25;
        this->texture = texture;
        hurt = Mix_LoadWAV("../Sounds/scream.wav");
        Mix_VolumeChunk(hurt, 64);
        explosion = Mix_LoadWAV("../Sounds/death_scream.wav");
        Mix_VolumeChunk(hurt, 64);
    }

    void SDLEnemyBoss::visualise() {
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        SDL_RenderCopy(renderer, texture, clip, &renderQuad);
        renderQuad.x = (int) (double(SCREEN_WIDTH) * 0.32);
        renderQuad.y = (int) (SCREEN_HEIGHT * 0.01);
        renderQuad.w = (int) (SCREEN_WIDTH * 0.36 * getHealth() / 20);
        renderQuad.h = SCREEN_WIDTH * 0.03;
        SDL_SetRenderDrawColor(renderer, 128, 0, 0, 128);
        SDL_RenderFillRect(renderer, &renderQuad);
        renderQuad.x = (int) (double(SCREEN_WIDTH) * 0.3);
        renderQuad.w = SCREEN_WIDTH * 0.4;
        SDL_RenderCopy(renderer, texture, barClip, &renderQuad);
    }

    SDLEnemyBoss::~SDLEnemyBoss() {
        renderer = nullptr;
        texture = nullptr;
        delete (clip);
        clip = nullptr;
        Mix_FreeChunk(hurt);
        hurt = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
    }

    void SDLEnemyBoss::destroy() {
        active = false;
    }

    void SDLEnemyBoss::hit() {
        EnemyBoss::hit();
        if (getHealth() > 0) {
            Mix_PlayChannel(-1, hurt, 0);
        } else {
            Mix_PlayChannel(-1, explosion, 0);
        }

    }
}