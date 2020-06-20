//
// Created by Jonas on 17/06/2020.
//

#ifndef SPACEINVADERS_SDLENEMYBOSS_H
#define SPACEINVADERS_SDLENEMYBOSS_H

#include <SDL2/SDL_render.h>
#include <SDL2/SDL_mixer.h>
#include "../Game/EnemyBoss.h"
#include "../GameConstants.h"

namespace Si_sdl {
    // The SDL specific implementation of the EnemyBoss class
    class SDLEnemyBoss : public Si::EnemyBoss {
    private:
        SDL_Rect* clip;
        SDL_Rect* barClip;
        SDL_Renderer* renderer;
        SDL_Texture* texture;
        Mix_Chunk* hurt;
        Mix_Chunk* explosion;

        int pixelWidth;
        int pixelHeight;
    public:
        SDLEnemyBoss(SDL_Renderer* renderer, SDL_Texture* texture);

        ~SDLEnemyBoss();

        void visualise();

        void destroy();

        void hit();
    };
}

#endif //SPACEINVADERS_SDLENEMYBOSS_H
