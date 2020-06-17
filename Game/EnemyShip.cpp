//
// Created by Jonas on 24/02/2020.
//

#include "EnemyShip.h"

namespace Si {
    EnemyShip::EnemyShip(double x, double y, int type) : Enemy(x, y, 0.04, 0.04) {
        this->type = type;

        //Initialise random number generator for reload times
        static std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> dist(0, 600);

        switch (type) {
            case 0 :
                //Normal enemy
                reload = 6 * dist(mt);
                bulletWidth = 0.005;
                bulletHeight = 0.025;
                bulletSpeed = 0.002;
                break;
            case 1 :
                //Fast reloader with fast, small bombs
                reload = 3 * dist(mt);
                bulletWidth = 0.0025;
                bulletHeight = 0.0125;
                bulletSpeed = 0.004;
                break;
            case 2 :
                //Slow reloader with slow, big bombs
                reload = 12 * dist(mt);
                bulletWidth = 0.01;
                bulletHeight = 0.05;
                bulletSpeed = 0.001;
                break;
            default :
                //Normally not used, inserted in case of future expansion
                reload = 6 * dist(mt);
                bulletWidth = 0.005;
                bulletHeight = 0.025;
                bulletSpeed = 0.002;
                break;
        }
    }

    int EnemyShip::getReload() {
        return reload;
    }

    void EnemyShip::adaptReload(int shipsRemaining) {
        reload = (int) (double(shipsRemaining) / 55.0) * reload;
    }

    int EnemyShip::getType() {
        return type;
    }

    double EnemyShip::getBulletHeight() {
        return bulletHeight;
    }

    double EnemyShip::getBulletSpeed() {
        return bulletSpeed;
    }

    double EnemyShip::getBulletWidth() {
        return bulletWidth;
    }

    void EnemyShip::decrementReload() {
        reload--;
    }

    void EnemyShip::resetReload(int shipsRemaining) {
        double factor = double(shipsRemaining) / 55.0;
        switch (type) {
            case 0 :
                reload = (int) (factor * 3600);
                break;
            case 1 :
                reload = (int) (factor * 1800);
                break;
            case 2 :
                reload = (int) (factor * 7200);
                break;
            default :
                reload = (int) (factor * 3600);
                break;
        }

    }

    EnemyShip::~EnemyShip() = default;
}