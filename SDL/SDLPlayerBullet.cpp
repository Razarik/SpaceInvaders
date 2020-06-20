//
// Created by Jonas on 13/06/2020.
//

#include "SDLPlayerBullet.h"

namespace Si_sdl {
    /**
     * Constructor of the SDL implementation of PlayerBullet
     *
     * @param x The x position of the bullet
     * @param renderer The SDL renderer to which to render the bullet
     * @param texture The SDL texture loaded with the sprite sheet holding the bullet's sprite
     */
    SDLPlayerBullet::SDLPlayerBullet(double x, SDL_Renderer* renderer, SDL_Texture* texture) : Si::PlayerBullet(x) {
        // Calculate the height and width in pixels according to the height and width of the bullet and the screen
        this->pixelHeight = (int) (SCREEN_HEIGHT * height * 0.9);
        this->pixelWidth = (int) (SCREEN_WIDTH * width);
        this->renderer = renderer;
        this->clip = new SDL_Rect;
        this->texture = texture;
        // The coordinates and dimensions of the sprite on the sprite sheet
        clip->x = 285;
        clip->y = 82;
        clip->w = 8;
        clip->h = 36;
    }

    /**
     * Visualise the bullet on the screen
     */
    void SDLPlayerBullet::visualise() {
        // Calculate the pixel position of the bullet
        SDL_Rect renderQuad = {(int) (SCREEN_WIDTH * xpos) - pixelWidth / 2,
                               (int) (SCREEN_HEIGHT * ((ypos * 0.9) + 0.1) -
                                      (pixelHeight / 2.0)), pixelWidth, pixelHeight};
        // Render the bullet
        SDL_RenderCopy(renderer, texture, clip, &renderQuad);
    }

    /**
     * Destructor
     */
    SDLPlayerBullet::~SDLPlayerBullet() {
        renderer = nullptr;
        clip = nullptr;
        texture = nullptr;
    }

    /**
     * Destroys the bullet
     */
    void SDLPlayerBullet::destroy() {
        active = false;
    }
}