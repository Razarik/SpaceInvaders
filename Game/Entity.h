//
// Created by Jonas on 24/02/2020.
//

#ifndef SPACEINVADERS_ENTITY_H
#define SPACEINVADERS_ENTITY_H

namespace Si {
    // A base class for all entities with basic properties
    class Entity {
    protected:
        double xpos;
        double ypos;
        double width;
        double height;
        bool active;
    public:
        Entity(double xpos, double ypos, double width, double height);

        virtual ~Entity();

        double getXPos();

        double getYPos();

        double getWidth();

        double getHeight();

        void move(double x, double y);

        void boundedMove(double x, double y);

        virtual void visualise() = 0;

        bool isAtEdge();

        bool isOffScreen();

        bool isColliding(Entity* entity);

        virtual void destroy() = 0;

        bool getActive();
    };
}

#endif //SPACEINVADERS_ENTITY_H
