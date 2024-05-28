#include <iostream>
#include"glut.h"


void display()
{

}

void mouse(int button, int state, int x, int y)
{

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(480, 480);
    glutInitWindowPosition(0, 95);
    glutCreateWindow("Checkers");
    glClearColor(0, 0, 0, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 480, 480, 0, -1.0, 1.0);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
}


