//
// Created by Jonas on 16/06/2020.
//

#ifndef SPACEINVADERS_SDLBONUS_H
#define SPACEINVADERS_SDLBONUS_H


#include "../Game/Bonus.h"
#include "../GameConstants.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>


namespace Si_sdl {
    class SDLBonus : public Si::Bonus {
    private:
        SDL_Rect* clip;
        SDL_Rect* explosionClip;
        SDL_Renderer* renderer;
        SDL_Texture* texture;
        int pixelWidth;
        int pixelHeight;
        int explodeTimer;
        bool destroyed;
        Mix_Chunk* explosion;
    public:
        SDLBonus(double x, int points, double speed, SDL_Renderer* renderer, SDL_Texture* texture);

        ~SDLBonus();

        void visualise();

        void destroy();
    };
}

#endif //SPACEINVADERS_SDLBONUS_H
