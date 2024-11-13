#include <stdio.h>
#include <GL/glut.h>

void myinit() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glOrtho(-100.0, 100.0, -100.0, 100.0, -100.0, 100.0);
    glPointSize(20.0);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
        glVertex2i(50, 50);
        glVertex2i(20, 10);
    glEnd();
    glFlush();
}

void main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Simple OpenGL Program");
    glutInitWindowPosition(500, 100);
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
<<<<<<< HEAD
}
=======
}
>>>>>>> 70800e275f94eeba904d71c6bc23a6119652bba3
