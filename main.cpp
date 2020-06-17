#include <iostream>
#include "SDL/SDLFactory.h"
#include "Game/Game.h"

int main(int argc, char *args[]) {
    Si::AbstractFactory *AF = new Si_sdl::SDLFactory();
    Si::Game *g = Si::Game::getInstance(AF);
    g->run();
    return 0;
}