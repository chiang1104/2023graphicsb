#include <GL/glut.h>
void display()
{
    //glColor3f(0,1,0); ///綠色的
    glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,1); ///上面 紅色
        glColor3f(0,1,0); glVertex2f(-1,-1);///左下角 綠色
        glColor3f(0,0,1); glVertex2f(+1,-1);///右下角 籃色
    glEnd();
    glColor3f(1,1,0);
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
int main(int argc, char * argv[] )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week02");
    glutDisplayFunc(display);
    glutMainLoop();
}
