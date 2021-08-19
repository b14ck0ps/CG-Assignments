#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;
int X1,X2,X3, Y1, Y2, Y3;

float angle;
int check;
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);

glBegin(GL_TRIANGLES);
glVertex2i(X1, Y1);
glVertex2i(X2, Y2);
glVertex2i(X3, Y3);
glEnd();
// step-1
int X11 = X1-X1;
int Y11 = Y1-Y1;
int X22 = X2-X1;
int Y22 = Y2-Y1;
int X33 = X3-X1;
int Y33 = Y3-Y1;
glColor3ub (255, 0, 0);

glBegin(GL_TRIANGLES);
glVertex2i(X11, Y11);
glVertex2i(X22, Y22);
glVertex2i(X33, Y33);
glEnd();
// TODO:  Step-2 Put Rotation equation and find new values
float red = (3.1416/180)*angle;
int x11,y11,x22,y22,x33,y33;
if(check == 0){
     x11 = X11 * cos(red) - Y11 * sin(red);
     y11 = X11 * sin(red) + Y11 * cos(red);
     x22 = X22 * cos(red) - Y22 * sin(red);
     y22 = X22 * sin(red) + Y22 * cos(red);
     x33 = X33 * cos(red) - Y33 * sin(red);
     y33 = X33 * sin(red) + Y33 * cos(red);
}else if (check == 1){
     x11 = X11 * cos(red) + Y11 * sin(red);
     y11 = Y11 * cos(red) - X11 * sin(red);
     x22 = X22 * cos(red) + Y22 * sin(red);
     y22 = Y22 * cos(red) - X22 * sin(red);
     x33 = X33 * cos(red) + Y33 * sin(red);
     y33 = Y33 * cos(red) - X33 * sin(red);
}else{
cout<<"Wrong value";
}

//TODO:  Step-3 Add X1, Y1 to the result

glColor3ub (255, 0, 0);

glBegin(GL_TRIANGLES);
glVertex2i(x11+X1, y11+Y1);
glVertex2i(x22+X1, y22+Y1);
glVertex2i(x33+X1, y33+Y1);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,640,0,480);
}





int main(int argc, char** argv)
{
cout<<"Enter 3 points: ";
cin>>X1>>Y1;cin>>X2>>Y2;cin>>X3>>Y3;
// TODO:  Check for clockwise and anticlockwise
cout << "Enter 0 for anticlockwise and 1 for clockwise : ";
cin>> check;

cout<<"Enter the angle ";
cin>>angle;
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
