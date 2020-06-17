//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_GAME_H
#define SPACEINVADERS_GAME_H


#include "AbstractFactory.h"

namespace Si {
    class Game {
    private:
        static Game* instance;
        AbstractFactory* AF;

        Game(AbstractFactory* F);


    public:
        static Game* getInstance(AbstractFactory* F);

        void run();

    };
}

#endif //SPACEINVADERS_GAME_H
