//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_ENEMY_H
#define SPACEINVADERS_ENEMY_H


#include "Entity.h"

namespace Si {
    // An enemy is an adversarial entity
    class Enemy : public Entity {
    public:
        Enemy(double x, double y, double width, double height);

        ~Enemy();
    };
}

#endif //SPACEINVADERS_ENEMY_H
