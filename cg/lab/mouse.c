#include<GL/glut.h>

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_LINES);
glVertex2i(25, 45);
glVertex2i(50, 70);
glEnd();
glFlush();
}
void myinit()
{
glClearColor(0.0,0.0,0.0,0.0);
gluOrtho2D(0.0,100.0,0.0,100.0);

}
void myMouse(int button, int state, int x, int y)
{
if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
exit(0);
else if (state == GLUT_DOWN)
{
glRasterPos2i(10, 10);
glutBitmapCharacter(GLUT_BITMAP_8_BY_13, 'Z');
glFlush();
}
}
void main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutCreateWindow("Simple OpenGL Program");
glutInitWindowPosition(50,100);
glutInitWindowSize(500,500);
glutDisplayFunc(display);
myinit();
glutMouseFunc(myMouse);
glutMainLoop();
}
