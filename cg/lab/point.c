#include<GL/glut.h>
void myinit()
{
glClearColor(0.0,0.0,0.0,0.0);
gluOrtho2D(0.0,100.0,0.0,100.0);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(50.0);
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2i(25, 45);  // First point 
    glEnd();

    glPointSize(90.0);
    //glColor3f(0.0, 1.0, 0.0);  // Green color
    glBegin(GL_POINTS);
    glVertex2i(50, 70);  // Second point
    glEnd();

glFlush();
}
void main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutCreateWindow("Simple openGL pgm");
glutInitWindowPosition(50,100);
glutInitWindowSize(500,500);
glutDisplayFunc(display);
myinit();
glutMainLoop();
}
