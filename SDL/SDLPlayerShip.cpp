//
// Created by Jonas on 24/02/2020.
//


#include "SDLPlayerShip.h"

namespace Si_sdl {
    /**
     * Constructor of the SDL specific implementation of the PlayerShip class
     *
     * @param renderer The SDL renderer to which to render the ship
     * @param texture The SDL texture loaded with the sprite sheet holding the ship's sprite
     */
    SDLPlayerShip::SDLPlayerShip(SDL_Renderer* renderer, SDL_Texture* texture) : Si::PlayerShip() {
        // Calculate the height and width in pixels according to the height and width of the ship and the screen
        pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        clip = new SDL_Rect();
        // Coordinates and dimensions of the sprite on the sprite sheet
        clip->x = 202;
        clip->y = 82;
        clip->w = 52;
        clip->h = 32;
        this->texture = texture;
        // Load the sound effects
        warning = Mix_LoadWAV("../Sounds/warning.wav");
        Mix_VolumeChunk(warning, 16);
        explosion = Mix_LoadWAV("../Sounds/explosion_big.wav");
        Mix_VolumeChunk(explosion, 16);
    }

    /**
     * Renders the ship
     */
    void SDLPlayerShip::visualise() {
        // Calculate the pixel position of the ship
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        // Renders the ship
        SDL_RenderCopy(renderer, texture, clip, &renderQuad);
    }

    /**
     * Destructor
     */
    SDLPlayerShip::~SDLPlayerShip() {
        renderer = nullptr;
        texture = nullptr;
        delete (clip);
        clip = nullptr;
        Mix_FreeChunk(warning);
        warning = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
    }

    /**
     * Destroys the ship
     */
    void SDLPlayerShip::destroy() {
        active = false;
    }

    /**
     * Decrease the life of the sip and play a sound effect
     */
    void SDLPlayerShip::getHit() {
        PlayerShip::getHit();
        if (getLives() > 0) {
            Mix_PlayChannel(-1, warning, 0);
        } else {
            Mix_PlayChannel(-1, explosion, 0);
        }

    }
}