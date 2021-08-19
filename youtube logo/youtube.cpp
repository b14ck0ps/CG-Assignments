#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

/***
    Name: Ajran Hossain
    ID : 19-39334-1
***/

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS); /// red quad _logo
glColor3ub (254, 0, 2);
glVertex2i(10, 290);
glVertex2i(10, 152);
glVertex2i(200, 152);
glVertex2i(200, 290);
glEnd();

glBegin(GL_TRIANGLES); /// white triangle _logo
glColor3ub (255, 255, 255);
glVertex2i(80, 250);
glVertex2i(80, 180);
glVertex2i(135, 215);
glEnd();
// text
glBegin(GL_QUADS); /// Y
glColor3ub (0, 0, 0);
glVertex2i(250, 240);
glVertex2i(250, 170);
glVertex2i(265, 170);
glVertex2i(265, 240);
glEnd();
glBegin(GL_TRIANGLES); /// Y-l
glColor3ub (0, 0, 0);
glVertex2i(230, 290);
glVertex2i(245, 290);
glVertex2i(265, 170);
glEnd();

glBegin(GL_TRIANGLES); /// Y-r
glColor3ub (0, 0, 0);
glVertex2i(270, 290);
glVertex2i(285, 290);
glVertex2i(250, 170);
glEnd();

glBegin(GL_QUADS); /// O bg black
glColor3ub (0, 0, 0);
glVertex2i(285, 260);
glVertex2i(285, 170);
glVertex2i(340, 170);
glVertex2i(340, 260);
glEnd();

glBegin(GL_QUADS); /// O bg white
glColor3ub (255, 255, 255);
glVertex2i(300, 250);
glVertex2i(300, 180);
glVertex2i(325, 180);
glVertex2i(325, 250);
glEnd();

glBegin(GL_QUADS); /// u bg black
glColor3ub (0, 0, 0);
glVertex2i(350, 260);
glVertex2i(350, 170);
glVertex2i(390, 170);
glVertex2i(390, 260);
glEnd();

glBegin(GL_QUADS); /// u bg white
glColor3ub (255, 255, 255);
glVertex2i(365, 260);
glVertex2i(365, 180);
glVertex2i(375, 180);
glVertex2i(375, 260);
glEnd();


glBegin(GL_QUADS); /// t l
glColor3ub (0, 0, 0);
glVertex2i(400, 290);
glVertex2i(400, 170);
glVertex2i(415, 170);
glVertex2i(415, 290);
glEnd();
glBegin(GL_QUADS); /// t -
glColor3ub (0, 0, 0);
glVertex2i(380, 290);
glVertex2i(380, 270);
glVertex2i(435, 270);
glVertex2i(435, 290);
glEnd();

glBegin(GL_QUADS); /// u bg black
glColor3ub (0, 0, 0);
glVertex2i(425, 260);
glVertex2i(425, 170);
glVertex2i(475, 170);
glVertex2i(475, 260);
glEnd();

glBegin(GL_QUADS); /// u bg white
glColor3ub (255, 255, 255);
glVertex2i(440, 260);
glVertex2i(440, 180);
glVertex2i(460, 180);
glVertex2i(460, 260);
glEnd();

glBegin(GL_QUADS); /// b l
glColor3ub (0, 0, 0);
glVertex2i(485, 290);
glVertex2i(485, 170);
glVertex2i(500, 170);
glVertex2i(500, 290);
glEnd();
glBegin(GL_QUADS); /// b quad
glColor3ub (0, 0, 0);
glVertex2i(500, 240);
glVertex2i(500, 170);
glVertex2i(540, 170);
glVertex2i(540, 240);
glEnd();
glBegin(GL_QUADS); /// b quad white
glColor3ub (255,255,255);
glVertex2i(500, 230);
glVertex2i(500, 180);
glVertex2i(530, 180);
glVertex2i(530, 230);
glEnd();

glBegin(GL_QUADS); /// e quad black
glColor3ub (0,0,0);
glVertex2i(555, 240);
glVertex2i(555, 170);
glVertex2i(600, 170);
glVertex2i(600, 240);
glEnd();

glBegin(GL_QUADS); /// e quad white top
glColor3ub (255,255,255);
glVertex2i(570, 225);
glVertex2i(570, 200);
glVertex2i(585, 200);
glVertex2i(585, 225);
glEnd();
glBegin(GL_QUADS); /// e quad white right -
glColor3ub (255,255,255);
glVertex2i(570, 190);
glVertex2i(570, 180);
glVertex2i(600, 180);
glVertex2i(600, 190);
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
