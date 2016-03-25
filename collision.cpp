#include "collision.h"
#include "math.h"
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <iostream>
#include<math.h>
collision::collision()
{
    //ctor
}


/*double collision::calDistance(Obj o){
double dist1= pow((o.x-b.x),2)+((o.y-b.y),2)+((o.z-b.z),2);
distance=sqrt(dist1);
return distance;
}*/
void collision::detectCollision(Bee b){
/*if(calDistance()+0.75==0){
    b.x++;
}*/
if(b.x+b.radius==by.x && b.y+b.radius==by.y && b.z+b.radius==by.z){
    b.x++;
    b.z--;
    b.y++;
}
else if(b.x+b.radius==flwr.x && b.y+b.radius==flwr.y && b.z+b.radius==flwr.z){
    b.x++;
    b.z--;
    b.y++;
}
else if(b.x+b.radius==pers.x && b.y+b.radius==pers.y && b.z+b.radius==pers.z){
    b.x++;
    b.z--;
    b.y++;
}
else if(b.x+b.radius==wm.x && b.y+b.radius==wm.y && b.z+b.radius==wm.z){
    b.x++;
    b.z--;
    b.y++;
}
else if(b.x+b.radius==tr.x && b.y+b.radius==tr.y && b.z+b.radius==tr.z){
    b.x++;
    b.z--;
    b.y++;
}
else{
    b.movePlayer();
}

}
