//
// Created by Jonas on 24/02/2020.
//

#include "EnemyShip.h"

namespace Si {
    /**
     * Constructor for EnemyShip
     *
     * The dimensions are always the same
     *
     * @param x The x position of the ship
     * @param y The y position of the ship
     * @param type The type of the ship (0 for normal ship, 1 for a ship with fast reload and small, fast bombs,
     * 2 for a ship with slow reload and big, slow bombs)
     */
    EnemyShip::EnemyShip(double x, double y, int type) : Enemy(x, y, 0.04, 0.04) {
        this->type = type;

        // Create a random seed. Make it static so not all enemy ships are seeded the same
        static std::random_device rd;
        // Seed the pseudo random number generator
        std::mt19937 mt(rd());
        // Make a random distribution between 0 and 600 ticks
        std::uniform_int_distribution<int> dist(0, 600);

        switch (type) {
            case 0 :
                // Normal enemy
                reload = 6 * dist(mt);
                bulletWidth = 0.005;
                bulletHeight = 0.025;
                bulletSpeed = 0.002;
                break;
            case 1 :
                // Fast reloader with fast, small bombs
                reload = 3 * dist(mt);
                bulletWidth = 0.0025;
                bulletHeight = 0.0125;
                bulletSpeed = 0.004;
                break;
            case 2 :
                // Slow reloader with slow, big bombs
                reload = 12 * dist(mt);
                bulletWidth = 0.01;
                bulletHeight = 0.05;
                bulletSpeed = 0.001;
                break;
            default :
                // Normally not used, inserted in case of future expansion or incorrect type value
                // Will produce a normal enemy
                reload = 6 * dist(mt);
                bulletWidth = 0.005;
                bulletHeight = 0.025;
                bulletSpeed = 0.002;
                break;
        }
    }

    /**
     * Getter for the remaining reload time
     *
     * @return Remaining reload time
     */
    int EnemyShip::getReload() {
        return reload;
    }

    /**
     * Getter for the height of the bullets this ship shoots
     *
     * @return Height of this ship's bullets
     */
    double EnemyShip::getBulletHeight() {
        return bulletHeight;
    }

    /**
     * Getter for the speed of the bullets this ship shoots
     *
     * @return Speed of this ship's bullets
     */
    double EnemyShip::getBulletSpeed() {
        return bulletSpeed;
    }

    /**
     * Getter for the width of the bullets this ship shoots
     *
     * @return Width of this ship's bullets
     */
    double EnemyShip::getBulletWidth() {
        return bulletWidth;
    }

    /**
     * Reduce this ship's reload timer
     */
    void EnemyShip::decrementReload() {
        reload--;
    }

    /**
     * Reset this ship's reload timer, factoring in the amount of remaining ships so the overall enemy fire
     * rate stays constant
     *
     * @param shipsRemaining The amount of enemy ships remaining on the play field
     */
    void EnemyShip::resetReload(int shipsRemaining) {
        // Calculate the factor with which to multiply the standard reload speed
        double factor = double(shipsRemaining) / 55.0;
        // Reset reload speed depending on the type of ship
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

    /**
     * Destructor
     */
    EnemyShip::~EnemyShip() = default;
}