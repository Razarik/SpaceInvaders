//
// Created by Jonas on 23/04/2020.
//

#include "SDLEnemyShip.h"


namespace Si_sdl {
    void SDLEnemyShip::visualise() {
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        if (destroyed) {
            SDL_RenderCopy(renderer, texture, explosionClip, &renderQuad);
        } else if (open) {
            SDL_RenderCopy(renderer, texture, openClip, &renderQuad);
        } else {
            SDL_RenderCopy(renderer, texture, closedClip, &renderQuad);
        }
        if (openCounter > 0) {
            openCounter--;
        } else {
            if (destroyed) {
                active = false;
            } else {
                open = !open;
                openCounter = FRAMES_PER_SECOND / 2;
            }
        }
    }

    SDLEnemyShip::SDLEnemyShip(double x, double y, int type, SDL_Renderer *renderer, SDL_Texture *texture)
            : Si::EnemyShip(x, y, type) {
        this->pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        this->pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        this->openClip = new SDL_Rect();
        this->closedClip = new SDL_Rect();
        this->explosionClip = new SDL_Rect;
        switch (type) {
            case 0:
                openClip->x = 17;
                openClip->y = 19;
                openClip->w = 54;
                openClip->h = 37;
                closedClip->x = 101;
                closedClip->y = 19;
                closedClip->w = 54;
                closedClip->h = 37;
                break;
            case 1:
                openClip->x = 185;
                openClip->y = 19;
                openClip->w = 53;
                openClip->h = 37;
                closedClip->x = 269;
                closedClip->y = 19;
                closedClip->w = 53;
                closedClip->h = 37;
                break;
            case 2:
                openClip->x = 350;
                openClip->y = 19;
                openClip->w = 52;
                openClip->h = 37;
                closedClip->x = 426;
                closedClip->y = 19;
                closedClip->w = 52;
                closedClip->h = 37;
                break;
            default:
                openClip->x = 17;
                openClip->y = 19;
                openClip->w = 54;
                openClip->h = 37;
                closedClip->x = 101;
                closedClip->y = 19;
                closedClip->w = 54;
                closedClip->h = 37;
        }
        explosionClip->x = 510;
        explosionClip->y = 22;
        explosionClip->w = 53;
        explosionClip->h = 37;
        this->texture = texture;
        open = true;
        openCounter = FRAMES_PER_SECOND / 2;
        destroyed = false;
        explosion = Mix_LoadWAV("../Sounds/explosion.wav");
        Mix_VolumeChunk(explosion, 16);
    }

    SDLEnemyShip::~SDLEnemyShip() {
        renderer = nullptr;
        texture = nullptr;
        delete openClip;
        openClip = nullptr;
        delete closedClip;
        closedClip = nullptr;
        delete explosionClip;
        explosionClip = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
    }

    void SDLEnemyShip::destroy() {
        Mix_PlayChannel(-1, explosion, 0);
        destroyed = true;
        openCounter = FRAMES_PER_SECOND / 2;
    }

}