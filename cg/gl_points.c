#include<GL/glut.h>
void myinit()
{
    glClearColor(0.0,0.0,0.0,0.0);
    gluOrtho2D(0.0,100.0,0.0,100.0);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POINTS);
    	glVertex2i(50,90);
    	glPointSize(1000);
    	glColor3f(0.0,1.0,0.0);
    	glVertex2i(75,50);
    	glPointSize(1000);
    	glColor3f(0.0,0.0,1.0);
    	glVertex2i(100,200);
    glEnd();
    glFlush();
}
void main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("Simple OpenGL Program");
    glutInitWindowPosition(50,100);
    glutInitWindowSize(500,500);
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
}

