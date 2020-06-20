//
// Created by Jonas on 15/06/2020.
//

#ifndef SPACEINVADERS_SDLENEMYBULLET_H
#define SPACEINVADERS_SDLENEMYBULLET_H

#include "../Game/EnemyBullet.h"
#include "../GameConstants.h"
#include <SDL2/SDL.h>

namespace Si_sdl {
    // The SDL specific implementation of the EnemyBullet class
    class SDLEnemyBullet : public Si::EnemyBullet {
    private:
        SDL_Rect* clip;
        SDL_Renderer* renderer;
        SDL_Texture* texture;
        int pixelWidth;
        int pixelHeight;
    public:
        SDLEnemyBullet(double x, double y, double width, double height, double speed, SDL_Renderer* renderer,
                       SDL_Texture* texture);

        ~SDLEnemyBullet();

        void visualise();

        void destroy();
    };

}


#endif //SPACEINVADERS_SDLENEMYBULLET_H
