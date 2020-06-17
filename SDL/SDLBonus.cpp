//
// Created by Jonas on 16/06/2020.
//

#include "SDLBonus.h"

namespace Si_sdl {
    SDLBonus::SDLBonus(double x, int points, double speed, SDL_Renderer *renderer,
                       SDL_Texture *texture) : Si::Bonus(x, points, speed) {
        pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        clip = new SDL_Rect();
        explosionClip = new SDL_Rect();
        clip->x = 21;
        clip->y = 87;
        clip->w = 52;
        clip->h = 27;
        explosionClip->x = 121;
        explosionClip->y = 88;
        explosionClip->w = 63;
        explosionClip->h = 24;
        this->texture = texture;
        explodeTimer = FRAMES_PER_SECOND / 2;
        destroyed = false;
    }

    SDLBonus::~SDLBonus() {
        renderer = nullptr;
        texture = nullptr;
        delete clip;
        clip = nullptr;
        delete explosionClip;
        explosionClip = nullptr;
    }

    void SDLBonus::visualise() {
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        if (destroyed) {
            SDL_RenderCopy(renderer, texture, explosionClip, &renderQuad);
            explodeTimer--;
        } else {
            SDL_RenderCopy(renderer, texture, clip, &renderQuad);
        }
        if (explodeTimer <= 0) {
            active = false;
        }
    }

    void SDLBonus::destroy() {
        destroyed = true;
    }
}