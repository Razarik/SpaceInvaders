//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_BONUS_H
#define SPACEINVADERS_BONUS_H


#include "Entity.h"

namespace Si {
    class Bonus : public Entity {
    private:
        int points;
        double speed;
    public:
        Bonus(double x, int points, double speed);

        ~Bonus();

        int getPoints();

        double getSpeed();

    };
}

#endif //SPACEINVADERS_BONUS_H


