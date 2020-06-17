//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_SDLPLAYERSHIP_H
#define SPACEINVADERS_SDLPLAYERSHIP_H


#include "../Game/PlayerShip.h"
#include "../GameConstants.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

namespace Si_sdl {
    class SDLPlayerShip : public Si::PlayerShip {
    private:
        SDL_Rect* clip;
        SDL_Renderer* renderer;
        SDL_Texture* texture;
        Mix_Chunk* warning;
        Mix_Chunk* explosion;

        int pixelWidth;
        int pixelHeight;

    public:
        SDLPlayerShip(SDL_Renderer* renderer, SDL_Texture* texture);

        ~SDLPlayerShip();

        void visualise();

        void destroy();

        void getHit();
    };
}

#endif //SPACEINVADERS_SDLPLAYERSHIP_H
