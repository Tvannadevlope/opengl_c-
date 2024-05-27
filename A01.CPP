/***********************************************
 Exercise A01

 Author:
 Susanne Kroemker, IWR - UNIVERSITAET HEIDELBERG
 Im Neuenheimer Feld 368
 D-69120 Heidelberg
 
 phone +49 (0)6221 54 8883
 fax   +49 (0)6221 54 8850

************************************************/

#include <GL/glut.h>
#include <stdio.h>

void init(void);
void display(void);
int main(int, char **);



void display(void)
{
  
  glClear (GL_COLOR_BUFFER_BIT);
  glColor3f (1.0,0.0,0.0);

  glBegin(GL_POLYGON);
    glVertex2i (0, 20);
    glVertex2i (100, 110);
    glVertex2i (0, 80);
  glEnd();

  glColor3f (0.5,0.0,1.0);

  glBegin(GL_POLYGON);
    glVertex2i (-90, 50);
    glVertex2i (-90, 100);
    glVertex2i (40, 40);
  glEnd();

glFlush ();

}



void init(void)
{
  glClearColor (1.0, 1.0, 1.0, 0.0);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(-120.0, 120.0, 15.0, 120.0);
}



int main(int argc,char** argv)

{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
  glutInitWindowSize (250,250);
  glutInitWindowPosition (100, 100);
  glutCreateWindow ("Hello World");
  init();
   
  glutDisplayFunc(display);
  
  glutMainLoop();
  return 0;
}

