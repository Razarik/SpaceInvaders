//
// Created by Jonas on 24/02/2020.
//

#include "../Game/PlayerBullet.h"

namespace Si {
    /**
     * Constructor for PlayerBullet
     * The initial y position, width and height are always the same
     *
     * @param x The x position of the bullet
     */
    PlayerBullet::PlayerBullet(double x) : Player(x, 0.925, 0.01, 0.05) {}

    /**
     * Destructor
     */
    PlayerBullet::~PlayerBullet() = default;
}