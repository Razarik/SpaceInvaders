//
// Created by Jonas on 15/06/2020.
//

#include "SDLEnemyBullet.h"

namespace Si_sdl {
    /**
     * Constructor for SDL implementation of EnemyBullet Class
     *
     * @param x The x position
     * @param y The y position
     * @param width The width
     * @param height The height
     * @param speed The speed
     * @param renderer The SDL renderer to which to render the bullet
     * @param texture The SDL texture loaded with the sprite sheet holding the bullet's sprite
     */
    SDLEnemyBullet::SDLEnemyBullet(double x, double y, double width, double height, double speed,
                                   SDL_Renderer* renderer, SDL_Texture* texture) : Si::EnemyBullet(
            x, y, width, height, speed) {
        // Calculate the height and width in pixels according to the height and width of the bullet and the screen
        this->pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        this->pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        this->clip = new SDL_Rect;
        this->texture = texture;
        // The coordinates of the bullet's sprite on the sprite sheet
        clip->x = 297;
        clip->y = 82;
        clip->w = 8;
        clip->h = 36;
    }

    /**
     * Visualise the bullet on the screen
     */
    void SDLEnemyBullet::visualise() {
        // Calculate the position in pixels of the bullet
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        // Render the bullet
        SDL_RenderCopy(renderer, texture, clip, &renderQuad);
    }

    /**
     * Destructor
     */
    SDLEnemyBullet::~SDLEnemyBullet() {
        renderer = nullptr;
        clip = nullptr;
        texture = nullptr;
    }

    /**
     * Destroys the bullet
     */
    void SDLEnemyBullet::destroy() {
        active = false;
    }
}