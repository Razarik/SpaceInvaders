//
// Created by Jonas on 24/02/2020.
//

#include "EnemyBullet.h"

namespace Si {
    /**
     * Constructor for EnemyBullet
     *
     * @param x The x position of the bullet
     * @param y The y position of the bullet
     * @param width The width of the bullet
     * @param height The height of the bullet
     * @param speed The speed of the bullet (needs to be positive to go towards the player)
     */
    EnemyBullet::EnemyBullet(double x, double y, double width, double height, double speed) : Enemy(x, y, width,
                                                                                                    height) {
        this->speed = speed;
    }

    /**
     * Getter for the speed
     *
     * @return The bullet's speed
     */
    double EnemyBullet::getSpeed() {
        return speed;
    }

    /**
     * Destructor
     */
    EnemyBullet::~EnemyBullet() = default;
}