//
// Created by Jonas on 17/06/2020.
//

#include "SDLEnemyBoss.h"

namespace Si_sdl {
    /**
     * Constructor for SDL implementation of EnemyBoss
     *
     * @param renderer The SDL renderer to which to render the boss
     * @param texture The SDL texture loaded with the sprite sheet holding the boss's sprite
     */
    SDLEnemyBoss::SDLEnemyBoss(SDL_Renderer* renderer, SDL_Texture* texture) : Si::EnemyBoss() {
        // Set the height in pixels according to the height of the bonus and the screen, counting for a small zone
        // at the top of the screen reserved for the score and lives
        pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        // Set the width in pixels according to the width of the bonus and the screen
        pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        clip = new SDL_Rect();
        // The coordinates of the boss sprite on the sprite sheet
        clip->x = 325;
        clip->y = 80;
        clip->w = 42;
        clip->h = 42;
        barClip = new SDL_Rect();
        // The coordinates of the health bar on the sprite sheet
        barClip->x = 399;
        barClip->y = 88;
        barClip->w = 90;
        barClip->h = 25;
        this->texture = texture;
        // The sound to be played when the boss is hit
        hurt = Mix_LoadWAV("../Sounds/scream.wav");
        Mix_VolumeChunk(hurt, 32);
        // The sound to be played when the boss is defeated
        explosion = Mix_LoadWAV("../Sounds/death_scream.wav");
        Mix_VolumeChunk(explosion, 64);
    }

    /**
     * Visualise the boss on the screen
     */
    void SDLEnemyBoss::visualise() {
        // Calculate where on the screen in pixels the boss needs to be rendered
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        // Render the boss
        SDL_RenderCopy(renderer, texture, clip, &renderQuad);
        // Calculate where on the screen in pixels the health bar needs to be rendered
        renderQuad.x = (int) (double(SCREEN_WIDTH) * 0.32);
        renderQuad.y = (int) (SCREEN_HEIGHT * 0.01);
        // Determine the width according to the boss's health
        renderQuad.w = (int) (SCREEN_WIDTH * 0.36 * getHealth() / 20);
        renderQuad.h = SCREEN_WIDTH * 0.03;
        // Draw a red rectangle representing the boss's health
        SDL_SetRenderDrawColor(renderer, 128, 0, 0, 128);
        SDL_RenderFillRect(renderer, &renderQuad);
        // Set the position for the border of the health bar
        renderQuad.x = (int) (double(SCREEN_WIDTH) * 0.3);
        renderQuad.w = SCREEN_WIDTH * 0.4;
        // Render the border of the health bar
        SDL_RenderCopy(renderer, texture, barClip, &renderQuad);
    }

    /**
     * Destructor
     */
    SDLEnemyBoss::~SDLEnemyBoss() {
        renderer = nullptr;
        texture = nullptr;
        delete (clip);
        clip = nullptr;
        Mix_FreeChunk(hurt);
        hurt = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
        Mix_FreeChunk(explosion);
        explosion = nullptr;
    }

    /**
     * Destroy the boss
     */
    void SDLEnemyBoss::destroy() {
        active = false;
    }

    /**
     * Decrease the boss's health, and play a sound
     */
    void SDLEnemyBoss::hit() {
        EnemyBoss::hit();
        if (getHealth() > 0) {
            Mix_PlayChannel(-1, hurt, 0);
        } else {
            Mix_PlayChannel(-1, explosion, 0);
        }

    }
}