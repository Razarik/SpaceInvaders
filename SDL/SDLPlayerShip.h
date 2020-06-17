//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_SDLPLAYERSHIP_H
#define SPACEINVADERS_SDLPLAYERSHIP_H


#include "../Game/PlayerShip.h"
#include "../GameConstants.h"
#include <SDL2/SDL.h>

namespace Si_sdl {
    class SDLPlayerShip : public Si::PlayerShip {
    private:
        SDL_Rect *clip;
        SDL_Renderer *renderer;
        SDL_Texture *texture;

        int pixelWidth;
        int pixelHeight;

    public:
        SDLPlayerShip(SDL_Renderer *renderer, SDL_Texture *texture);

        ~SDLPlayerShip();

        void visualise();

        void destroy();
    };
}

#endif //SPACEINVADERS_SDLPLAYERSHIP_H
