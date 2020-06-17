//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_ENEMYBULLET_H
#define SPACEINVADERS_ENEMYBULLET_H


#include "Enemy.h"

namespace Si {
    class EnemyBullet : public Enemy {
    private:
        double speed;
    public:
        EnemyBullet(double x, double y, double width, double height, double speed);

        ~EnemyBullet();

        double getSpeed();

    };
}

#endif //SPACEINVADERS_ENEMYBULLET_H
