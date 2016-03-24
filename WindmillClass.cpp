#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

class Windmill{

public:
GLfloat angle = 0.0f;
GLUquadricObj*qobj;

};

void DrawWindmill{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
   glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix

   // Render a color-cube consisting of 6 quads with different colors
   glLoadIdentity();                 // Reset the model-view matrix
   glTranslatef(1.5f, 0.0f, -7.0f);  // Move right and into the screen


qobj=gluNewQuadric();
//glShadeModel(GL_FLAT);
glPushMatrix();
glTranslatef(0,-3.5f,-0.5f);
glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
glShadeModel(GL_FLAT);
gluCylinder(qobj,0.25f,0.25f,3.5f,15,15);
glPopMatrix();

   //glPushMatrix();
   glRotatef(angle, 0.0f, 0.0f, 1.0f);
   glBegin(GL_QUADS);
  // glRotatef(angle+0.2f, 0.0f, 0.0f, 1.0f);               // Begin drawing the color cube with 6 quads
      // Top face (y = 1.0f)
      // Define vertices in counter-clockwise (CCW) order with normal pointing out
      glColor3f(0.0f, 0.0f, 1.0f);     // Green
      glVertex3f( 0.25f, 0.25f, -0.25f);
      glVertex3f(-0.25f, 0.25f, -0.25f);
      glVertex3f(-0.25f, 0.25f,  0.25f);
      glVertex3f( 0.25f, 0.25f,  0.25f);


      // Bottom face (y = -1.0f)
      glColor3f(0.0f, 0.0f, 1.0f);     // Orange
      glVertex3f( 0.25f, -0.25f,  0.25f);
      glVertex3f(-0.25f, -0.25f,  0.25f);
      glVertex3f(-0.25f, -0.25f, -0.25f);
      glVertex3f( 0.25f, -0.25f, -0.25f);


      // Front face  (z = 1.0f)
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f( 0.25f,  0.25f, 0.25f);
      glVertex3f(-0.25f,  0.25f, 0.25f);
      glVertex3f(-0.25f, -0.25f, 0.25f);
      glVertex3f( 0.25f, -0.25f, 0.25f);

      // Back face (z = -1.0f)
      glColor3f(0.0f, 0.0f, 1.0f);     // Yellow
      glVertex3f( 0.25f, -0.25f, -0.25f);
      glVertex3f(-0.25f, -0.25f, -0.25f);
      glVertex3f(-0.25f,  0.25f, -0.25f);
      glVertex3f( 0.25f,  0.25f, -0.25f);

      // Left face (x = -1.0f)
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-0.25f,  0.25f,  0.25f);
      glVertex3f(-0.25f,  0.25f, -0.25f);
      glVertex3f(-0.25f, -0.25f, -0.25f);
      glVertex3f(-0.25f, -0.25f,  0.25f);

      // Right face (x = 1.0f)
      glColor3f(0.0f, 0.0f, 1.0f);     // Magenta
      glVertex3f(0.25f,  0.25f, -0.2f);
      glVertex3f(0.25f,  0.25f,  0.25f);
      glVertex3f(0.25f, -0.25f,  0.25f);
      glVertex3f(0.25f, -0.25f, -0.25f);


   glEnd();// End of drawing color-cube
/*angle += 0.5f;

	if (angle >= 360.f)
		angle = 0.0f;
*/
angle += 0.002f;
   // Render a pyramid consists of 4 triangles
 //  glLoadIdentity();                  // Reset the model-view matrix
   //glTranslatef(-1.5f, 0.0f, -6.0f);  // Move left and into the screen

  glRotatef(angle, 0.0f, 0.0f, 1.0f);
   glBegin(GL_TRIANGLES);  // Begin drawing the pyramid with 4 triangles

   //TOP PYRAMID
      // Front
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f( 0.0f, 2.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Green
      glVertex3f(-0.25f, 0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(0.25f, 0.25f, 0.25f);

      // Right
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(0.0f, 2.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(0.25f, 0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Green
      glVertex3f(0.25f, 0.25f, -0.25f);

      // Back
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(0.0f, 2.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Green
      glVertex3f(0.25f, 0.25f, -0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-0.25f, 0.25f, -0.25f);

      // Left
      glColor3f(0.0f,0.0f,1.0f);       // Red
      glVertex3f( 0.0f, 2.0f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // Blue
      glVertex3f(-0.25f,0.25f,-0.25f);
      glColor3f(0.0f,0.0f,1.0f);       // Green
      glVertex3f(-0.25f,0.25f, 0.25f);


      //LEFT PYRAMID
      //front
       glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(-2.25f, 0.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Green
      glVertex3f(-0.25f, 0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-0.25f, -0.25f, 0.25f);

       // Right
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(-2.25f, 0.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // green
      glVertex3f(-0.25f, 0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // blue
      glVertex3f(-0.25f, 0.25f, -0.25f);


       // Back
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(-2.25f, 0.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // blue
      glVertex3f(-0.25f, 0.25f, -0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // green
      glVertex3f(-0.25f, -0.25f, -0.25f);

       // Left
      glColor3f(0.0f,0.0f,1.0f);       // Red
      glVertex3f( -2.25f, 0.0f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // green
      glVertex3f(-0.25f,-0.25f,-0.25f);
      glColor3f(0.0f,0.0f,1.0f);       // blue
      glVertex3f(-0.25f, -0.25f, 0.25f);



      //RIGHT PYRAMID


       // Front
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f( 2.25f, 0.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Green
      glVertex3f(0.25f, -0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(0.25f, 0.25f, 0.25f);

       //Right
       glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(2.25f, 0.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // green
      glVertex3f(0.25f, -0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // blue
      glVertex3f(-0.25f, 0.25f, 0.25f);

       // Back
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(2.25f, 0.0f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // blue
      glVertex3f(-0.25f, 0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // green
      glVertex3f(0.25f, 0.25f, -0.25f);

       // Left
      glColor3f(0.0f,0.0f,1.0f);       // Red
      glVertex3f( 2.25f, 0.0f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // green
      glVertex3f(0.25f,0.25f,-0.25f);
      glColor3f(0.0f,0.0f,1.0f);       // blue
      glVertex3f(0.25f, 0.25f, 0.25f);

//BOTTOM PYRAMID

       // Front
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f( 0.0f, -2.25f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Green
      glVertex3f(0.25f, -0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // Blue
      glVertex3f(-0.25f, -0.25f, 0.25f);


       //Right
       glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(0.0f, -2.25f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // green
      glVertex3f(0.25f, -0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // blue
      glVertex3f(-0.25f, -0.25f, 0.25f);

       // Back
      glColor3f(0.0f, 0.0f, 1.0f);     // Red
      glVertex3f(0.0f, 2.25f, 0.0f);
      glColor3f(0.0f, 0.0f, 1.0f);     // blue
      glVertex3f(-0.25f, 0.25f, 0.25f);
      glColor3f(0.0f, 0.0f, 1.0f);     // green
      glVertex3f(-0.25f, -0.25f, -0.25f);

       // Left
      glColor3f(0.0f,0.0f,1.0f);       // Red
      glVertex3f( 0.0f, -2.25f, 0.0f);
      glColor3f(0.0f,0.0f,1.0f);       // green
      glVertex3f(-0.25f,-0.25f,-0.25f);
      glColor3f(0.0f,0.0f,1.0f);       // blue
      glVertex3f(0.25f, 0.25f, 0.25f);


   glEnd();   // Done drawing the pyramid

    angle += 0.002f;

   glutSwapBuffers();// Swap the front and back frame buffers (double buffering)

}
