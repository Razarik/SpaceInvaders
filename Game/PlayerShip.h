//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_PLAYERSHIP_H
#define SPACEINVADERS_PLAYERSHIP_H


#include "Player.h"

namespace Si {
    // A class representing the ship of the player, keeping a count of the remaining lives
    class PlayerShip : public Player {
    private:
        int lives;
    public:
        PlayerShip();

        virtual ~PlayerShip();

        int getLives();

        virtual void getHit();
    };
}

#endif //SPACEINVADERS_PLAYERSHIP_H
