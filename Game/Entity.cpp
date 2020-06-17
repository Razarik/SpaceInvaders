//
// Created by Jonas on 24/02/2020.
//

#include <iostream>
#include "Entity.h"

namespace Si {
    Entity::~Entity() = default;;

    Entity::Entity(double xpos, double ypos, double width, double height) {
        this->xpos = xpos;
        this->ypos = ypos;
        this->width = width;
        this->height = height;
        active = true;
    }

    double Entity::getXPos() {
        return xpos;
    }

    double Entity::getYPos() {
        return ypos;
    }

    double Entity::getHeight() {
        return height;
    }

    double Entity::getWidth() {
        return width;
    }

    void Entity::move(double x, double y) {
        xpos += x;
        ypos += y;
    }

    void Entity::boundedMove(double x, double y) {
        if ((xpos + x) < (width / 2)) {
            xpos = (width / 2);
        } else if ((xpos + x + (width / 2)) > (1)) {
            xpos = (1 - (width / 2));
        } else {
            xpos += x;
        }
        if ((ypos + y) < (height / 2)) {
            ypos = (height / 2);
        } else if ((ypos + y) > (1 - (height / 2))) {
            ypos = (1 - (height / 2));
        } else {
            ypos += y;
        }
    }

    void Entity::setXPos(double newPos) {
        xpos = newPos;
    }

    void Entity::setYPos(double newPos) {
        ypos = newPos;
    }

    bool Entity::isAtEdge() {
        return (xpos - 0.01) <= (width / 2) || (xpos + 0.01) + (width / 2) >= 1;
    }

    bool Entity::isOffScreen() {
        return (xpos - (width / 2) > 1 || xpos + (width / 2) < 0 || ypos - (height / 2) > 1 || ypos + (height / 2) < 0);
    }

    bool Entity::isColliding(Entity *entity) {
        return ((xpos + (width / 2) >= entity->getXPos() - (entity->getWidth() / 2)) &&
                (xpos - (width / 2) <= entity->getXPos() + (entity->getWidth() / 2)) &&
                (ypos + (height / 2) >= entity->getYPos() - (entity->getHeight() / 2) &&
                 (ypos - (height / 2) <= entity->getYPos() + (entity->getHeight() / 2))));
    }

    bool Entity::getActive() {
        return active;
    }

}
