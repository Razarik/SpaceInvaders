//
// Created by Jonas on 13/06/2020.
//

#ifndef SPACEINVADERS_SDLPLAYERBULLET_H
#define SPACEINVADERS_SDLPLAYERBULLET_H

#include "../Game/PlayerBullet.h"
#include "../GameConstants.h"
#include <SDL2/SDL.h>

namespace Si_sdl {
    // The SDL specific implementation of the PlayerBullet class
    class SDLPlayerBullet : public Si::PlayerBullet {
    private:
        SDL_Rect* clip;
        SDL_Renderer* renderer;
        SDL_Texture* texture;
        int pixelWidth;
        int pixelHeight;
    public:
        SDLPlayerBullet(double x, SDL_Renderer* renderer, SDL_Texture* texture);

        ~SDLPlayerBullet();

        void visualise();

        void destroy();
    };
}

#endif //SPACEINVADERS_SDLPLAYERBULLET_H
