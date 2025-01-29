
#include <windows.h>
#include <GL/glut.h>


void renderBitmapString (float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y, z);
    for(c=string; *c !='\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}


void display() {
    glClearColor(1.0f, 0.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
         glLineWidth(2.0);


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.0f, 10.0f);
	glVertex2f(-0.0f, -10.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-10.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glEnd();




	  glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_POLYGON);
          glVertex2f(0.125f,0.20f) ;
          glVertex2f(0.875f,0.20f);
          glVertex2f(0.875f,0.60f);
          glVertex2f(0.125f,0.60f);
          glVertex2f(0.125f,0.20f) ;

        glEnd();

        glColor3f(0.8627f, 0.0784f, 0.2353f);
        glBegin(GL_POLYGON);
          glVertex2f(0.125f,0.60f) ;
          glVertex2f(0.125f,0.20f);
          glVertex2f(0.30f,0.20f);
          glVertex2f(0.30f,0.60f);
          glVertex2f(0.125f,0.60f) ;

        glEnd();

        glColor3f(0.8627f, 0.0784f, 0.2353f);
        glBegin(GL_POLYGON);
          glVertex2f(0.70f,0.60f) ;
          glVertex2f(0.70f,0.20f);
          glVertex2f(0.875f,0.20f);
          glVertex2f(0.875f,0.60f);
           glVertex2f(0.70f,0.60f) ;


        glEnd();

         glColor3f(0.8627f, 0.0784f, 0.2353f);
        glBegin(GL_POLYGON);
          glVertex2f(0.525f,0.50f) ;

          glVertex2f(0.50f,0.54f);

          glVertex2f(0.475f,0.50f);

          glVertex2f(0.425f,0.52f);

          glVertex2f(0.45f,0.46f) ;

          glVertex2f(0.40f,0.48f) ;

          glVertex2f(0.3875f,0.46f) ;

          glVertex2f(0.3375f,0.48f) ;


          glVertex2f(0.3625f,0.44f) ;

          glVertex2f(0.325f,0.43f) ;

          glVertex2f(0.375f,0.38f) ;

          glVertex2f(0.35f,0.36f) ;

          glVertex2f(0.475f,0.37f) ;

          glVertex2f(0.475f,0.24f) ;

          glVertex2f(0.525f,0.24f) ;

          glVertex2f(0.525f,0.37f) ;

          glVertex2f(0.65f,0.36f) ;

          glVertex2f(0.625f,0.38f) ;

          glVertex2f(0.675f,0.43f) ;

          glVertex2f(0.63f,0.44f) ;

          glVertex2f(0.6625f,0.48f) ;

          glVertex2f(0.6125f,0.46f) ;

          glVertex2f(0.60f,0.48f) ;

          glVertex2f(0.55f,0.46f) ;

          glVertex2f(0.575f,0.52f) ;

          glVertex2f(0.525f,0.50f) ;

        glEnd();

    // Switzerland




    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, -0.9f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.9f,  -0.1f);
    glVertex2f(0.1f, -0.1f);
    glEnd();
    //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.45f, -0.4f);
    glVertex2f(0.45f,  -0.1f);
    glVertex2f(0.55f, -0.1f);
    glVertex2f(0.55f, -0.4f);
    glVertex2f(0.9f,  -0.4f);

    glVertex2f(0.9f, -0.6f);
    glVertex2f(0.55f, -0.6f);
    glVertex2f(0.55f,  -0.9f);
    glVertex2f(0.45f, -0.9f);
    glVertex2f(0.45f, -0.6f);
    glVertex2f(0.1f,  -0.6f);
     glVertex2f(0.1f, -0.4f);




    glEnd();

//Blue
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(0.2f, -0.65f);
    glVertex2f(0.1f, -0.75f);
    glVertex2f(0.1f, -0.65f);
    glEnd();

  //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.1f, -0.9f);
    glVertex2f(0.33f,  -0.65f);
    glVertex2f(0.27f, -0.65f);
    glVertex2f(0.1f, -0.8f);
     glEnd();

 //Blue
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(0.41f, -0.7f);
    glVertex2f(0.2f, -0.9f);
    glVertex2f(0.41f, -0.9f);
    glEnd();

    //Blue
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(0.75f, -0.65f);
    glVertex2f(0.9f, -0.8f);
    glVertex2f(0.9f, -0.65f);
    glEnd();

    //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.65f, -0.65f);
    glVertex2f(0.9f,  -0.9f);
    glVertex2f(0.8f, -0.9f);
    glVertex2f(0.58f,- 0.65f);
     glEnd();

     //Blue
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(0.6f, -0.75f);
    glVertex2f(0.75f, -0.9f);
    glVertex2f(0.6f, -0.9f);
    glEnd();

     //Blue
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(0.1f, -0.2f);
    glVertex2f(0.25f, -0.35f);
    glVertex2f(0.1f, -0.35f);
    glEnd();

    //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.15f, -0.1f);
    glVertex2f(0.4f,  -0.35f);
    glVertex2f(0.3f, -0.35f);
    glVertex2f(0.1f, -0.15f);
    glVertex2f(0.1f, -0.1f);

     glEnd();

     //Blue
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(0.2f,- 0.1f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.4f, -0.1f);
    glEnd();

    //Blue
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(0.6f, -0.1f);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.8f, -0.1f);
    glEnd();

    //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.9f, -0.1f);
    glVertex2f(0.65f,  -0.35f);
    glVertex2f(0.75f,- 0.35f);
    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.9f, -0.1f);

     glEnd();

     //Blue
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(0.9f, -0.25f);
    glVertex2f(0.8f, -0.35f);
    glVertex2f(0.9f, -0.35f);
    glEnd();







