#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

/***
 Name: Ajran Hossain
 ID : 19-39334-1
 SEC: L
***/

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glColor3ub (11, 28, 80);// ear right box blue
glBegin(GL_QUADS);
glVertex2i(333, 430);
glVertex2i(333, 460);
glVertex2i(370, 460);
glVertex2i(370, 430);
glColor3ub (11, 28, 80);// ear left box blue
glBegin(GL_QUADS);
glVertex2i(240, 430);
glVertex2i(240, 460);
glVertex2i(283, 460);
glVertex2i(283, 430);
glColor3ub (11, 28, 80);// face box blue
glBegin(GL_QUADS);
glVertex2i(240, 340);
glVertex2i(240, 430);
glVertex2i(370, 430);
glVertex2i(370, 340);
glColor3ub (5, 11, 32);// dark shade right box dark
glBegin(GL_QUADS);
glVertex2i(240, 460);
glVertex2i(240, 340);
glVertex2i(283, 340);
glVertex2i(283, 460);
glColor3ub (255, 159, 47);// neck box amber
glBegin(GL_QUADS);
glVertex2i(240, 370);
glVertex2i(240, 340);
glVertex2i(370, 340);
glVertex2i(370, 370);
glColor3ub (180, 103, 10);// dark neck box amber-dark
glBegin(GL_QUADS);
glVertex2i(240, 370);
glVertex2i(240, 340);
glVertex2i(283, 340);
glVertex2i(283, 370);
glColor3ub (255, 159, 47);// shoulder box amber
glBegin(GL_QUADS);
glVertex2i(160, 280);
glVertex2i(160, 250);
glVertex2i(440, 250);
glVertex2i(440, 280);
glEnd();
glColor3ub (103, 102, 103);// chest Box
glBegin(GL_QUADS);
glVertex2i(200, 340);
glVertex2i(200, 250);
glVertex2i(400, 250);
glVertex2i(400, 340);
glEnd();
glColor3ub (103, 102, 103);// shoulder box gray
glBegin(GL_QUADS);
glVertex2i(160, 310);
glVertex2i(160, 280);
glVertex2i(440, 280);
glVertex2i(440, 310);
glEnd();
glColor3ub (52, 51, 52);// chest inner Box
glBegin(GL_QUADS);
glVertex2i(240, 310);
glVertex2i(240, 280);
glVertex2i(360, 280);
glVertex2i(360, 310);
glEnd();
glColor3ub (11, 28, 80);// belt box blue
glBegin(GL_QUADS);
glVertex2i(160, 250);
glVertex2i(160, 220);
glVertex2i(440, 220);
glVertex2i(440, 250);
glEnd();
glColor3ub (255, 227, 26);// belt box yellow
glBegin(GL_QUADS);
glVertex2i(200, 250);
glVertex2i(200, 220);
glVertex2i(400, 220);
glVertex2i(400, 250);
glEnd();
glColor3ub (1, 0, 1);// cape box black
glBegin(GL_QUADS);
glVertex2i(160, 220);
glVertex2i(160, 100);
glVertex2i(440, 100);
glVertex2i(440, 220);
glEnd();
glColor3ub (11, 28, 80);// pant box blue
glBegin(GL_QUADS);
glVertex2i(200, 220);
glVertex2i(200, 140);
glVertex2i(400, 140);
glVertex2i(400, 220);
glEnd();
glColor3ub (5, 11, 32);// pocket left box dark
glBegin(GL_QUADS);
glVertex2i(200, 220);
glVertex2i(200, 170);
glVertex2i(240, 170);
glVertex2i(240, 220);
glEnd();
glColor3ub (103, 102, 103);// left leg box lite gray
glBegin(GL_QUADS);
glVertex2i(240, 140);
glVertex2i(240, 40);
glVertex2i(280, 40);
glVertex2i(280, 140);
glEnd();
glColor3ub (52, 51, 52);// left leg box gray
glBegin(GL_QUADS);
glVertex2i(200, 170);
glVertex2i(200, 40);
glVertex2i(240, 40);
glVertex2i(240, 170);
glEnd();
glColor3ub (11, 28, 80);// left feet box blue
glBegin(GL_QUADS);
glVertex2i(240, 40);
glVertex2i(240, 10);
glVertex2i(280, 10);
glVertex2i(280, 40);
glEnd();
glColor3ub (5, 11, 32);// left feet box black
glBegin(GL_QUADS);
glVertex2i(200, 40);
glVertex2i(200, 10);
glVertex2i(240, 10);
glVertex2i(240, 40);
glEnd();
glColor3ub (52, 51, 52);// right leg box lite gray
glBegin(GL_QUADS);
glVertex2i(320, 140);
glVertex2i(320, 40);
glVertex2i(360, 40);
glVertex2i(360, 140);
glEnd();
glColor3ub (103, 102, 103);// right leg box gray
glBegin(GL_QUADS);
glVertex2i(360, 170);
glVertex2i(360, 40);
glVertex2i(400, 40);
glVertex2i(400, 170);
glEnd();
glColor3ub (5, 11, 32);// right feet box blue
glBegin(GL_QUADS);
glVertex2i(320, 40);
glVertex2i(320, 10);
glVertex2i(360, 10);
glVertex2i(360, 40);
glEnd();
glColor3ub (11, 28, 80);// right feet box black
glBegin(GL_QUADS);
glVertex2i(360, 40);
glVertex2i(360, 10);
glVertex2i(400, 10);
glVertex2i(400, 40);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(255, 255, 255, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
