//
// Created by Jonas on 24/02/2020.
//

#include "Enemy.h"

namespace Si {
    /**
     * Constructor for Enemy. Passes all arguments to Entity
     * @param x The x position of the enemy
     * @param y The y position of the enemy
     * @param width The width of the enemy
     * @param height The height of the enemy
     */
    Enemy::Enemy(double x, double y, double width, double height) : Entity(x, y, width, height) {}

    /**
     * Destructor
     */
    Enemy::~Enemy() = default;
}