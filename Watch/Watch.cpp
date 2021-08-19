#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>

float x, y, i;
float MinuteCounter = 0.0;
float HourCounter = 0.0;
int speed = 1;
float TIME = 1;
float mCounter;
float hCounter;

void drawCircle(float r)
{
    glBegin(GL_TRIANGLE_FAN);
    for (i = 0; i <= 2 * 3.14; i += 0.0001)
    {
        x = r * sin(i);
        y = r * cos(i);
        glVertex2f(x, y);
    }
    glEnd();
}
void text(float x, float y, char *string)
{
    glColor3f(0.0, 0.0, 0.0);
    glRasterPos2f(x, y);
    int len, i;
    len = (int)strlen(string);
    for (i = 0; i < len; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, string[i]);
    }
}
void _speed()
{
    char buffer[10];
    sprintf(buffer, "%d", speed);
    text(-0.8, -0.8, "Speed : ");
    text(-0.65, -0.8, buffer);
}
void minute()
{
    mCounter = (TIME / TIME * 2) * speed;
    glPushMatrix();
    glLineWidth(3);
    glLoadIdentity();
    glRotatef(MinuteCounter, 0.0, 0.0, -1.0);
    MinuteCounter += mCounter;
    // std::cout << " \n"
    //           << MinuteCounter;
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(0, 0.50);
    glEnd();
    glPopMatrix();
}
void hour()
{
    hCounter = mCounter / 12;
    glPushMatrix();
    glLineWidth(3);
    glLoadIdentity();
    glRotatef(HourCounter, 0.0, 0.0, -1.0);
    HourCounter += hCounter;
    // std::cout << " \n"
    //           << HourCounter;
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(0, 0.35);
    glEnd();
    glPopMatrix();
}
void watch()
{
    //outer
    glColor3ub(0, 0, 0);
    drawCircle(0.65);
    //main
    glColor3ub(200, 200, 200);
    drawCircle(0.63);

    minute();
    hour();

    glColor3ub(0, 0, 0);
    drawCircle(0.02);

    text(0.0, 0.58, "12");
    text(0.28, 0.49, "1");
    text(0.50, 0.28, "2");
    text(0.58, 0.0, "3");
    text(0.50, -0.28, "4");
    text(0.28, -0.49, "5");
    text(0.0, -0.58, "6");
    text(-0.28, -0.49, "7");
    text(-0.50, -0.28, "8");
    text(-0.58, 0.0, "9");
    text(-0.50, 0.28, "10");
    text(-0.28, 0.49, "11");

    /*
    //points
    glPointSize(3);
    glColor3ub(0, 0, 0);
    glBegin(GL_POINTS);
    glVertex2f(0.0, 0.58); //12
    glVertex2f(0.0, 0.57);
    glVertex2f(0.28, 0.49); //1
    glVertex2f(0.50, 0.28); //2
    glVertex2f(0.0, -0.58); //3
    glVertex2f(0.0, -0.57);
    glVertex2f(0.50, -0.28); //4
    glVertex2f(0.28, -0.49); //5
    glVertex2f(0.58, 0.0);   //6
    glVertex2f(0.57, 0.0);
    glVertex2f(-0.28, -0.49); //7
    glVertex2f(-0.50, -0.28); //8
    glVertex2f(-0.58, 0.0);   //9
    glVertex2f(-0.57, 0.0);
    glVertex2f(-0.50, 0.28); //10
    glVertex2f(-0.28, 0.49); //11
    */

    glEnd();

    text(-0.9, 0.9, "Press F to speed Up time");
    text(-0.9, 0.8, "Press S to slow down time");
    text(-0.9, 0.7, "Press P to pause  time");
    text(-0.9, 0.6, "Press R to reset  time");
    if (speed <= 1)
        text(-0.9, -0.9, "Can't speed down");
}
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'f':
        speed += 1;
        std::cout << " speed up";
        break;
    case 's':
        if (speed <= 1)
            std::cout << " can't speed down";
        else
            speed -= 1;
        break;
    case 'r':
        speed = 1;
        std::cout << " reset";
        break;
    case 'p':
        speed = 0;
        std::cout << " pause";
        break;

    default:
        break;
    }
}
void display(void)
{
    glClearColor(255, 255, 255, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    watch();
    _speed();
    glutSwapBuffers();
}
int main(int argc, char **argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(-1, -1);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Watch");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutIdleFunc(display);

    glutMainLoop();
    return 0;
}
