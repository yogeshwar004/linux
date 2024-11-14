#include <GL/glut.h>

void myinit()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);  
    gluOrtho2D(0.0, 100.0, 0.0, 100.0);
    glPointSize(10.0);  
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT); 
    
    
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2i(20, 30);
    glColor3f(0.0, 1.0, 0.0); 
    glVertex2i(40, 60);
    glColor3f(0.0, 0.0, 1.0); 
    glVertex2i(60, 30);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2i(20, 30);
    glColor3f(0.0, 1.0, 0.0); 
    glVertex2i(40, 60);
    glColor3f(0.0, 0.0, 1.0); 
    glVertex2i(60, 30);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2i(20, 70);
    glColor3f(0.0, 1.0, 0.0); 
    glVertex2i(40, 90);
    glColor3f(0.0, 0.0, 1.0); 
    glVertex2i(60, 70);
    glEnd();

    glFlush(); 
}

void main(int argc, char** argv) 
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(500, 500);
    glutInitWindowPosition(50, 100);
    glutCreateWindow("Line Strip and Line Loop Example");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    
}

