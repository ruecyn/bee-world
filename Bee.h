#ifndef BEE_H
#define BEE_H


class Bee
{
    public:
        float x=0,y=0,z=0,radius=0.75;
        Bee();
        Bee(float x, float y, float z,float radius);
        void render();

    protected:

    private:
        void drawBee();
};

#endif // BEE_H
