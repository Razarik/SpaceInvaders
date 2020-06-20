//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_BONUS_H
#define SPACEINVADERS_BONUS_H


#include "Entity.h"

namespace Si {
    // A Bonus is an entity that is neither enemy nor player.
    // It has a certain speed and is worth a certain amount of points when shot
    class Bonus : public Entity {
    private:
        int points;         // The amount of points the bonus is worth
        double speed;       // The speed of the bonus
    public:
        Bonus(double x, int points, double speed);

        ~Bonus();

        int getPoints();

        double getSpeed();

    };
}

#endif //SPACEINVADERS_BONUS_H


