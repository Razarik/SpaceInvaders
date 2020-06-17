//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_PLAYER_H
#define SPACEINVADERS_PLAYER_H


#include "Entity.h"

namespace Si {
    class Player : public Entity {
    public:
        Player(double x, double y, double width, double height);

        virtual ~Player();
    };
}

#endif //SPACEINVADERS_PLAYER_H
