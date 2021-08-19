#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

/***
        TASK 2 LOGO
    Name: Ajran Hossain
    ID:   19-39334-1
***/

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glBegin(GL_QUADS);/// GREEN BG
glColor3ub (0, 128, 64);
glVertex2i(15, 465);
glVertex2i(15, 15);
glVertex2i(625, 15);
glVertex2i(625, 465);
glEnd();

glBegin(GL_QUADS);/// 1 box white
glColor3ub (255,255,255);
glVertex2i(220, 425);
glVertex2i(220, 50);
glVertex2i(420, 50);
glVertex2i(420, 425);
glEnd();

glBegin(GL_QUADS);/// 2 box white
glColor3ub (255,255,255);
glVertex2i(180, 395);
glVertex2i(180, 80);
glVertex2i(460, 80);
glVertex2i(460, 395);
glEnd();

glBegin(GL_QUADS);/// 3 box white
glColor3ub (255,255,255);
glVertex2i(140, 365);
glVertex2i(140, 110);
glVertex2i(500, 110);
glVertex2i(500, 365);
glEnd();

glBegin(GL_QUADS);/// 4 box white
glColor3ub (255,255,255);
glVertex2i(100, 335);
glVertex2i(100, 140);
glVertex2i(540, 140);
glVertex2i(540, 335);
glEnd();

glBegin(GL_QUADS);/// 5 box white
glColor3ub (255,255,255);
glVertex2i(60, 305);
glVertex2i(60, 170);
glVertex2i(580, 170);
glVertex2i(580, 305);
glEnd();

glBegin(GL_QUADS);/// 1 box green
glColor3ub (0, 128, 64);
glVertex2i(220, 370);
glVertex2i(220, 340);
glVertex2i(420, 340);
glVertex2i(420, 370);
glEnd();

glBegin(GL_QUADS);/// 2 box green
glColor3ub (0, 128, 64);
glVertex2i(260, 370);
glVertex2i(260, 110);
glVertex2i(380, 110);
glVertex2i(380, 370);
glEnd();

glBegin(GL_QUADS);/// 3 box green
glColor3ub (0, 128, 64);
glVertex2i(220, 310);
glVertex2i(220, 170);
glVertex2i(420, 170);
glVertex2i(420, 310);
glEnd();

glBegin(GL_QUADS);/// 4 box green
glColor3ub (0, 128, 64);
glVertex2i(180, 280);
glVertex2i(180, 200);
glVertex2i(460, 200);
glVertex2i(460, 280);
glEnd();

glBegin(GL_QUADS);/// 5 box green
glColor3ub (0, 128, 64);
glVertex2i(220, 110);
glVertex2i(220, 140);
glVertex2i(420, 140);
glVertex2i(420, 110);
glEnd();

glBegin(GL_QUADS);/// 1 inner-box white
glColor3ub (255,255,255);
glVertex2i(260, 280);
glVertex2i(260, 195);
glVertex2i(380, 195);
glVertex2i(380, 280);
glEnd();

glBegin(GL_QUADS);/// 2 inner-box white
glColor3ub (255,255,255);
glVertex2i(300, 310);
glVertex2i(300, 165);
glVertex2i(340, 165);
glVertex2i(340, 310);
glEnd();

glBegin(GL_QUADS);/// 3 inner-box white
glColor3ub (255,255,255);
glVertex2i(220, 255);
glVertex2i(220, 225);
glVertex2i(420, 225);
glVertex2i(420, 255);
glEnd();


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
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
