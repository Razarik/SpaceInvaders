//
// Created by Jonas on 24/02/2020.
//

#include "SDLFactory.h"
#include "SDLBonus.h"

namespace Si_sdl {
    /**
     * Constructor of the SDL Factory
     */
    SDLFactory::SDLFactory() {
        // Initialise all SDL subsystems
        SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
        IMG_Init(IMG_INIT_PNG);
        TTF_Init();

        // Create tje window in which the game will run
        window = SDL_CreateWindow("Space Invaders", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                  SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        SDL_Surface* icon = IMG_Load("../Images/icon.png");
        SDL_SetWindowIcon(window, icon);
        SDL_FreeSurface(icon);
        delete icon;

        // Create a renderer
        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

        // Load the sprite sheet
        SDL_Surface* loadedSurface = IMG_Load("../Sprites/alienSprites.png");
        texture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        SDL_FreeSurface(loadedSurface);

        // Load the background
        loadedSurface = IMG_Load("../Images/stars.png");
        background = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        SDL_FreeSurface(loadedSurface);

        // Load the font
        font = TTF_OpenFont("../Fonts/space_invaders.ttf", 100);

        // Prepare variables for blinking text
        blink = true;
        blinkCounter = 0;

        // Load several sound effects and music
        Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
        pew = Mix_LoadWAV("../Sounds/pew.wav");
        Mix_VolumeChunk(pew, 16);
        pauseMessage = "- Press SPACE to start -";
        gameOver = Mix_LoadWAV("../Sounds/game_over.wav");
        Mix_VolumeChunk(gameOver, 128);
        victory = Mix_LoadWAV("../Sounds/victory.wav");
        Mix_VolumeChunk(victory, 64);
        music = Mix_LoadMUS("../Sounds/music.wav");
        Mix_VolumeMusic(32);

        // Start playing music
        Mix_PlayMusic(music, -1);
    }

    /**
     * Creates a SDLPLayerShip
     *
     * @return A new SDLPlayerShip
     */
    Si::PlayerShip* SDLFactory::createPlayerShip() {
        return new SDLPlayerShip(renderer, texture);
    }

    /**
     * Clears the screen and re-applies the background
     */
    void SDLFactory::tickSetup() {
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, background, NULL, NULL);
    }


    /**
     * Creates a SDLController
     *
     * @return A new SDLController
     */
    Si::Controller* SDLFactory::createController() {
        return new SDLController();
    }

    /**
     * Destructor
     */
    SDLFactory::~SDLFactory() {
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_DestroyTexture(texture);
        SDL_DestroyTexture(background);
        Mix_FreeChunk(pew);
        Mix_FreeChunk(gameOver);
        Mix_FreeChunk(victory);
        Mix_FreeMusic(music);
        window = nullptr;
        renderer = nullptr;
        texture = nullptr;
        font = nullptr;
        pew = nullptr;
        gameOver = nullptr;
        victory = nullptr;
        music = nullptr;
        IMG_Quit();
        SDL_Quit();
        TTF_Quit();
        Mix_Quit();
    }

    /**
     * Creates a SDLEnemyShip of a specific type at the requested coordinates
     *
     * @param x The x position
     * @param y The y position
     * @param type The type of ship
     * @return A new SDLEnemyShip
     */
    Si::EnemyShip* SDLFactory::createEnemyShip(double x, double y, int type) {
        return new SDLEnemyShip(x, y, type, renderer, texture);
    }

    /**
     * Displays everything that has been rendered until now
     */
    void SDLFactory::tickPresent() {
        SDL_RenderPresent(renderer);
    }

    /**
     * Creates a SDLPlayerBullet at the specified x position, adn plays a shooting sound
     *
     * @param x The x position
     * @return A new SDLPlayerBullet
     */
    Si::PlayerBullet* SDLFactory::createPlayerBullet(double x) {
        Mix_PlayChannel(-1, pew, 0);
        return new SDLPlayerBullet(x, renderer, texture);
    }

    /**
     * Creates a SDLEnemyBullet at the specified coordinates, with the specified dimensions and speed
     *
     * @param x The x position
     * @param y The y position
     * @param width The width
     * @param height The height
     * @param speed The speed (sign indicates up or down, should be positive for downwards)
     * @return A new SDLEnemyBullet
     */
    Si::EnemyBullet* SDLFactory::createEnemyBullet(double x, double y, double width, double height, double speed) {
        return new SDLEnemyBullet(x, y, width, height, speed, renderer, texture);
    }

