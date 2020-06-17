//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_ABSTRACTFACTORY_H
#define SPACEINVADERS_ABSTRACTFACTORY_H


#include "PlayerShip.h"
#include "Controller.h"
#include "EnemyShip.h"
#include "PlayerBullet.h"
#include "EnemyBullet.h"
#include "Bonus.h"

namespace Si {
    class AbstractFactory {
    public:
        virtual Controller *createController() = 0;

        virtual PlayerShip *createPlayerShip() = 0;

        virtual EnemyShip *createEnemyShip(double x, double y, int type) = 0;

        virtual PlayerBullet *createPlayerBullet(double x) = 0;

        virtual EnemyBullet *createEnemyBullet(double x, double y, double width, double height, double speed) = 0;

        virtual Bonus *createBonus(double x, int points, double speed) =0;

        virtual void tickSetup() = 0;

        virtual void tickPresent() = 0;

        virtual void updateScore(int score) =0;

        virtual void showLives(int lives) = 0;

        virtual void textScreen() = 0;

        virtual void setState(int state, int score) = 0;
    };
}

#endif //SPACEINVADERS_ABSTRACTFACTORY_H
