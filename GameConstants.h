//
// Created by Jonas on 27/04/2020.
//

#ifndef SPACEINVADERS_GAMECONSTANTS_H
#define SPACEINVADERS_GAMECONSTANTS_H

// The dimensions of the screen
const int SCREEN_WIDTH = 1600;
const int SCREEN_HEIGHT = 900;

// The frames per second and the time in milliseconds each tick should take according to the FPS
const int FRAMES_PER_SECOND = 60;
const int SKIP_TICKS = 1000 / FRAMES_PER_SECOND;

// An enumeration for easier reference to all possible input events
enum eventTypes {
    IDLE,
    EXIT,
    RIGHT,
    LEFT,
    SHOOT,
    PAUSE,
    UNPAUSE,
    DEVBULLET
};

// An enumeration for easier reference to the different states the game can be in
enum gameState {
    START,
    PLAYING,
    PAUSED,
    VICTORY,
    DEFEAT
};

#endif //SPACEINVADERS_GAMECONSTANTS_H
