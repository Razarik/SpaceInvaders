//
// Created by Jonas on 23/04/2020.
//

#ifndef SPACEINVADERS_CONTROLLER_H
#define SPACEINVADERS_CONTROLLER_H

namespace Si {
    // Abstract controller class as reference to engine specific input method
    class Controller {
    public:
        virtual int update() = 0;

        virtual void toggleState(bool enabled) = 0;
    };
}
#endif //SPACEINVADERS_CONTROLLER_H
