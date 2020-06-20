//
// Created by Jonas on 23/04/2020.
//

#include "SDLEnemyShip.h"


namespace Si_sdl {
    /**
     * Visualise the ship on the screen
     */
    void SDLEnemyShip::visualise() {
        // Calculate the position in pixels on the screen
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        // Determine the correct sprite to be rendered
        if (destroyed) {
            SDL_RenderCopy(renderer, texture, explosionClip, &renderQuad);
        } else if (open) {
            SDL_RenderCopy(renderer, texture, openClip, &renderQuad);
        } else {
            SDL_RenderCopy(renderer, texture, closedClip, &renderQuad);
        }
        // Calculate what the next sprite to be shown is
        if (openCounter > 0) {
            openCounter--;
        } else {
            if (destroyed) {
                active = false;
            } else {
                open = !open;
                openCounter = FRAMES_PER_SECOND / 2;
            }
        }
    }
    /**
     * Constructor for the SDL specific implementation of the EnemyShip class
     *
     * @param x The x position
     * @param y The y position
     * @param type The type of ship
     * @param renderer The SDL renderer to which to render the ship
     * @param texture The SDL texture loaded with the sprite sheet holding the ship's sprites
     */
    SDLEnemyShip::SDLEnemyShip(double x, double y, int type, SDL_Renderer* renderer, SDL_Texture* texture)
            : Si::EnemyShip(x, y, type) {
        // Calculate the height and width in pixels according to the height and width of the bullet and the screen
        this->pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        this->pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        this->openClip = new SDL_Rect();
        this->closedClip = new SDL_Rect();
        this->explosionClip = new SDL_Rect;
        // Determine the correct sprite coordinates according to the type of the ship
        switch (type) {
            case 0 :
                openClip->x = 17;
                openClip->y = 19;
                openClip->w = 54;
                openClip->h = 37;
                closedClip->x = 101;
                closedClip->y = 19;
                closedClip->w = 54;
                closedClip->h = 37;
                break;
            case 1 :
                openClip->x = 185;
                openClip->y = 19;
                openClip->w = 53;
                openClip->h = 37;
                closedClip->x = 269;
                closedClip->y = 19;
                closedClip->w = 53;
                closedClip->h = 37;
                break;
            case 2 :
                openClip->x = 350;
                openClip->y = 19;
                openClip->w = 52;
                openClip->h = 37;
                closedClip->x = 426;
                closedClip->y = 19;
                closedClip->w = 52;
                closedClip->h = 37;
                break;
            default :
                openClip->x = 17;
                openClip->y = 19;
                openClip->w = 54;
                openClip->h = 37;
                closedClip->x = 101;
                closedClip->y = 19;
                closedClip->w = 54;
                closedClip->h = 37;
                break;
        }
        // The coordinates and dimensions of the explosion sprite on the sprite sheet
        explosionClip->x = 510;
        explosionClip->y = 22;
        explosionClip->w = 53;
        explosionClip->h = 37;
        this->texture = texture;
        open = true;
        openCounter = FRAMES_PER_SECOND / 2;
        destroyed = false;
        // Load the explosion sound
        explosion = Mix_LoadWAV("../Sounds/explosion.wav");
        Mix_VolumeChunk(explosion, 16);
    }

    /**
     * Destructor
     */
    SDLEnemyShip::~SDLEnemyShip() {
        renderer = nullptr;
        texture = nullptr;
        delete openClip;
        openClip = nullptr;
        delete closedClip;
        closedClip = nullptr;
        delete explosionClip;
        explosionClip = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
    }

    /**
     * Destroys the ship
     */
    void SDLEnemyShip::destroy() {
        Mix_PlayChannel(-1, explosion, 0);
        destroyed = true;
        openCounter = FRAMES_PER_SECOND / 2;
    }

}