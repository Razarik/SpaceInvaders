//
// Created by Jonas on 17/06/2020.
//

#include "EnemyBoss.h"

namespace Si {
    EnemyBoss::EnemyBoss() : Enemy(0.5, 0, 0.5, 0.4) {
        health = 20;
        reload = 15;
        std::random_device device;
        mt = (std::mt19937(device()));
    }

    int EnemyBoss::getReload() {
        return reload;
    }

    void EnemyBoss::decrementReload() {
        reload--;
    }

    int EnemyBoss::getHealth() {
        return health;
    }

    void EnemyBoss::hit() {
        health--;
    }

    double EnemyBoss::getBulletX() {
        reload = 15;
        std::uniform_real_distribution<double> dist(0.2, 0.8);
        return dist(mt);
    }

    EnemyBoss::~EnemyBoss() = default;
}