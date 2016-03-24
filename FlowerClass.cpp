#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <GL/gl.h>
#include <stdlib.h>
#include <stdio.h>

class Flower{
public:
    GLUquadricObj*qd;
};
void DrawFlowers(){

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
   glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix

   // Render a color-cube consisting of 6 quads with different colors
   glLoadIdentity();                 // Reset the model-view matrix

/*glClipPlane(GL_CLIP_PLANE1,clip_plane1);
glEnable(GL_CLIP_PLANE1);*/
// drawing a sphere
qd=gluNewQuadric();


glPushMatrix();
glColor3f(0.5f, 0.35f, 0.05f);
glTranslatef(1.5f,-2.4f,-7.0f);
glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
glShadeModel(GL_FLAT);
gluCylinder(qd,0.25f,0.25f,2.25f,15,15);
glPopMatrix();

//pink flower
glTranslatef(1.5f, 0.0f, -7.0f);  // Move right and into the screen
glColor3f(1.0f,0.0f,1.0f);
gluSphere(qd,0.9f,30,30);


glPushMatrix();
glColor3f(0.5f, 0.35f, 0.05f);
glTranslatef(-1.5f,-2.4f,-7.0f);
glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
glShadeModel(GL_FLAT);
gluCylinder(qd,0.25f,0.25f,2.25f,15,15);
glPopMatrix();

//green flower
glTranslatef(-1.5f, 0.4f, -7.0f);  // Move right and into the screen
glColor3f(0.0f,1.0f,0.0f);
gluSphere(qd,0.9f,30,30);


glPushMatrix();
glColor3f(0.5f, 0.35f, 0.05f);
glTranslatef(-3.0f,-2.4f,-7.0f);
glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
glShadeModel(GL_FLAT);
gluCylinder(qd,0.25f,0.25f,2.25f,15,15);
glPopMatrix();

//red flower
glTranslatef(-3.0f, 0.0f, -7.0f);  // Move right and into the screen
glColor3f(1.0f,0.0f,0.0f);
gluSphere(qd,0.9f,30,30);

glPushMatrix();
glColor3f(0.5f, 0.35f, 0.05f);
glTranslatef(-1.0f,-2.4f,7.0f);
glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
glShadeModel(GL_FLAT);
gluCylinder(qd,0.25f,0.25f,2.25f,15,15);
glPopMatrix();
//yellow flower
glTranslatef(-1.0f, 0.0f, 7.0f);  // Move right and into the screen
glColor3f(1.0f,1.0f,0.0f);
gluSphere(qd,0.9f,30,30);


gluDeleteQuadric(qd);
glDisable(GL_CLIP_PLANE1);
   glutSwapBuffers();  // Swap the front and back frame buffers (double buffering)

}
