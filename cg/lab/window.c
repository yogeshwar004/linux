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
}
void demo_menu(int id)
{
glClear(GL_COLOR_BUFFER_BIT);
switch(id)
{
case 1: 
glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,'C');
break;

case 2:
glRasterPos2f(10.0,50.0);
glutBitmapCharacter(GLUT_BITMAP_8_BY_13,'L');
break;

case 3:
display();
break;

case 4: exit(0);
break;
}
glFlush();
}

void main(int argc,char ** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutCreateWindow("Simple OpenGL Program");
glutInitWindowPosition(50,100);
glutInitWindowSize(500,500);

glutCreateMenu(demo_menu);
glutAddMenuEntry("GlustStroke",1);
glutAddMenuEntry("Raster Posi Reposition and Bitmap",2);
glutAddMenuEntry("Display (points and lines)",3);
glutAddMenuEntry("EXIT",4);
glutAttachMenu(GLUT_RIGHT_BUTTON);
myinit();
glutMainLoop();
}
