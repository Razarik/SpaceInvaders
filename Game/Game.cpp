//
// Created by Jonas on 24/02/2020.
//

#include <iostream>
#include <sysinfoapi.h>
#include <synchapi.h>
#include <vector>
#include <random>
#include "Game.h"
#include "../GameConstants.h"
#include "EnemyBoss.h"

namespace Si {
    Game* Game::instance = nullptr;

    Game::Game(AbstractFactory* F) {
        AF = F;
    }

    void Game::run() {
        // Setup booleans to check when the game needs to restart or quit, or is paused
        bool restart = false;
        bool quit = false;
        bool pause = true; // Starts true for startup screen

        // Setup FPS limiter
        int nextGameTick = GetTickCount();
        int sleepTime;

        // Initialisation
        Controller* controller = AF->createController();
        std::vector<EnemyShip*> enemyShipList;
        std::vector<PlayerBullet*> playerBulletList;
        std::vector<EnemyBullet*> enemyBulletList;
        std::vector<Bonus*> bonusList;

        // Setup random generator to generate chances
        std::random_device rand;
        std::mt19937 mt(rand());
        std::uniform_real_distribution<double> chance(0, 1);

        // Loop that restarts the game
        while (!quit) {
            // Create 5 rows of 11 ships
            for (int row = 0; row < 5; row++) {
                for (int column = 0; column < 11; column++) {
                    // Create enemy ships at their row and column position and set their type according to their row
                    EnemyShip* enemyShip = AF->createEnemyShip((column + 1) * 0.06, (row + 1) * 0.06, (row % 3));
                    // Add ship to the list
                    enemyShipList.push_back(enemyShip);
                }
            }
            // Create the player ship
            PlayerShip* playerShip = AF->createPlayerShip();

            EnemyBoss* boss = AF->createEnemyBoss();

            // Set initial values for certain game variables
            bool drop = false;              // Whether alien ships need to drop a level
            int xDir = 1;                   // Direction the alien ships are going (1 for going right, -1 for left)
            int score = 0;                  // Player score
            bool gameOver = false;          // Whether the game is finished
            int bonusCounter = 0;           // Time since last generated bonus
            bool bossFight = false;
            int pauseCounter = 0;

            // Main game loop
            while (!quit && !restart) {
                // When the game is paused, display a blinking pause text
                if (pause) {
                    pauseCounter++;
                    // Check the controller to see when the game is resumed
                    switch (controller->update()) {
                        // Player exited the game
                        case EXIT :
                            quit = true;
                            break;
                        case UNPAUSE :
                            if (pauseCounter >= 30) {
                                // If the game was over, set restart condition
                                if (gameOver) {
                                    restart = true;
                                }
                                // Unpause game
                                pause = false;
                                // Set the controller to its active state
                                controller->toggleState(true);
                                AF->setState(PLAYING, score);
                                pauseCounter = 0;
                            }
                            break;
                        default :
                            break;
                    }
                    // Do necessary setup for graphical implementation
                    AF->tickSetup();
                    // Make the pause screen ready
                    AF->textScreen();
                    // Display graphics
                    AF->tickPresent();

                }
                    // When the game is not paused
                else {
                    // Check the controller for user input
                    switch (controller->update()) {
                        case EXIT :
                            // Set the exit condition
                            quit = true;
                            break;
                        case LEFT :
                            // Move player ship left, within bounds of game field
                            playerShip->boundedMove(-0.01, 0);
                            break;
                        case RIGHT :
                            // Move player ship right, within bounds of game field
                            playerShip->boundedMove(0.01, 0);
                            break;
                        case SHOOT :
                            // If there is no player bullet on screen, generate one at the x position of the player ship
                            if (playerBulletList.empty()) {
                                PlayerBullet* bullet = AF->createPlayerBullet(playerShip->getXPos());
                                playerBulletList.push_back(bullet);
                            }
                            break;
                        case PAUSE :
                            // Set the pause condition, set controller to its paused state and set the pause message
                            pause = true;
                            controller->toggleState(false);
                            AF->setState(PAUSED, score);
                            break;
                        case DEVBULLET :
                            // Testing input, destroy all enemy ships to test win condition
                            for (EnemyShip* ship : enemyShipList) {
                                ship->destroy();
                                score += 100;
                            }
                        default :
                            break;
                    }

                    // Iterate over all player bullets (which will be maximum one because of the condition on generating one)
                    for (PlayerBullet* bullet : playerBulletList) {
                        // If the bullet goes offscreen, destroy it and subtract points from the score
                        if (bullet->isOffScreen()) {
                            bullet->destroy();
                            score -= 10;
                        }
                            // See if the bullet has collided with aliens or a bonus
                        else {
                            // Iterate over all enemy ships
                            for (EnemyShip* ship : enemyShipList) {
                                // If the bullet is colliding with a ship, destroy the ship and add points to the score
                                if (bullet->isColliding(ship)) {
                                    ship->destroy();
                                    score += 100;
                                    bullet->destroy();
                                }
                            }
                            // Iterate over all bonuses
                            for (Bonus* bonus : bonusList) {
                                // If the bullet is colliding with a bonus, destroy the bonus and add points to the score
                                if (bullet->isColliding(bonus)) {
                                    score += bonus->getPoints();
                                    bonus->destroy();
                                    bullet->destroy();
                                }
                            }
                            bullet->move(0, -0.01);
                        }
                    }

                    // Iterate over all enemy bullets
                    for (EnemyBullet* bullet : enemyBulletList) {
                        // If the bullet is offscreen, destroy it
                        if (bullet->isOffScreen()) {
                            bullet->destroy();
                        }
                            // If the bullet collides with the player, subtract one life if there are any left, if not, set Game Over
                        else if (bullet->isColliding(playerShip)) {
                            playerShip->getHit();
                            if (playerShip->getLives() <= 0) {
                                gameOver = true;
                                AF->setState(DEFEAT, score);
                                pause = true;
                                controller->toggleState(false);
                            }
                            // Destroy the bullet
                            bullet->destroy();
                        }
                            // If the bullet is not offscreen and not colliding, move it down
                        else {
                            bullet->move(0, bullet->getSpeed());
                        }
                    }

                    // Set moving distance to right or left, and drop a level if applicable
                    // Speed scales with amount of remaining ships, the less hips, the faster they go
                    double xMove = (1 + (55 - enemyShipList.size()) * 0.1) * xDir * 0.0005, yMove = drop * 0.02;
                    // Reset dropping to default false
                    drop = false;
                    // Iterate over all alien ships
                    for (EnemyShip* enemyShip : enemyShipList) {
                        // Move ships according to parameters specified above
                        enemyShip->move(xMove, yMove);
                        // If the ship is still reloading, decrement its reload timer
                        if (enemyShip->getReload() > 0) {
                            enemyShip->decrementReload();
                        }
                            // If the ship has finished reloading, spawn a bullet at its location and reset the reload timer
                        else {
                            enemyBulletList.push_back(
                                    AF->createEnemyBullet(enemyShip->getXPos(), enemyShip->getYPos(),
                                                          enemyShip->getBulletWidth(), enemyShip->getBulletHeight(),
                                                          enemyShip->getBulletSpeed()));
                            enemyShip->resetReload(enemyShipList.size());
                        }
                        // If an enemy ship manages to reach the player or get to the bottom of the screen, set the game over condition
                        if (enemyShip->isColliding(playerShip) || enemyShip->isOffScreen()) {
                            gameOver = true;
                            AF->setState(DEFEAT, score);
                            pause = true;
                            controller->toggleState(false);
                        }
                        // If one enemy ship is at the edge, switch direction and make the ships drop one level next loop
                        if (enemyShip->isAtEdge()) {
                            if (!drop) {
                                xDir *= -1;
                                drop = true;
                            }
                        }
                    }


                    // Generate a bonus by random chance
                    if (chance(mt) <= 0.003 && bonusCounter > (FRAMES_PER_SECOND * 10)) {
                        bonusCounter = 0;
                        int points = (int) (chance(mt) * 500);
                        double speed = double(points) / 300000.0;
                        // See if it goes left to right or right to left, randomise points and speed
                        if (chance(mt) > 0.5) {
                            bonusList.push_back(AF->createBonus(1, points, -speed));
                        } else {
                            bonusList.push_back(AF->createBonus(0, points, speed));
                        }
                    } else {
                        bonusCounter++;
                    }

                    // Iterate over all bonuses
                    for (int i = 0; i < bonusList.size(); i++) {
                        Bonus* bonus = bonusList.at(i);
                        // If a bonus is out of bounds, delete it
                        if (bonus->isOffScreen()) {
                            delete bonus;
                            bonusList.erase(bonusList.begin() + (i--));
                        } else {
                            // Move the bonus ai its defined speed
                            bonus->move(bonus->getSpeed(), 0);
                        }
                    }

                    // Delete all entities that are no longer active
                    for (int i = 0; i < enemyShipList.size(); i++) {
                        EnemyShip* enemyShip = enemyShipList.at(i);
                        if (!enemyShip->getActive()) {
                            delete enemyShip;
                            enemyShipList.erase(enemyShipList.begin() + (i--));
                        }
                    }
                    for (int i = 0; i < enemyBulletList.size(); i++) {
                        EnemyBullet* enemyBullet = enemyBulletList.at(i);
                        if (!enemyBullet->getActive()) {
                            delete enemyBullet;
                            enemyBulletList.erase(enemyBulletList.begin() + (i--));
                        }
                    }
                    for (int i = 0; i < playerBulletList.size(); i++) {
                        PlayerBullet* playerBullet = playerBulletList.at(i);
                        if (!playerBullet->getActive()) {
                            delete playerBullet;
                            playerBulletList.erase(playerBulletList.begin() + (i--));
                        }
                    }
                    for (int i = 0; i < bonusList.size(); i++) {
                        Bonus* bonus = bonusList.at(i);
                        if (!bonus->getActive()) {
                            delete bonus;
                            bonusList.erase(bonusList.begin() + (i--));
                        }
                    }


                    // Check to see if all enemy ships have been defeated
                    if (enemyShipList.empty()) {
                        bossFight = true;
                    }

                    if (bossFight) {
                        if (boss->getHealth() <= 0) {
                            gameOver = true;
                            AF->setState(VICTORY, score);
                            pause = true;
                            controller->toggleState(false);
                        } else {
                            for (PlayerBullet* bullet : playerBulletList) {
                                if (bullet->isColliding(boss)) {
                                    boss->hit();
                                    bullet->destroy();
                                    score += 100;
                                }
                            }
                            boss->move(0, 0.0003);
                            if (boss->getReload() <= 0) {
                                enemyBulletList.push_back(
                                        AF->createEnemyBullet(boss->getBulletX(), boss->getYPos(), 0.005, 0.025,
                                                              0.002));
                            } else {
                                boss->decrementReload();
                            }
                            if (boss->isColliding(playerShip) || boss->isOffScreen()) {
                                gameOver = true;
                                AF->setState(DEFEAT, score);
                                pause = true;
                                controller->toggleState(false);
                            }
                        }
                    }

                    // Do necessary setup for graphical implementation
                    AF->tickSetup();

                    // Visualise all entities
                    for (EnemyShip* enemyShip : enemyShipList) {
                        enemyShip->visualise();
                    }
                    for (PlayerBullet* playerBullet : playerBulletList) {
                        playerBullet->visualise();
                    }
                    for (EnemyBullet* enemyBullet: enemyBulletList) {
                        enemyBullet->visualise();
                    }
                    for (Bonus* bonus : bonusList) {
                        bonus->visualise();
                    }
                    playerShip->visualise();
                    if (bossFight) {
                        boss->visualise();
                    }

                    // Visualise the score and lives
                    AF->updateScore(score);
                    AF->showLives(playerShip->getLives());

                    // Present graphics
                    AF->tickPresent();
                }

                // FPS limiting phase of loop
                nextGameTick += SKIP_TICKS;
                sleepTime = nextGameTick - GetTickCount();
                if (sleepTime >= 0) {
                    Sleep(sleepTime);
                }
            }
            // Delete all pointers in vectors and clear them
            for (EnemyShip* ship : enemyShipList) {
                delete ship;
            }
            enemyShipList.clear();
            for (PlayerBullet* bullet : playerBulletList) {
                delete bullet;
            }
            playerBulletList.clear();
            for (EnemyBullet* bullet : enemyBulletList) {
                delete bullet;
            }
            enemyBulletList.clear();
            for (Bonus* bonus : bonusList) {
                delete bonus;
            }
            bonusList.clear();

            // Delete pointer to playerShip
            delete playerShip;

            delete boss;

            restart = false; // Resetting is done
        }
        // Delete pointer to controller
        delete controller;
    }

    Game* Game::getInstance(AbstractFactory* F) {
        if (!instance) {
            instance = new Game(F);
        }
        return instance;
    }
}