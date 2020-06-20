//
// Created by Jonas on 23/04/2020.
//

#ifndef SPACEINVADERS_SDLCONTROLLER_H
#define SPACEINVADERS_SDLCONTROLLER_H

#include <SDL2/SDL.h>
#include "../Game/Controller.h"
#include "../GameConstants.h"

namespace Si_sdl {
    // A class with the SDL specific implementation of the Controller class
    class SDLController : public Si::Controller {
    private:
        bool enabled;

    public:
        SDLController();

        ~SDLController();

        int update();

        void toggleState(bool enabled);
    };
}

#endif //SPACEINVADERS_SDLCONTROLLER_H
