//
// Created by Jonas on 23/04/2020.
//

#include "SDLController.h"

namespace Si_sdl {

    int SDLController::update() {
        SDL_Event e;
        while (SDL_PollEvent(&e) != 0) {
            //User quits the program
            if (e.type == SDL_QUIT) {
                return EXIT;
            }
                //User presses a key
            else if (e.type == SDL_KEYDOWN) {
                //If the game is running
                if (enabled) {
                    switch (e.key.keysym.sym) {
                        case SDLK_RIGHT :
                            return RIGHT;
                        case SDLK_LEFT :
                            return LEFT;
                        case SDLK_SPACE :
                            return SHOOT;
                        case SDLK_p :
                            return PAUSE;
                        case SDLK_x :
                            return DEVBULLET;
                        default :
                            return IDLE;
                    }
                }
                    //If the game is paused
                else {
                    switch (e.key.keysym.sym) {
                        case SDLK_SPACE :
                            return UNPAUSE;
                        default :
                            return IDLE;
                    }
                }
            }
        }
        return 0;
    }

    void SDLController::toggleState(bool enabled) {
        this->enabled = enabled;
    }

    SDLController::SDLController() {
        enabled = false;
    }

    SDLController::~SDLController() = default;


}