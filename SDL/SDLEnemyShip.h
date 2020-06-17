//
// Created by Jonas on 23/04/2020.
//

#ifndef SPACEINVADERS_SDLENEMYSHIP_H
#define SPACEINVADERS_SDLENEMYSHIP_H

#include "../Game/EnemyShip.h"
#include "../GameConstants.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>


namespace Si_sdl {
    class SDLEnemyShip : public Si::EnemyShip {
    private:
        SDL_Rect* openClip;
        SDL_Rect* closedClip;
        SDL_Rect* explosionClip;
        SDL_Renderer* renderer;
        SDL_Texture* texture;
        int pixelWidth;
        int pixelHeight;
        bool open;
        int openCounter;
        bool destroyed;
        Mix_Chunk* explosion;
    public:
        SDLEnemyShip(double x, double y, int type, SDL_Renderer* renderer, SDL_Texture* texture);

        ~SDLEnemyShip();

        void visualise();

        void destroy();
    };
}

#endif //SPACEINVADERS_SDLENEMYSHIP_H