//new
    //White
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-0.9f,  0.1f);
    glVertex2f(-0.1f, 0.1f);
    glEnd();

    //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.85f, 0.1f);
    glVertex2f(-0.85f,  0.16f);
    glVertex2f(-0.15f, 0.16f);
     glVertex2f(-0.15f, 0.1f);

     glEnd();
     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.85f, 0.23f);
    glVertex2f(-0.85f,  0.3f);
    glVertex2f(-0.15f, 0.3f);
     glVertex2f(-0.15f, 0.23f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.85f, 0.37f);
    glVertex2f(-0.85f,  0.45f);
    glVertex2f(-0.15f, 0.45f);
     glVertex2f(-0.15f, 0.37f);

     glEnd();

      //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.85f, 0.52f);
    glVertex2f(-0.85f,  0.6f);
    glVertex2f(-0.15f, 0.6f);
     glVertex2f(-0.15f, 0.52f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.85f, 0.67f);
    glVertex2f(-0.85f,  0.75f);
    glVertex2f(-0.15f, 0.75f);
     glVertex2f(-0.15f, 0.67f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.85f, 0.82f);
    glVertex2f(-0.85f,  0.9f);
    glVertex2f(-0.15f, 0.9f);
     glVertex2f(-0.15f, 0.82f);

     glEnd();