    /**
     * Updates the score counter on the screen
     *
     * @param score The score to be displayed
     */
    void SDLFactory::updateScore(int score) {
        // Set the text to be shown
        std::string messageText = "Score: " + std::to_string(score);
        // Set the color of the text
        SDL_Color white = {255, 255, 255};
        // Create the text
        SDL_Surface* surfaceMessage = TTF_RenderText_Solid(font, messageText.c_str(), white);
        SDL_Texture* message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
        SDL_Rect messageRect = {0, 0, SCREEN_WIDTH / 5, SCREEN_HEIGHT / 10};
        // Render the text
        SDL_RenderCopy(renderer, message, NULL, &messageRect);
        // Free resources
        SDL_FreeSurface(surfaceMessage);
        SDL_DestroyTexture(message);
    }

    /**
     * Show the lives of the player on the screen
     *
     * @param lives The number of remaining lives
     */
    void SDLFactory::showLives(int lives) {
        // Set the text to be shown
        std::string messageText = "Lives: " + std::to_string(lives);
        // Set the color of the text
        SDL_Color white = {255, 255, 255};
        // Create the text
        SDL_Surface* surfaceMessage = TTF_RenderText_Solid(font, messageText.c_str(), white);
        SDL_Texture* message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
        SDL_Rect messageRect = {SCREEN_WIDTH - (SCREEN_WIDTH / 5), 0, SCREEN_WIDTH / 5, SCREEN_HEIGHT / 10};
        // Render the text
        SDL_RenderCopy(renderer, message, NULL, &messageRect);
        // Free resources
        SDL_FreeSurface(surfaceMessage);
        SDL_DestroyTexture(message);
    }

    /**
     * Renders the pause message in the middle of the screen, with a timer to let it blink on and off with a period of
     * one second (on half a second, off half a second)
     */
    void SDLFactory::textScreen() {
        // If blink is true, we are in the part of the loop where the text is shown
        if (blink) {
            // Sets the color
            SDL_Color green = {197, 255, 61};
            // Creates the text
            SDL_Surface* surfaceMessage = TTF_RenderText_Solid(font, pauseMessage.c_str(), green);
            SDL_Texture* message = SDL_CreateTextureFromSurface(renderer, surfaceMessage);
            SDL_Rect messageRect = {0, (5 * SCREEN_HEIGHT) / 12, SCREEN_WIDTH, SCREEN_HEIGHT / 6};
            // Render the text
            SDL_RenderCopy(renderer, message, NULL, &messageRect);
            // Free resources
            SDL_FreeSurface(surfaceMessage);
            SDL_DestroyTexture(message);
        }
        // Statement to manage the blinking
        if (blinkCounter >= FRAMES_PER_SECOND / 2) {
            blinkCounter = 0;
            blink = !blink;
        } else {
            blinkCounter++;
        }
    }

    /**
     * Creates a SDLBonus at the specified x position with specified points and speed
     *
     * @param x The x position
     * @param points The points the bonus is worth
     * @param speed The speed the bonus is going (sign indicates left or right)
     * @return A new SDLBonus
     */
    Si::Bonus* SDLFactory::createBonus(double x, int points, double speed) {
        return new SDLBonus(x, points, speed, renderer, texture);
    }

    /**
     * Lets the factory know what state the game is in to play sound effects and change display text
     *
     * @param state The new state of the game
     * @param score The score the player has
     */
    void SDLFactory::setState(int state, int score) {
        switch (state) {
            case START :
                pauseMessage = "- Press SPACE to start -";
                break;
            case PAUSED :
                pauseMessage = "- Press SPACE to resume -";
                break;
            case DEFEAT :
                Mix_PlayChannel(-1, gameOver, 0);
                pauseMessage = "- GAME OVER, press SPACE to restart -";
                break;
            case VICTORY :
                Mix_PlayChannel(-1, victory, 0);
                pauseMessage = "- Score: " + std::to_string(score) + ", press SPACE to restart -";
                break;
            default:
                break;
        }
    }

    /**
     * Creates a SDLEnemyBoss
     *
     * @return A new SDLEnemyBoss
     */
    Si::EnemyBoss* SDLFactory::createEnemyBoss() {
        return new SDLEnemyBoss(renderer, texture);
    }
}