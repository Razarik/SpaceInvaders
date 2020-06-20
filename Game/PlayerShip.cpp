//
// Created by Jonas on 24/02/2020.
//

#include "../Game/PlayerShip.h"

namespace Si {
    /**
     * Constructor for PlayerShip
     * Initial position and dimensions are always the same
     */
    PlayerShip::PlayerShip() : Player(0.5, 0.975, 0.05, 0.05) {
        // Set the initial number of lives
        lives = 3;
    }

    /**
     * Getter for the number of lives
     *
     * @return Number of remaining lives
     */
    int PlayerShip::getLives() {
        return lives;
    }

    /**
     * Decrease the amount of lives left
     */
    void PlayerShip::getHit() {
        lives--;
    }

    /**
     * Destructor
     */
    PlayerShip::~PlayerShip() = default;
}