//Red
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.7f);
    glVertex2f(-0.85f, 0.52f);
    glVertex2f(-0.52f,  0.52f);
    glVertex2f(-0.52f, 0.9f);
     glVertex2f(-0.85f, 0.9f);

     glEnd();

     //star white
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.70f, 0.71f);
    glVertex2f(-0.72f,  0.77f);
    glVertex2f(-0.67f, 0.73f);
     glVertex2f(-0.62f, 0.77f);

     glVertex2f(-0.64f, 0.71f);
    glVertex2f(-0.6f,  0.67f);
    glVertex2f(-0.65f, 0.67f);
     glVertex2f(-0.67f, 0.63f);
     glVertex2f(-0.68f, 0.67f);
    glVertex2f(-0.74f,  0.67f);

     glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.5f);
    glVertex2f(-0.1f, -0.9f);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.9f, -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    //glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.74f, -0.3f);
    glVertex2f(-0.74f, -0.1f);
    glVertex2f(-0.65f, -0.1f);
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.5f, -0.3f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.65f, -0.4f);
    glVertex2f(-0.65f, -0.60f);
    glVertex2f(-0.74f, -0.60f);
    glVertex2f(-0.74f, -0.40f);
    glVertex2f(-0.9f, -0.40f);
    glVertex2f(-0.9f, -0.3f);



    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.76f, -0.28f);
    glVertex2f(-0.76f, -0.1f);
    glVertex2f(-0.74f, -0.1f);
    glVertex2f(-0.74f, -0.3f);
    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.9f, -0.28f);

    glEnd();
    //white
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.82f, -0.28f);
    glVertex2f(-0.9f, -0.18f);
    glVertex2f(-0.9f, -0.15f);
    glVertex2f(-0.79f, -0.28f);


    glEnd();

     glEnd();
    //Red
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.79f, -0.28f);
    glVertex2f(-0.9f, -0.15f);
    glVertex2f(-0.9f, -0.1f);
    glVertex2f(-0.76f, -0.26f);
    glVertex2f(-0.76f, -0.28f);

    glEnd();

    //White
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.9f, -0.1f);
    glVertex2f(-0.76f, -0.28f);
     glVertex2f(-0.76f, -0.21f);
    glVertex2f(-0.86f, -0.1f);
    //glVertex2f(-0.9f, -0.1f);

    glEnd();

    //white
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.65f, -0.3f);
    glVertex2f(-0.5f, -0.3f);
    glVertex2f(-0.5f, -0.28f);
    glVertex2f(-0.63f, -0.28f);
    glVertex2f(-0.63f, -0.1f);
    glVertex2f(-0.65f, -0.1f);
    //glVertex2f(-0.5f, -0.28f);


    glEnd();

    //white
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.64f, -0.19f);
    glVertex2f(-0.58f, -0.1f);
    glVertex2f(-0.54f, -0.1f);
    glVertex2f(-0.64f, -0.23f);
    glEnd();

    //Red
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex2f(-0.54f, -0.1f);
    glVertex2f(-0.64f, -0.23f);
     glVertex2f(-0.64f, -0.28f);
    glVertex2f(-0.61f, -0.28f);
    glVertex2f(-0.49f, -0.11f);
    glVertex2f(-0.5f, -0.1f);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.61f, -0.28f);
    glVertex2f(-0.49f, -0.11f);
     glVertex2f(-0.5f, -0.16f);
    glVertex2f(-0.57f, -0.27f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.75f, -0.41f);
    glVertex2f(-0.75f, -0.60f);
    glVertex2f(-0.74f, -0.60f);
    glVertex2f(-0.74f, -0.40f);

    glVertex2f(-0.9f, -0.4f);
    glVertex2f(-0.9f, -0.41f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.80f, -0.41f);
    glVertex2f(-0.9f, -0.57f);
    glVertex2f(-0.9f, -0.6f);
    glVertex2f(-0.88f, -0.60f);
    glVertex2f(-0.77f, -0.41f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.85f, -0.59f);
    glVertex2f(-0.75f, -0.43f);
    glVertex2f(-0.75f, -0.41f);
    glVertex2f(-0.77f, -0.41f);
    glVertex2f(-0.88f, -0.60f);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.75f, -0.47f);
    glVertex2f(-0.83f, -0.59f);
    glVertex2f(-0.85f, -0.59f);
    glVertex2f(-0.75f, -0.43f);
    glEnd();
    //white
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.64f, -0.41f);
    glVertex2f(-0.50f, -0.41f);
    glVertex2f(-0.5f, -0.4f);
    glVertex2f(-0.65f, -0.40f);
    glVertex2f(-0.65f, -0.60f);
    glVertex2f(-0.64f, -0.59f);
    glEnd();

    //white
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.54f, -0.59f);
    glVertex2f(-0.64f, -0.44f);
    glVertex2f(-0.64f, -0.41f);
    glVertex2f(-0.62f, -0.41f);
    glVertex2f(-0.50f, -0.59f);
    glVertex2f(-0.49f, -0.59f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.62f, -0.41f);
    glVertex2f(-0.50f, -0.59f);
    glVertex2f(-0.50f, -0.54f);
    glVertex2f(-0.58f, -0.41f);
    //glVertex2f(-0.64f, -0.41f);
    //glVertex2f(-0.61f, -0.41f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.50f, -0.54f);
    glVertex2f(-0.58f, -0.41f);
    glVertex2f(-0.55f, -0.41f);
    glVertex2f(-0.5f, -0.5f);
    glEnd();



    glFlush(); // Flush the OpenGL pipeline to display the flag
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Group-3");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
