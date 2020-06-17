//
// Created by Jonas on 13/06/2020.
//

#include "SDLPlayerBullet.h"

namespace Si_sdl {

    SDLPlayerBullet::SDLPlayerBullet(double x, SDL_Renderer* renderer, SDL_Texture* texture) : Si::PlayerBullet(x) {
        this->pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        this->pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        this->clip = new SDL_Rect;
        this->texture = texture;
        clip->x = 285;
        clip->y = 82;
        clip->w = 8;
        clip->h = 36;
    }

    void SDLPlayerBullet::visualise() {
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        SDL_RenderCopy(renderer, texture, clip, &renderQuad);
    }

    SDLPlayerBullet::~SDLPlayerBullet() {
        renderer = nullptr;
        clip = nullptr;
        texture = nullptr;
    }

    void SDLPlayerBullet::destroy() {
        active = false;
    }
}