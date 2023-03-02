#include <GL/glut.h>
#include <stdio.h>
float X=0, Y=0, Z=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.01, 0.15);
    glVertex2f(0.00, 0.29);
    glVertex2f(0.00, 0.35);
    glVertex2f(0.01, 0.37);
    glVertex2f(0.07, 0.38);
    glVertex2f(0.11, 0.38);
    glVertex2f(0.15, 0.36);
    glVertex2f(0.17, 0.29);
    glVertex2f(0.18, 0.23);
    glVertex2f(0.18, 0.21);
    glVertex2f(0.14, 0.13);
    glVertex2f(0.14, 0.13);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.28, 0.13);
    glVertex2f(-0.31, 0.17);
    glVertex2f(-0.35, 0.21);
    glVertex2f(-0.35, 0.27);
    glVertex2f(-0.35, 0.33);
    glVertex2f(-0.31, 0.38);
    glVertex2f(-0.27, 0.39);
    glVertex2f(-0.23, 0.37);
    glVertex2f(-0.22, 0.31);
    glVertex2f(-0.19, 0.25);
    glVertex2f(-0.18, 0.21);
    glVertex2f(-0.17, 0.19);
    glVertex2f(-0.16, 0.17);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.21, -0.13);
    glVertex2f(-0.27, -0.05);
    glVertex2f(-0.29, 0.03);
    glVertex2f(-0.29, 0.08);
    glVertex2f(-0.21, 0.11);
    glVertex2f(-0.14, 0.11);
    glVertex2f(-0.05, 0.11);
    glVertex2f(0.11, 0.11);
    glVertex2f(0.18, 0.07);
    glVertex2f(0.18, 0.01);
    glVertex2f(0.18, -0.03);
    glVertex2f(0.14, -0.07);
    glVertex2f(0.06, -0.11);
    glVertex2f(0.03, -0.13);
    glVertex2f(-0.08, -0.13);
    glVertex2f(-0.21, -0.12);
    glEnd();

    glutSwapBuffers();
}
void mouse( int button, int state, int x, int y )
{
    X = (x-150)/150.0;
    Y = -(y-150)/150.0;
    if(state==GLUT_DOWN) printf(" glVertex2f(%.2f, %.2f);\n",X,Y);
}
int main(int argc, char *argv[ ])

{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week03");

    glutMouseFunc(mouse);
    glutDisplayFunc(display);
    glutMainLoop();
}
