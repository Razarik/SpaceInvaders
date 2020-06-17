//
// Created by Jonas on 27/04/2020.
//

#ifndef SPACEINVADERS_GAMECONSTANTS_H
#define SPACEINVADERS_GAMECONSTANTS_H

const int SCREEN_WIDTH = 1600;
const int SCREEN_HEIGHT = 900;
const int FRAMES_PER_SECOND = 60;
const int SKIP_TICKS = 1000 / FRAMES_PER_SECOND;
enum eventTypes{
    IDLE,
    EXIT,
    RIGHT,
    LEFT,
    SHOOT,
    PAUSE,
    UNPAUSE,
    DEVBULLET
};

enum gameState{
    START,
    PLAYING,
    PAUSED,
    VICTORY,
    DEFEAT
};

#endif //SPACEINVADERS_GAMECONSTANTS_H
