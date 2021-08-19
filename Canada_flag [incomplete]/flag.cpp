#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
/***
    TASK : CANADA FLAG
    Name : Ajran Hossain
    ID : 19-39334-1
***/
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS); /// red bg
glColor3ub (255, 24, 0);
glVertex2i(50, 330);
glVertex2i(50, 130);
glVertex2i(510, 130);
glVertex2i(510, 330);
glEnd();

glBegin(GL_QUADS); /// white bg
glColor3ub (255, 254, 255);
glVertex2i(167, 330);
glVertex2i(167, 130);
glVertex2i(397, 130);
glVertex2i(397, 330);
glEnd();

glBegin(GL_TRIANGLE_FAN); /// Triangle red mid
glColor3ub (255, 24, 0);
glVertex2i(280, 300);
glVertex2i(330, 190);
glVertex2i(280, 200);
glVertex2i(235, 190);
glEnd();
glBegin(GL_TRIANGLES); /// left leaf 1
glColor3ub (255, 24, 0);
glVertex2i(240, 200);
glVertex2i(260, 250);
glVertex2i(200, 270);
glEnd();
glBegin(GL_TRIANGLES); /// left leaf 2
glColor3ub (255, 24, 0);
glVertex2i(240, 200);
glVertex2i(260, 250);
glVertex2i(185, 210);
glEnd();
glBegin(GL_TRIANGLES); /// left leaf 3
glColor3ub (255, 24, 0);
glVertex2i(225, 210);
glVertex2i(225, 260);
glVertex2i(180, 240);//
glEnd();






glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
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
glutCreateWindow ("Flag_CANADA");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
