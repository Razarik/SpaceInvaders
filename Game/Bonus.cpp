//
// Created by Jonas on 24/02/2020.
//

#include "Bonus.h"

namespace Si {
    /**
     * Constructor for Bonus
     *
     * A Bonus is always at the same y position, and always has the same dimensions
     *
     * @param x The x position of the bonus
     * @param points The amount of points the bonus is worth
     * @param speed The speed of the bonus
     */
    Bonus::Bonus(double x, int points, double speed) : Entity(x, 0.04, 0.06, 0.06) {
        this->points = points;
        this->speed = speed;
    }

    /**
     * Getter for points
     *
     * @return Amount of points this bonus is worth
     */
    int Bonus::getPoints() {
        return points;
    }

    /**
     * Getter for speed
     *
     * @return The speed of the bonus, with the sign indicating the direction
     */
    double Bonus::getSpeed() {
        return speed;
    }

    /**
     * Destructor
     */
    Bonus::~Bonus() = default;
}