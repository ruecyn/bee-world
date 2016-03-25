#ifndef COLLISION_H
#define COLLISION_H
#include"Bee.h"
#include"person.h"
#include"Windmil.h"
#include"Flowers.h"
#include"Tree.h"
#include"Sprinkler.h"
#include"Backyard.h"

class collision
{
    public:
        collision();
        void detectCollision(Bee b);
       // double calDistance();
    protected:

    private:
        double distance;
        Backyard by;
        Bee b;
        Flowers flwr;
        Windmill wm;
        Tree tr;
        Sprinkler spr;
        Person pers;


};

#endif // COLLISION_H
