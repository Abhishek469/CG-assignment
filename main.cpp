#include <stdlib.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<unistd.h>

float j=0;
int flag=0;

void init()
{
glClearColor(0,0,1,0.0);
glEnable(GL_COLOR_MATERIAL);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_DEPTH_TEST);
glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
glShadeModel(GL_SMOOTH);

float lightpos[]={0,0,30,0};
glLightfv(GL_LIGHT0,GL_POSITION,lightpos);


glMatrixMode(GL_PROJECTION|GL_MODELVIEW);
glLoadIdentity();
gluPerspective(100,640/480,1,30);
gluLookAt(0,1,9,0.0,0.0,0.0,0.0,1.0,0.0);
glPointSize(5);
}

void drawrefx(double x, double y, double z){
    glVertex3d(-x,y,z);
}



void display()
{
glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

glColor3f(0,0,0);

glRotatef(0.4,0,1,0);

glTranslatef(0,.4,0);
glTranslatef(0,-.4,0);

glBegin(GL_POLYGON);
glColor3f(1,0,0);
    glVertex3d(0,-2,0);
    glVertex3d(-1.59,-1.06,0);
    glVertex3d(-1.59,0.84,0);
    glVertex3d(-.7,1.32,0);
    glVertex3d(0,1.2,0);
    glVertex3d(.7,1.32,0);
    glVertex3d(1.6,0.81,0);
    glVertex3d(1.6,-1.06,0);
glEnd();


glBegin(GL_POLYGON);
    glVertex3d(0,1.4,0);
    glVertex3d(-.7,1.8,0);
    glVertex3d(-0.7,2.61,0);
    glVertex3d(0,3.015,0);
    glVertex3d(.7,2.61,0);
    glVertex3d(.7,1.8,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-1.796,4.14,0);
    glVertex3d(-1.4,3.85,0);
    glVertex3d(-1.4,2.8,0);
    glVertex3d(-1.8,2.54,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-1.4,2.8,0);
    glVertex3d(-1.8,2.54,0);
    glVertex3d(-1.37,2.27,0);
    glVertex3d(-.997,2.53,0);
glEnd();


glBegin(GL_POLYGON);
    glVertex3d(-1.37,2.27,0);
    glVertex3d(-.997,2.53,0);
    glVertex3d(-1,1.4,0);
    glVertex3d(-1.365,1.63,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-1,1.4,0);
    glVertex3d(-1.365,1.63,0);
    glVertex3d(-2.48,0.955,0);
    glVertex3d(-2.12,0.735,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-2.48,0.955,0);
    glVertex3d(-2.12,0.735,0);
    glVertex3d(-2.11,-1.42,0);
    glVertex3d(-2.48,-1.79,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-2.59,4.768,0);
    glVertex3d(-2.22,4.47,0);
    glVertex3d(-2.22,2.61,0);
    glVertex3d(-2.59,2.38,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-2.22,2.61,0);
    glVertex3d(-2.59,2.38,0);
    glVertex3d(-1.94,1.936,0);
    glVertex3d(-1.56,2.20,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-1.94,1.936,0);
    glVertex3d(-1.56,2.20,0);
    glVertex3d(-1.565,1.68,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-1.94,1.936,0);
    glVertex3d(-1.565,1.68,0);
    glVertex3d(-2.9,0.91,0);
    glVertex3d(-3.31,1.15,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(-2.9,0.91,0);
    glVertex3d(-3.30,1.15,0);
    glVertex3d(-3.30,-2.41,0);
    glVertex3d(-2.9,-2.09,0);
glEnd();


glBegin(GL_POLYGON);
    glVertex3d(1.796,4.14,0);
    glVertex3d(1.4,3.85,0);
    glVertex3d(1.4,2.8,0);
    glVertex3d(1.8,2.54,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(1.4,2.8,0);
    glVertex3d(1.8,2.54,0);
    glVertex3d(1.37,2.27,0);
    glVertex3d(.997,2.53,0);
glEnd();


glBegin(GL_POLYGON);
    glVertex3d(1.37,2.27,0);
    glVertex3d(.997,2.53,0);
    glVertex3d(1,1.4,0);
    glVertex3d(1.365,1.63,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(1,1.4,0);
    glVertex3d(1.365,1.63,0);
    glVertex3d(2.48,0.955,0);
    glVertex3d(2.12,0.735,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(2.48,0.955,0);
    glVertex3d(2.12,0.735,0);
    glVertex3d(2.11,-1.42,0);
    glVertex3d(2.48,-1.79,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(2.59,4.768,0);
    glVertex3d(2.22,4.47,0);
    glVertex3d(2.22,2.61,0);
    glVertex3d(2.59,2.38,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(2.22,2.61,0);
    glVertex3d(2.59,2.38,0);
    glVertex3d(1.94,1.936,0);
    glVertex3d(1.56,2.20,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(1.94,1.936,0);
    glVertex3d(1.56,2.20,0);
    glVertex3d(1.565,1.68,0);
glEnd();

glBegin(GL_POLYGON);

    glVertex3d(1.94,1.936,0);
    glVertex3d(1.565,1.68,0);

    glVertex3d(2.9,0.91,0);
    glVertex3d(3.31,1.15,0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3d(2.9,0.91,0);
    glVertex3d(3.30,1.15,0);
    glVertex3d(3.30,-2.41,0);
    glVertex3d(2.9,-2.09,0);
glEnd();

glFlush();
glutSwapBuffers();
glutPostRedisplay();
}

int main(int argc, char ** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DEPTH|GLUT_DOUBLE);
glutInitWindowSize(700,700);
glutCreateWindow("SPIDERMAN");
init();
glutDisplayFunc(display);

glutMainLoop();
return 0;
}
