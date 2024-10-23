#include<GL/glut.h>
#include<stdlib.h>
void myinit()
{
    glClearColor(0.0,0.0,0.0,0.0);
    gluOrtho2D(0.0,100.0,0.0,100.0);
    glPointSize(4.0);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(1.0,0.0,0.0);
    glVertex2i
}