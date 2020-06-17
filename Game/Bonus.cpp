//
// Created by Jonas on 24/02/2020.
//

#include "Bonus.h"

namespace Si {
    Bonus::Bonus(double x, int points, double speed) : Entity(x, 0.04, 0.06, 0.06) {
        this->points = points;
        this->speed = speed;
    }

    int Bonus::getPoints() {
        return points;
    }

    double Bonus::getSpeed() {
        return speed;
    }

    Bonus::~Bonus() = default;
}