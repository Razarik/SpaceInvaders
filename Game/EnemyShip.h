//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_ENEMYSHIP_H
#define SPACEINVADERS_ENEMYSHIP_H

#include "Enemy.h"
#include <random>

namespace Si {
    class EnemyShip : public Enemy {
    private:
        int type;
        int reload;
        double bulletWidth;
        double bulletHeight;
        double bulletSpeed;
    public:
        EnemyShip(double x, double y, int type);

        ~EnemyShip();

        int getReload();

        void decrementReload();

        void resetReload(int shipsRemaining);

        double getBulletWidth();

        double getBulletHeight();

        double getBulletSpeed();
    };
}
#endif //SPACEINVADERS_ENEMYSHIP_H
