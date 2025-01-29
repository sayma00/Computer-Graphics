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
    glClearColor(1.0f, 0.0f, 0.5f, 1.0f);
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

    // Switzerland

    //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.1f, 0.9f);
    glVertex2f(0.9f, 0.9f);
    glVertex2f(0.9f,  0.1f);
    glVertex2f(0.1f, 0.1f);
    glEnd();
    //Blue
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.5f);
    glVertex2f(0.1f, 0.62f);
    glVertex2f(0.9f, 0.62f);
    glVertex2f(0.9f,  0.9f);
    glVertex2f(0.1f, 0.9f);

    //White
     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, 0.35f);
    glVertex2f(0.9f, 0.35f);
    glVertex2f(0.9f,  0.62f);
    glVertex2f(0.1f, 0.62f);


    glEnd();







    //Yellow
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); // White color for the flag background
    glVertex2f(0.45f, 0.58f);
    glVertex2f(0.5f,  0.72f);
    glVertex2f(0.55f,  0.58f);
    glVertex2f(0.7f, 0.58f);
    glVertex2f(0.6f,  0.48f);
    glVertex2f(0.65f,  0.30f);
    glVertex2f(0.5f,  0.43f);
    glVertex2f(0.35f, 0.3f);
    glVertex2f(0.4f,  0.48f);
    glVertex2f(0.3f,  0.58f);
    glEnd();


