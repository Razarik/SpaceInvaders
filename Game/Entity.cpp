//
// Created by Jonas on 24/02/2020.
//

#include "Entity.h"

namespace Si {
    /**
     * Destructor
     */
    Entity::~Entity() = default;;

    /**
     * Constructor for entity
     * @param xpos The x position of the entity
     * @param ypos The y position of the entity
     * @param width The width of the entity
     * @param height The height of the entity
     */
    Entity::Entity(double xpos, double ypos, double width, double height) {
        this->xpos = xpos;
        this->ypos = ypos;
        this->width = width;
        this->height = height;
        // An entity is always active when created. Once it can be removed from the field, this is set to false
        active = true;
    }

    /**
     * Getter for the x position
     *
     * @return The x position of the entity
     */
    double Entity::getXPos() {
        return xpos;
    }

    /**
     * Getter for the y position
     *
     * @return The y position of the entity
     */
    double Entity::getYPos() {
        return ypos;
    }

    /**
     * Getter for the height of the entity
     *
     * @return The height of the entity
     */
    double Entity::getHeight() {
        return height;
    }

    /**
     * Getter for the width of the entity
     *
     * @return The width of the entity
     */
    double Entity::getWidth() {
        return width;
    }

    /**
     * Moves the entity a specified amount
     *
     * @param x The distance to move in the x direction
     * @param y The distance to move in the y direction
     */
    void Entity::move(double x, double y) {
        xpos += x;
        ypos += y;
    }

    /**
     * Moves the entity a specified amount while making sure it stays within the field
     *
     * @param x The distance to move in the x direction
     * @param y The distance to move in the y direction
     */
    void Entity::boundedMove(double x, double y) {
        // Check to see if the entity is beyond a border in the x direction and set it to be at the border if it is
        if ((xpos + x) < (width / 2)) {
            xpos = (width / 2);
        } else if ((xpos + x + (width / 2)) > (1)) {
            xpos = (1 - (width / 2));
        } else {
            xpos += x;
        }
        // Check to see if the entity is beyond a border in the y direction and set it to be at the border if it is
        if ((ypos + y) < (height / 2)) {
            ypos = (height / 2);
        } else if ((ypos + y) > (1 - (height / 2))) {
            ypos = (1 - (height / 2));
        } else {
            ypos += y;
        }
    }

    /**
     * Check if an entity is within a certain margin of the x edge
     *
     * @return True if at the edge of the x direction, false if not
     */
    bool Entity::isAtEdge() {
        return (xpos - 0.01) <= (width / 2) || (xpos + 0.01) + (width / 2) >= 1;
    }

    /**
     * Checks if an entity is fully out of the field
     *
     * @return True if out of the screen, false if still fully or partly on screen
     */
    bool Entity::isOffScreen() {
        return (xpos - (width / 2) > 1 || xpos + (width / 2) < 0 || ypos - (height / 2) > 1 || ypos + (height / 2) < 0);
    }

    /**
     * Checks if given Entity is colliding with this one
     *
     * @param entity The entity to check collision status with
     * @return True if the entity is colliding with this one, false if not
     */
    bool Entity::isColliding(Entity* entity) {
        return ((xpos + (width / 2) >= entity->getXPos() - (entity->getWidth() / 2)) &&
                (xpos - (width / 2) <= entity->getXPos() + (entity->getWidth() / 2)) &&
                (ypos + (height / 2) >= entity->getYPos() - (entity->getHeight() / 2) &&
                 (ypos - (height / 2) <= entity->getYPos() + (entity->getHeight() / 2))));
    }

    /**
     * See if the entity is still active
     *
     * @return True if active, false if not
     */
    bool Entity::getActive() {
        return active;
    }

}
