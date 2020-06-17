//
// Created by Jonas on 15/06/2020.
//

#include "SDLEnemyBullet.h"

namespace Si_sdl {
    SDLEnemyBullet::SDLEnemyBullet(double x, double y, double width, double height, double speed,
                                   SDL_Renderer *renderer, SDL_Texture *texture) : Si::EnemyBullet(
            x, y, width, height, speed) {
        this->pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        this->pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        this->clip = new SDL_Rect;
        this->texture = texture;
        clip->x = 297;
        clip->y = 82;
        clip->w = 8;
        clip->h = 36;
    }

    void SDLEnemyBullet::visualise() {
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        SDL_RenderCopy(renderer, texture, clip, &renderQuad);
    }

    SDLEnemyBullet::~SDLEnemyBullet() {
        renderer = nullptr;
        clip = nullptr;
        texture = nullptr;
    }

    void SDLEnemyBullet::destroy() {
        active = false;
    }
}