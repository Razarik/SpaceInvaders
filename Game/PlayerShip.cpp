//
// Created by Jonas on 24/02/2020.
//

#include "../Game/PlayerShip.h"

namespace Si {
    PlayerShip::PlayerShip() : Player(0.5, 0.975, 0.05, 0.05) {
        lives = 3;
    }

    int PlayerShip::getLives() {
        return lives;
    }

    void PlayerShip::getHit() {
        lives--;
    }

    PlayerShip::~PlayerShip() = default;
}