//Blue
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.1f, 0.9f);
    glVertex2f(-0.9f, 0.9f);
    glVertex2f(-0.9f,  0.1f);
    glVertex2f(-0.1f, 0.1f);
    glEnd();
    //yellow
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.1f, 0.85f);
    glVertex2f(-0.1f,  0.9f);
    glVertex2f(-0.2f, 0.9f);
     glVertex2f(-0.9f,  0.15f);
    glVertex2f(-0.9f, 0.1f);
    //green
     glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.8f, 0.1f);
    glVertex2f(-0.1f, 0.85f);
    glVertex2f(-0.1f,  0.1f);



    glEnd();


    //White
     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.73f, 0.66f);
    glVertex2f(-0.75f, 0.71f);
    glVertex2f(-0.71f,  0.68f);
    glVertex2f(-0.67f, 0.70f);

    glVertex2f(-0.69f, 0.65f);
    glVertex2f(-0.66f, 0.62f);
    glVertex2f(-0.70f,  0.63f);
    glVertex2f(-0.72f, 0.59f);

    glVertex2f(-0.73f,  0.63f);
    glVertex2f(-0.77f, 0.64f);




    glEnd();



    //White
     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.79f, 0.54f);
    glVertex2f(-0.75f, 0.57f);
    glVertex2f(-0.76f,  0.52f);
    glVertex2f(-0.73f, 0.51f);

    glVertex2f(-0.77f, 0.50f);
    glVertex2f(-0.77f, 0.47f);
    glVertex2f(-0.79f,  0.50f);
    glVertex2f(-0.84f, 0.49f);

    glVertex2f(-0.81f,  0.52f);
    glVertex2f(-0.83f, 0.56f);




    glEnd();

      //White
     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63f, 0.55f);
    glVertex2f(-0.60f, 0.58f);
    glVertex2f(-0.61f,  0.53f);
    glVertex2f(-0.58f, 0.52f);

    glVertex2f(-0.61f, 0.51f);
    glVertex2f(-0.62f, 0.48f);
    glVertex2f(-0.64f,  0.51f);
    glVertex2f(-0.69f, 0.50f);

    glVertex2f(-0.65f,  0.53f);
    glVertex2f(-0.68f, 0.57f);




    glEnd();


      //White
     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.59f, 0.82f);
    glVertex2f(-0.55f, 0.85f);
    glVertex2f(-0.57f,  0.80f);
    glVertex2f(-0.53f, 0.78f);

    glVertex2f(-0.58f, 0.78f);
    glVertex2f(-0.59f, 0.74f);
    glVertex2f(-0.61f,  0.78f);
    glVertex2f(-0.65f, 0.78f);

    glVertex2f(-0.61f,  0.80f);
    glVertex2f(-0.63f, 0.85f);
    glEnd();


    //White
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.77f, 0.82f);
    glVertex2f(-0.73f, 0.85f);
    glVertex2f(-0.75f,  0.80f);
    glVertex2f(-0.71f, 0.78f);

    glVertex2f(-0.75f, 0.78f);
    glVertex2f(-0.77f, 0.74f);
    glVertex2f(-0.78f,  0.78f);
    glVertex2f(-0.84f, 0.78f);

    glVertex2f(-0.80f,  0.80f);
    glVertex2f(-0.82f, 0.85f);
    glEnd();


    //New

     //Blue
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.9f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.9f, -0.1f);
    glVertex2f(-0.9f,  -0.9f);
    glVertex2f(-0.1f, -0.9f);
    glEnd();


    //White

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.52f, -0.25f);
    glVertex2f(-0.54f, -0.19f);
    glVertex2f(-0.49f,  -0.23f);
    glVertex2f(-0.43f, - 0.19f);

    glVertex2f(-0.46f, -0.25f);
    glVertex2f(-0.42f, -0.28f);
    glVertex2f(-0.47f,  -0.28f);
    glVertex2f(-0.49f, -0.32f);

    glVertex2f(-0.51f,  -0.28f);
    glVertex2f(-0.56f, -0.28f);
    glEnd();



    //White

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.76f, -0.46f);
    glVertex2f(-0.78f, -0.41f);
    glVertex2f(-0.73f,  -0.44f);
    glVertex2f(-0.67f, - 0.41f);

    glVertex2f(-0.70f, -0.46f);
    glVertex2f(-0.66f, -0.5f);
    glVertex2f(-0.72f,  -0.49f);
    glVertex2f(-0.72f, -0.55f);

    glVertex2f(-0.75f,  -0.5f);
    glVertex2f(-0.82f, -0.49f);
    glEnd();

    //White

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.33f, -0.46f);
    glVertex2f(-0.35f, -0.40f);
    glVertex2f(-0.30f, -0.44f);
    glVertex2f(-0.25f,  -0.41f);
    glVertex2f(-0.27f, - 0.47f);

    glVertex2f(-0.24f, -0.5f);
    glVertex2f(-0.28f, -0.5f);
    glVertex2f(-0.30f,  -0.54f);
    glVertex2f(-0.32f, -0.5f);

    glVertex2f(-0.38f,  -0.5f);

    glEnd();



    //White

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.54f, -0.72f);
    glVertex2f(-0.55f, -0.67f);
    glVertex2f(-0.51f, -0.70f);
    glVertex2f(-0.46f,  -0.66f);
    glVertex2f(-0.48f, - 0.72f);

    glVertex2f(-0.43f, -0.76f);
    glVertex2f(-0.49f, -0.76f);
    glVertex2f(-0.51f,  -0.81f);
    glVertex2f(-0.53f, -0.76f);

    glVertex2f(-0.59f,  -0.76f);

    glEnd();



     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.9f, -0.1f);
    glVertex2f(0.9f,  -0.9f);
    glVertex2f(0.1f, -0.9f);
    glEnd();

     //Green star
     glLineWidth(5.0);

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.35f, -0.37f);
    glVertex2f(0.7f, -0.65f);
    glEnd();

    //Green
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.7f, -0.65f);
    glVertex2f(0.3f, -0.6f);
     glEnd();

    //Green
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.3f, -0.6f);
    glVertex2f(0.66f, -0.38f);
    glEnd();

    //Green
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.66f, -0.38f);
    glVertex2f(0.5f, -0.75f);
    glEnd();

    //Green
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(0.5f, -0.75f);
    glVertex2f(0.35f, -0.37f);
    glEnd();






    glFlush(); // Flush the OpenGL pipeline to display the flag
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Group-2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
