#include<GL/glut.h>
void myinit()
{
glClearColor(0.0,0.0,0.0,0.0);
gluOrtho2D(0.0,100.0,0.0,100.0);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);  // Set the color to red
    glBegin(GL_LINES);
    glVertex2i(25, 45);  // Start point of the line
    glColor3f(0.0,1.0,0.0);
    glVertex2i(50, 70);  // End point of the line
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
