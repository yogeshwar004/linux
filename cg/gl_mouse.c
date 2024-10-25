#include<GL/glut.h>
#include<stdio.h>
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
        glVertex2i(5,10);
        glVertex2i(10,15);
    glEnd();
    glFlush();
}
void myMouse(int button, int state,int x,int y)
{
    if(button==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
        exit(0);
}
void main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("simple openGL pgm");
    glutInitWindowPosition(50,100);
    glutInitWindowSize(500,500);
    glutDisplayFunc(display);
    myinit();
    glutMouseFunc(myMouse); 
    glutMainLoop();
}