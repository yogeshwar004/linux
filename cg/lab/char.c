#include<stdio.h>
#include<GL/glut.h>

void myinit()
{
glClearColor(0.0,0.0,0.0,0.0);
gluOrtho2D(0.0,500.0,0.0,500.0);

}

void display()
{
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_LINES);
glColor3f(0.0,0.0,1.0);
glVertex2i(50,100);
glPointSize(90.0);
glColor3f(0.0,1.0,0.0);
glVertex2i(75,90);


glEnd();

glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,'C');
glRasterPos2f(10.0,50.0);
glutBitmapCharacter(GLUT_BITMAP_8_BY_13,'L');
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'P');
glFlush();
}

void main(int argc,char ** argv)
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

