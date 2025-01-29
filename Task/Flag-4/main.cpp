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

    // Switzerland

    //Red
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.11f, 0.91f);
    glVertex2f(0.89f, 0.91f);
    glVertex2f(0.89f,  0.09f);
    glVertex2f(0.11f, 0.09f);
    glEnd();
    //white
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.20f, 0.60f);
    glVertex2f(0.79f, 0.60f);
    glVertex2f(0.79f,  0.41f);
    glVertex2f(0.20f, 0.41f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f); // White color for the flag background
    glVertex2f(0.40f, 0.80f);
    glVertex2f(0.59f,  0.80f);
    glVertex2f(0.59f,  0.20f);
    glVertex2f(0.40f, 0.20f);
    glEnd();


    glBegin(GL_POLYGON); // Red
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.89f, 0.80f);
    glVertex2f(-0.09f, 0.80f);
    glVertex2f(-0.09f, 0.59f);
    glVertex2f(-0.89f, 0.59f);
    glEnd();

//white
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.09f, 0.59f);
    glVertex2f(-0.89f, 0.59f);
    glVertex2f(-0.89f, 0.40f);
    glVertex2f(-0.09f, 0.40f);
    glEnd();

//Black
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.89f, 0.40f);
    glVertex2f(-0.09f, 0.40f);
    glVertex2f(-0.09f,  0.18f);
    glVertex2f(-0.89f, 0.18f);
    glEnd();

//green
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-0.89f, 0.80f);
    glVertex2f(-0.89f, 0.18f);
    glVertex2f(-0.71f,  0.51f);
    glEnd();


//blue
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.4f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.90f, -0.1f);
    glVertex2f(0.9f,  -0.90f);
    glVertex2f(0.1f,  -0.90f);
    glEnd();





//yellow
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.92f, -0.42f);
    glVertex2f(0.082f, -0.42f);
    glVertex2f(0.082f, -0.55f);
    glVertex2f(0.92f, - 0.55f);
    glEnd();

 //yellow
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.30f, -0.90f);
    glVertex2f(0.50f, -0.90f);
    glVertex2f(0.50f, -0.10f);
    glVertex2f(0.30f, -0.10f);
    glEnd();



//blue

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.1f, -0.1f);
    glVertex2f(-0.90f, -0.1f);
    glVertex2f(-0.9f,  -0.90f);
    glVertex2f(-0.1f,  -0.90f);
    glEnd();



//star
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.61f,  -0.43f);
    glVertex2f(-0.59f,   -0.30f);
    glVertex2f(-0.49f, -0.39f);
    glVertex2f(-0.39f,  -0.32f);
    glVertex2f(-0.42f,   -0.44f);
    glVertex2f(-0.35f,  -0.52f);
    glVertex2f(-0.47f, -0.52f);
    glVertex2f(-0.52f,   -0.61f);
    glVertex2f(-0.58f,   -0.52f);
    glVertex2f(-0.7f,    -0.5f);
  //glVertex2f(-0.61f,  -0.43f);

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
