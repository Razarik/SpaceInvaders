//
// Created by Jonas on 16/06/2020.
//

#include "SDLBonus.h"

namespace Si_sdl {
    /**
     * Constructor for SDL implementation of Bonus
     *
     * @param x The x position of the bonus
     * @param points The amount of points the bonus is worth
     * @param speed The speed of the bonus
     * @param renderer The SDL renderer to which to render the bonus
     * @param texture The SDL texture loaded with the sprite sheet holding the bonus's sprite
     */
    SDLBonus::SDLBonus(double x, int points, double speed, SDL_Renderer* renderer,
                       SDL_Texture* texture) : Si::Bonus(x, points, speed) {
        // Set the height in pixels according to the height of the bonus and the screen, counting for a small zone
        // at the top of the screen reserved for the score and lives
        pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        // Set the width in pixels according to the width of the bonus and the screen
        pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        clip = new SDL_Rect();
        explosionClip = new SDL_Rect();
        // The coordinates and dimensions on the sprite sheet
        clip->x = 21;
        clip->y = 87;
        clip->w = 52;
        clip->h = 27;
        explosionClip->x = 121;
        explosionClip->y = 88;
        explosionClip->w = 63;
        explosionClip->h = 24;
        this->texture = texture;
        // A timer for how long the explosion should be on screen
        explodeTimer = FRAMES_PER_SECOND / 2;
        // A variable to check if the bonus is destroyed
        destroyed = false;
        // Load the sound effect for exploding
        explosion = Mix_LoadWAV("../Sounds/explosion.wav");
        Mix_VolumeChunk(explosion, 16);
    }

    /**
     * Destructor
     */
    SDLBonus::~SDLBonus() {
        renderer = nullptr;
        texture = nullptr;
        delete clip;
        clip = nullptr;
        delete explosionClip;
        explosionClip = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
    }

    /**
     * Visualise the bonus on the screen
     */
    void SDLBonus::visualise() {
        // Calculate where on the screen in pixels the bonus needs to be rendered
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        // If the bonus is destroyed render the exploded sprite
        if (destroyed) {
            SDL_RenderCopy(renderer, texture, explosionClip, &renderQuad);
            // Decrease the time the exploded sprite needs to be shown
            explodeTimer--;
        // If it is not destroyed render the normal sprite
        } else {
            SDL_RenderCopy(renderer, texture, clip, &renderQuad);
        }
        // If the exploded sprite has been shown long enough, set active to false, causing the bonus to be deleted
        // next game loop
        if (explodeTimer <= 0) {
            active = false;
        }
    }

    /**
     * Sets the bonus to destroyed, and play an explosion sound
     */
    void SDLBonus::destroy() {
        Mix_PlayChannel(-1, explosion, 0);
        destroyed = true;
    }
}