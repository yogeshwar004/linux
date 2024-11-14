#include<GL/glut.h>
void myinit()
{
glClearColor(0.0,0.0,0.0,0.0);
gluOrtho2D(0.0,100.0,0.0,100.0);
}

void display()
{
glBegin(GL_LINES);
glColor3f(0.0,0.0,1.0);
glVertex2i(15,50);
glColor3f(0.0,0.0,1.0);
glVertex2i(40,65);
glEnd();
glFlush();
}
void myKey(unsigned char key,int x,int y)
{
if(key=='Z'||key=='z')
exit(0);
else
{
        glRasterPos2i(50, 50);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'A');
        glFlush();
    }
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
glutKeyboardFunc(myKey);
glutMainLoop();
}
