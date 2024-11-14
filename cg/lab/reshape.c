#include<GL/glut.h>
GLint w,h;
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
void myReshape(GLsizei w, GLsizei h)
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,(GLdouble)w,0.0,(GLdouble)h);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glViewport(0,0,w,h);
}
void main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutCreateWindow("Simple OpenGL Program");
glutInitWindowPosition(50,100);
glutInitWindowSize(w,h);
glutDisplayFunc(display);
myinit();
glutReshapeFunc(myReshape);
glutMainLoop();
}
