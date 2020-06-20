//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_SDLFACTORY_H
#define SPACEINVADERS_SDLFACTORY_H

#include "../Game/AbstractFactory.h"
#include "SDLController.h"
#include "SDLPlayerShip.h"
#include "SDLEnemyShip.h"
#include "SDLPlayerBullet.h"
#include "SDLEnemyBullet.h"
#include "SDLEnemyBoss.h"
#include "../GameConstants.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <string>


namespace Si_sdl {
    // A factory which handles the implementation of the game in the SDL engine
    class SDLFactory : public Si::AbstractFactory {
    private:
        SDL_Window* window;
        SDL_Renderer* renderer;
        SDL_Texture* texture;
        SDL_Texture* background;
        TTF_Font* font = nullptr;
        bool blink;
        int blinkCounter;
        Mix_Chunk* pew;
        Mix_Chunk* gameOver;
        Mix_Chunk* victory;
        std::string pauseMessage;
        Mix_Music* music;
    public:
        SDLFactory();

        ~SDLFactory();

        Si::Controller* createController();

        Si::PlayerShip* createPlayerShip();

        Si::EnemyShip* createEnemyShip(double x, double y, int reload);

        Si::PlayerBullet* createPlayerBullet(double x);

        Si::EnemyBullet* createEnemyBullet(double x, double y, double width, double height, double speed);

        Si::Bonus* createBonus(double x, int points, double speed);

        Si::EnemyBoss* createEnemyBoss();

        void tickSetup();

        void tickPresent();

        void updateScore(int score);

        void showLives(int lives);

        void textScreen();

        void setState(int state, int score);
    };
}
#endif //SPACEINVADERS_SDLFACTORY_H
