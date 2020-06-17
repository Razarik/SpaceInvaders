//
// Created by Jonas on 24/02/2020.
//

#include "SDLFactory.h"
#include "SDLBonus.h"

namespace Si_sdl {
    SDLFactory::SDLFactory() {
        SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
        IMG_Init(IMG_INIT_PNG);
        TTF_Init();

        window = SDL_CreateWindow("Space Invaders", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                  SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        SDL_Surface* loadedSurface = IMG_Load("../Sprites/alienSprites.png");
        texture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        SDL_FreeSurface(loadedSurface);
        loadedSurface = IMG_Load("../Images/stars.png");
        background = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        SDL_FreeSurface(loadedSurface);
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        font = TTF_OpenFont("../Fonts/space_invaders.ttf", 100);
        blink = true;
        blinkCounter = 0;
        Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
        pew = Mix_LoadWAV("../Sounds/pew.wav");
        Mix_VolumeChunk(pew, 16);
        pauseMessage = "- Press SPACE to start -";
        gameOver = Mix_LoadWAV("../Sounds/game_over.wav");
        Mix_VolumeChunk(gameOver, 128);
        victory = Mix_LoadWAV("../Sounds/victory.wav");
        Mix_VolumeChunk(victory, 64);
    }

    Si::PlayerShip* SDLFactory::createPlayerShip() {
        return new SDLPlayerShip(renderer, texture);
    }

    void SDLFactory::tickSetup() {
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, background, NULL, NULL);
    }

    Si::Controller* SDLFactory::createController() {
        return new SDLController();
    }

    SDLFactory::~SDLFactory() {
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_DestroyTexture(texture);
        SDL_DestroyTexture(background);
        Mix_FreeChunk(pew);
        Mix_FreeChunk(gameOver);
        Mix_FreeChunk(victory);
        window = nullptr;
        renderer = nullptr;
        texture = nullptr;
        font = nullptr;
        pew = nullptr;
        gameOver = nullptr;
        victory = nullptr;
        IMG_Quit();
        SDL_Quit();
        TTF_Quit();
        Mix_Quit();
    }

    Si::EnemyShip* SDLFactory::createEnemyShip(double x, double y, int reload) {
        return new SDLEnemyShip(x, y, reload, renderer, texture);
    }

    void SDLFactory::tickPresent() {
        SDL_RenderPresent(renderer);
    }

    Si::PlayerBullet* SDLFactory::createPlayerBullet(double x) {
        Mix_PlayChannel(-1, pew, 0);
        return new SDLPlayerBullet(x, renderer, texture);
    }

    Si::EnemyBullet* SDLFactory::createEnemyBullet(double x, double y, double width, double height, double speed) {
        return new SDLEnemyBullet(x, y, width, height, speed, renderer, texture);
    }

    void SDLFactory::updateScore(int score) {
        std::string messageText = "Score: " + std::to_string(score);
        SDL_Color white = {255, 255, 255};
        SDL_Surface* surfaceMessage = TTF_RenderText_Solid(font, messageText.c_str(), white);
        SDL_Texture* message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
        SDL_Rect messageRect = {0, 0, SCREEN_WIDTH / 5, SCREEN_HEIGHT / 10};
        SDL_RenderCopy(renderer, message, NULL, &messageRect);
        SDL_FreeSurface(surfaceMessage);
        SDL_DestroyTexture(message);
    }

    void SDLFactory::showLives(int lives) {
        std::string messageText = "Lives: " + std::to_string(lives);
        SDL_Color white = {255, 255, 255};
        SDL_Surface* surfaceMessage = TTF_RenderText_Solid(font, messageText.c_str(), white);
        SDL_Texture* message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
        SDL_Rect messageRect = {SCREEN_WIDTH - (SCREEN_WIDTH / 5), 0, SCREEN_WIDTH / 5, SCREEN_HEIGHT / 10};
        SDL_RenderCopy(renderer, message, NULL, &messageRect);
        SDL_FreeSurface(surfaceMessage);
        SDL_DestroyTexture(message);
    }

    void SDLFactory::textScreen() {
        if (blink) {
            SDL_Color green = {197, 255, 61};
            SDL_Surface* surfaceMessage = TTF_RenderText_Solid(font, pauseMessage.c_str(), green);
            SDL_Texture* message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
            SDL_Rect messageRect = {0, (5 * SCREEN_HEIGHT) / 12, SCREEN_WIDTH, SCREEN_HEIGHT / 6};
            SDL_RenderCopy(renderer, message, NULL, &messageRect);
            SDL_FreeSurface(surfaceMessage);
            SDL_DestroyTexture(message);
        }
        if (blinkCounter >= FRAMES_PER_SECOND / 2) {
            blinkCounter = 0;
            blink = !blink;
        } else {
            blinkCounter++;
        }
    }

    Si::Bonus* SDLFactory::createBonus(double x, int points, double speed) {
        return new SDLBonus(x, points, speed, renderer, texture);
    }

    void SDLFactory::setState(int state, int score) {
        switch (state) {
            case START:
                pauseMessage = "- Press SPACE to start -";
                break;
            case PAUSED:
                pauseMessage = "- Press SPACE to resume -";
                break;
            case DEFEAT:
                Mix_PlayChannel(-1, gameOver, 0);
                pauseMessage = "- GAME OVER, press SPACE to restart -";
                break;
            case VICTORY:
                Mix_PlayChannel(-1, victory, 0);
                pauseMessage = "- Score: " + std::to_string(score) + ", press SPACE to restart -";
                break;
            default:
                break;
        }
    }
}