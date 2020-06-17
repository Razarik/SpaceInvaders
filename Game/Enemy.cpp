//
// Created by Jonas on 24/02/2020.
//

#include "Enemy.h"

namespace Si {
    Enemy::Enemy(double x, double y, double width, double height) : Entity(x, y, width, height) {}

    Enemy::~Enemy() = default;
}