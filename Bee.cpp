#include "Bee.h"
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <iostream>
#include<math.h>
Bee::Bee()
{
    //ctor
}
Bee::Bee(float x, float y, float z, float radius){
this->x= x;
this->y= y;
this->z= z;
this->radius=radius;
x=0;y=0;z=0;radius=0.75;
}

void Bee::render(){
glPushMatrix();
glTranslated(x,y,z);
drawBee();
glPopMatrix();
}
void Bee::drawBee(){
glPushMatrix();
glColor3f(1.0,0.8,0);
glScaled(1,1,4);
glutSolidSphere(radius,25,25);
glPushMatrix();
glColor3f(1,1,1);
glTranslated(-0.2,0.9,0);
glutSolidSphere(0.15,25,25);
glTranslated(0.25,0,0);
glutSolidSphere(0.15,25,25);
glPopMatrix();
glPushMatrix();
glColor3f(0,0,0);
glTranslated(0,0,-0.3);
glRotatef(180,1,0,0);
glutSolidCone(0.15,0.7,8,8);
glPopMatrix();
glPopMatrix();
}
