#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glColor3f(0, 0, 0);
glBegin(GL_TRIANGLE_FAN); // main star *
        glVertex2i(284,211);
        glVertex2i(274,241);
        glVertex2i(262,210);

        glVertex2i(230,210);
        glVertex2i(256,190);

        glVertex2i(247,157);
        glVertex2i(272,177);

        glVertex2i(300,158);
        glVertex2i(291,190);
        glVertex2i(317,210);
glEnd();

glBegin(GL_QUADS);//top quad
        glVertex2i(274,241);
        glVertex2i(186,241);
        glVertex2i(213,224);
        glVertex2i(274,224);
glEnd();

glBegin(GL_QUADS);//bottom quad
        glVertex2i(283,170);
        glVertex2i(239,137);
        glVertex2i(230,106);
        glVertex2i(300,158);
glEnd();

glBegin(GL_QUADS);//outer half star - Top quad
        glVertex2i(302,324);
        glVertex2i(284,275);
        glVertex2i(301,222);
        glVertex2i(333,222);
glEnd();

glBegin(GL_QUADS);//outer half star - mid quad 1
        glVertex2i(328,241);
        glVertex2i(301,222);
        glVertex2i(385,222);
        glVertex2i(415,241);
glEnd();

glBegin(GL_QUADS);//outer half star - mid quad 2
        glVertex2i(353,220);
        glVertex2i(311,188);
        glVertex2i(346,190);
        glVertex2i(415,241);
glEnd();

glBegin(GL_QUADS);//outer half star - bottom quad
        glVertex2i(311,188);
        glVertex2i(326,139);
        glVertex2i(371,105);
        glVertex2i(346,190);
glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(255,255,255,0);
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
