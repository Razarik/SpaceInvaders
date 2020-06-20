//
// Created by Jonas on 24/02/2020.
//

#include "Player.h"

namespace Si {
    /**
     * Constructor for a player entity, passes all arguments to Entity
     *
     * @param x The x position
     * @param y The y position
     * @param width The width
     * @param height The height
     */
    Player::Player(double x, double y, double width, double height) : Entity(x, y, width, height) {}

    /**
     * Destructor
     */
    Player::~Player() = default;

}