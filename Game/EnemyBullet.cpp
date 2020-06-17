//
// Created by Jonas on 24/02/2020.
//

#include "EnemyBullet.h"

namespace Si {
    EnemyBullet::EnemyBullet(double x, double y, double width, double height, double speed) : Enemy(x, y, width,
                                                                                                    height) {
        this->speed = speed;
    }

    double EnemyBullet::getSpeed() {
        return speed;
    }

    EnemyBullet::~EnemyBullet() = default;
}