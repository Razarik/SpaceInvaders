#include <iostream>
#include "SDL/SDLFactory.h"
#include "Game/Game.h"


// Main startup of code
int main(int argc, char* args[]) {
    // Create an Abstract Factory as and SDL Factory, implementing the game in SDL
    Si::AbstractFactory* AF = new Si_sdl::SDLFactory();
    // Make the main game object
    Si::Game* g = Si::Game::getInstance(AF);
    //Run the game
    g->run();
    return 0;
}