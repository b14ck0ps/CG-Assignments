#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
/***
    TASK : WWE LOGO
    Name : Ajran Hossain
    ID : 19-39334-1
***/
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glBegin(GL_QUADS);/// bt red line 1
glColor3ub (255, 24, 0);
glVertex2i(415, 100);
glVertex2i(550, 100);
glVertex2i(570, 148);
glVertex2i(415, 140);
glEnd();

glBegin(GL_TRIANGLES);/// bt w 1
glColor3ub (0, 0, 0);
glVertex2i(240, 100);
glVertex2i(265, 150);
glVertex2i(95, 430);
glEnd();
glBegin(GL_TRIANGLES);/// bt w 2
glColor3ub (0, 0, 0);
glVertex2i(240, 100);
glVertex2i(420, 100);
glVertex2i(340, 300);
glEnd();
glBegin(GL_TRIANGLES);/// bt white
glColor3ub (255,255,255);
glVertex2i(280, 100);
glVertex2i(380, 100);
glVertex2i(336, 210);
glEnd();

glBegin(GL_QUADS);/// bt red line 2
glColor3ub (255, 24, 0);
glVertex2i(280, 100);
glVertex2i(380, 100);
glVertex2i(367, 135);
glVertex2i(297, 135);
glEnd();

glBegin(GL_TRIANGLES);/// bt w 3
glColor3ub (0, 0, 0);
glVertex2i(420, 100);
glVertex2i(400, 150);
glVertex2i(580, 430);
glEnd();
glBegin(GL_TRIANGLES);/// bt w 4
glColor3ub (0, 0, 0);
glVertex2i(380, 100);
glVertex2i(420, 100);
glVertex2i(400, 60);
glEnd();

glBegin(GL_TRIANGLES);/// bt w 5
glColor3ub (0, 0, 0);
glVertex2i(240, 100);
glVertex2i(280, 100);
glVertex2i(260, 60);
glEnd();

glBegin(GL_TRIANGLES);/// bt red line 3
glColor3ub (255, 24, 0);
glVertex2i(232, 120);
glVertex2i(245, 90);
glVertex2i(70, 90);
glEnd();

// top w


glFlush ();
}

void myInit (void)
{
glClearColor(255,255,255, 0.0);
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
glutCreateWindow ("wwe");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
