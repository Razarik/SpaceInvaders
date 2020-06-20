//
// Created by Jonas on 17/06/2020.
//

#include "EnemyBoss.h"

namespace Si {
    /**
     * Constructor for EnemyBoss
     * An instance of EnemyBoss always starts at the same position and has the same dimensions
     */
    EnemyBoss::EnemyBoss() : Enemy(0.5, 0, 0.5, 0.4) {
        health = 20; // Set the health to 20
        reload = 15; // The interval at which the boss will shoot
        std::random_device device; // A random device to seed the pseudo random number generator
        mt = (std::mt19937(device())); // Seed the pseudo random number generator
    }

    /**
     * Getter for reload time
     *
     * @return Reload time
     */
    int EnemyBoss::getReload() {
        return reload;
    }

    /**
     * Decrease reload time by one tick
     */
    void EnemyBoss::decrementReload() {
        reload--;
    }

    /**
     * Getter for health
     *
     * @return Boss' health
     */
    int EnemyBoss::getHealth() {
        return health;
    }

    /**
     * Method to call when the boss is hit, decreasing its health
     */
    void EnemyBoss::hit() {
        health--;
    }

    /**
     * Generate a random x position at which to spawn a bullet, and reset the reload timer
     *
     * @return A random x position between 0.2 and 0.8
     */
    double EnemyBoss::getBulletX() {
        reload = 15;
        std::uniform_real_distribution<double> dist(0.2, 0.8);
        return dist(mt);
    }

    /**
     * Destructor
     */
    EnemyBoss::~EnemyBoss() = default;
}