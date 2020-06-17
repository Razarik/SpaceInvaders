//
// Created by Jonas on 17/06/2020.
//

#ifndef SPACEINVADERS_ENEMYBOSS_H
#define SPACEINVADERS_ENEMYBOSS_H

#include "Enemy.h"
#include <random>

namespace Si {
    class EnemyBoss : public Enemy {
    private:
        int reload;
        int health;
        std::mt19937 mt;
    public:
        EnemyBoss();

        ~EnemyBoss();

        int getReload();

        void decrementReload();

        int getHealth();

        virtual void hit();

        double getBulletX();
    };
}

#endif //SPACEINVADERS_ENEMYBOSS_H
