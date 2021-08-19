#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glLineWidth(2.5);
glBegin(GL_QUADS); /// top left box
glColor3ub (0, 0, 0);
glVertex2i(100, 320);
glVertex2i(100, 265);
glVertex2i(300, 265);
glVertex2i(300, 320);
glEnd();

glBegin(GL_POLYGON); /// 1f front
glColor3ub (0, 0, 0);
glVertex2i(30, 270);
glVertex2i(72, 235);
glVertex2i(170, 235);
glVertex2i(140, 270);
glEnd();

glBegin(GL_LINES); /// top left box LINES
glColor3ub (255, 255, 255);
glVertex2i(100, 278.7);
glVertex2i(300, 278.7);//h1
glVertex2i(100, 292.4);
glVertex2i(300, 292.4);//h2
glVertex2i(100, 306.1);
glVertex2i(300, 306.1);//h2

glVertex2i(133.3,320);
glVertex2i(133.3,268);//v1
glVertex2i(166.3,320);
glVertex2i(166.3,265);//v2
glVertex2i(199.9,320);
glVertex2i(199.9,265);//v3
glVertex2i(233.2,320);
glVertex2i(233.2,265);//v4
glVertex2i(266.5,320);
glVertex2i(266.5,265);//v5


glEnd();

glBegin(GL_POLYGON); /// top left mid memory shape
glColor3ub (0, 0, 0);
glVertex2i(375, 325);
glVertex2i(305, 325);
glVertex2i(305, 265);
glVertex2i(383, 265);
glVertex2i(383, 315);
glEnd();

glBegin(GL_QUADS); /// mid box
glColor3ub (0, 0, 0);
glVertex2i(390, 320);
glVertex2i(390, 265);
glVertex2i(500, 265);
glVertex2i(500, 320);
glEnd();
glLineWidth(2.5);
glBegin(GL_LINES); /// mid box box LINES
glColor3ub (255, 255, 255);
glVertex2i(390, 278.7);
glVertex2i(500, 278.7);//h1
glVertex2i(390, 292.4);
glVertex2i(500, 292.4);//h2
glVertex2i(390, 306.1);
glVertex2i(500, 306.1);//h2

glVertex2i(426.6,320);
glVertex2i(426.6,265);//v1
glVertex2i(465.3,320);
glVertex2i(465.3,265);//v2

glEnd();

glBegin(GL_POLYGON); /// Right box
glColor3ub (0, 0, 0);
glVertex2i(510, 310);
glVertex2i(510, 265);
glVertex2i(530, 265);
glVertex2i(530, 330);
glVertex2i(515, 330);
glEnd();

glBegin(GL_QUADS); /// Right last box
glColor3ub (0, 0, 0);
glVertex2i(540, 320);
glVertex2i(540, 265);
glVertex2i(575, 265);
glVertex2i(575, 320);
glEnd();

glBegin(GL_LINES); /// Right last box LINES
glColor3ub (255, 255, 255);
glVertex2i(540, 278.7);
glVertex2i(575, 278.7);//h1
glVertex2i(540, 292.4);
glVertex2i(575, 292.4);//h2
glVertex2i(540, 306.1);
glVertex2i(575, 306.1);//h2
glEnd();

glBegin(GL_POLYGON); /// 1f
glColor3ub (0, 0, 0);
glVertex2i(45, 258);
glVertex2i(72, 235);
glVertex2i(590, 235);
glVertex2i(600, 258);
glEnd();

glLineWidth(6);
glBegin(GL_LINE_STRIP); /// 1f front line work
glColor3ub (255, 255, 255);
glVertex2i(10,270);
glVertex2i(120,270);
glVertex2i(150,261);
glEnd();

glBegin(GL_POLYGON); /// base
glColor3ub (0, 0, 0);
glVertex2i(75, 230);
glVertex2i(100, 200);
glVertex2i(580, 200);
glVertex2i(590, 230);
glEnd();

glBegin(GL_TRIANGLES); /// base front
glColor3ub (0, 0, 0);
glVertex2i(85, 200);
glVertex2i(100, 200);
glVertex2i(115, 215);
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
