//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_PLAYERBULLET_H
#define SPACEINVADERS_PLAYERBULLET_H


#include "Player.h"

namespace Si {
    // A class representing all bullets shot by the player
    class PlayerBullet : public Player {
    public:
        PlayerBullet(double x);

        ~PlayerBullet();
    };

}

#endif //SPACEINVADERS_PLAYERBULLET_H
