#include <windows.h>
#include <GL/glut.h>
#include <math.h>


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
    glVertex2f(-0.9f, 0.1f);
    glVertex2f(-0.9f,  0.16f);
    glVertex2f(-0.1f, 0.16f);
     glVertex2f(-0.1f, 0.1f);

     glEnd();
     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, 0.23f);
    glVertex2f(-0.9f,  0.3f);
    glVertex2f(-0.1f, 0.3f);
     glVertex2f(-0.1f, 0.23f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, 0.37f);
    glVertex2f(-0.9f,  0.45f);
    glVertex2f(-0.1f, 0.45f);
     glVertex2f(-0.1f, 0.37f);

     glEnd();

      //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, 0.52f);
    glVertex2f(-0.9f,  0.6f);
    glVertex2f(-0.1f, 0.6f);
     glVertex2f(-0.1f, 0.52f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, 0.67f);
    glVertex2f(-0.9f,  0.75f);
    glVertex2f(-0.1f, 0.75f);
     glVertex2f(-0.1f, 0.67f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, 0.82f);
    glVertex2f(-0.9f,  0.9f);
    glVertex2f(-0.1f, 0.9f);
     glVertex2f(-0.1f, 0.82f);

     glEnd();

//Blue
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.9f, 0.52f);
    glVertex2f(-0.52f,  0.52f);
    glVertex2f(-0.52f, 0.9f);
     glVertex2f(-0.9f, 0.9f);

     glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.75f, 0.75f);
    glVertex2f(-0.75f,  0.9f);
    glVertex2f(-0.65f, 0.9f);
     glVertex2f(-0.65f, 0.75f);

     glVertex2f(-0.52f, 0.75f);
    glVertex2f(-0.52f,  0.65f);
    glVertex2f(-0.65f, 0.65f);
     //glVertex2f(-0.75f, 0.52f);
     glVertex2f(-0.65f, 0.52f);
    glVertex2f(-0.75f,  0.52f);
    glVertex2f(-0.75f, 0.65f);
     glVertex2f(-0.9f, 0.65f);
     glVertex2f(-0.9f, 0.75f);

     glEnd();

      glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.63f, 0.9f);
    glVertex2f(-0.63f,  0.8f);
    glVertex2f(-0.55f, 0.9f);

     glEnd();


     glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.59f, 0.77f);
    glVertex2f(-0.52f,  0.87f);
    glVertex2f(-0.52f, 0.77f);

     glEnd();


      glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.78f, 0.9f);
    glVertex2f(-0.78f,  0.8f);
    glVertex2f(-0.85f, 0.9f);

     glEnd();


     glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.8f, 0.77f);
    glVertex2f(-0.9f,  0.87f);
    glVertex2f(-0.9f, 0.77f);

     glEnd();

     glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.6f, 0.63f);
    glVertex2f(-0.52f,  0.63f);
    glVertex2f(-.52f, 0.57f);

     glEnd();


     glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.63f, 0.6f);
    glVertex2f(-0.52f,  0.52f);
    glVertex2f(-0.63f, 0.52f);

     glEnd();

      glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.8f, 0.62f);
    glVertex2f(-0.9f,  0.62f);
    glVertex2f(-0.9f, 0.55f);

     glEnd();

     glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.78f, 0.6f);
    glVertex2f(-0.85f,  0.52f);
    glVertex2f(-0.78f, 0.52f);

     glEnd();



     //America

     glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.1f, 0.9f);
    glVertex2f(0.9f, 0.9f);
    glVertex2f(0.9f,  0.1f);
    glVertex2f(0.1f, 0.1f);
    glEnd();

    //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.9f, 0.1f);
    glVertex2f(0.9f,  0.16f);
    glVertex2f(0.1f, 0.16f);
     glVertex2f(0.1f, 0.1f);

     glEnd();
     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.9f, 0.23f);
    glVertex2f(0.9f,  0.3f);
    glVertex2f(0.1f, 0.3f);
     glVertex2f(0.1f, 0.23f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.9f, 0.37f);
    glVertex2f(0.9f,  0.45f);
    glVertex2f(0.1f, 0.45f);
     glVertex2f(0.1f, 0.37f);

     glEnd();

      //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.9f, 0.52f);
    glVertex2f(0.9f,  0.6f);
    glVertex2f(0.1f, 0.6f);
     glVertex2f(0.1f, 0.52f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.9f, 0.67f);
    glVertex2f(0.9f,  0.75f);
    glVertex2f(0.1f, 0.75f);
     glVertex2f(0.1f, 0.67f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(0.9f, 0.82f);
    glVertex2f(0.9f,  0.9f);
    glVertex2f(0.1f, 0.9f);
     glVertex2f(0.1f, 0.82f);

     glEnd();

//Blue
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(0.1f, 0.52f);
    glVertex2f(0.45f,  0.52f);
    glVertex2f(0.45f, 0.9f);
     glVertex2f(0.1f, 0.9f);

     glEnd();

//star
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.1862106278409, 0.6338870976462);
    glVertex2f(0.2214142770507, 0.6322623138365);
     glVertex2f(0.1954177360958, 0.6116817189139);
     glVertex2f(0.2112418408578, 0.5716824719147);
    glVertex2f(0.1732123573635, 0.5970586646267);
    glVertex2f(0.1312418408578, 0.5716824719147);
    glVertex2f(0.1488406002182, 0.6138480973268);
     glVertex2f(0.1312418408578, 0.6316824719147);
      glVertex2f(0.159606060591, 0.6337312124342);
    glVertex2f(0.1712418408578, 0.6616824719147);
      glEnd();


      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.1862106278409, 0.8338870976462);
    glVertex2f(0.2214142770507, 0.8322623138365);
     glVertex2f(0.1954177360958, 0.8116817189139);
     glVertex2f(0.2112418408578, 0.7716824719147);
    glVertex2f(0.1732123573635, 0.7970586646267);
    glVertex2f(0.1312418408578, 0.7716824719147);
    glVertex2f(0.1488406002182, 0.8138480973268);
     glVertex2f(0.1312418408578, 0.8316824719147);
      glVertex2f(0.159606060591, 0.8337312124342);
    glVertex2f(0.1712418408578, 0.8616824719147);
      glEnd();

       //star
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.3849955509214, 0.8338870976462);
    glVertex2f(0.4201992001312, 0.8322623138365);
     glVertex2f(0.3942026591763, 0.8116817189139);
     glVertex2f(0.4100267639383, 0.7716824719147);
    glVertex2f(0.371997280444, 0.7970586646267);
    glVertex2f(0.3300267639383, 0.7716824719147);
    glVertex2f(0.3476255232987, 0.8138480973268);
     glVertex2f(0.3300267639383, 0.8316824719147);
      glVertex2f(0.360082199173, 0.8328039084397);
    glVertex2f(0.3700267639383, 0.8616824719147);
      glEnd();


      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.3849955509214, 0.6338870976462);
    glVertex2f(0.4201992001312, 0.6322623138365);
     glVertex2f(0.3942026591763, 0.6116817189139);
     glVertex2f(0.4100267639383, 0.5716824719147);
    glVertex2f(0.371997280444, 0.5970586646267);
    glVertex2f(0.3300267639383, 0.5716824719147);
    glVertex2f(0.3476255232987, 0.6138480973268);
     glVertex2f(0.3300267639383, 0.6316824719147);
      glVertex2f(0.360082199173, 0.6328039084397);
    glVertex2f(0.3700267639383, 0.6616824719147);
      glEnd();

       //star
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.2767143326581, 0.7029799531786);
    glVertex2f(0.3119179818678, 0.7013551693689);
     glVertex2f(0.2859214409129, 0.6807745744462);
     glVertex2f(0.301745545675, 0.6407753274471);
    glVertex2f(0.2637160621806, 0.6661515201591);
    glVertex2f(0.221745545675, 0.6407753274471);
     glVertex2f(0.2393443050354, 0.6829409528592);
    glVertex2f(0.221745545675, 0.7007753274471);
      glVertex2f(0.2518009809096, 0.7018967639721);
    glVertex2f(0.261745545675, 0.7307753274471);
      glEnd();


     //New

      //White
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.1f, -0.9f);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.9f,  -0.1f);
    glVertex2f(-0.1f, -0.1f);
    glEnd();

    //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, -0.1f);
    glVertex2f(-0.9f,  -0.16f);
    glVertex2f(-0.1f, -0.16f);
     glVertex2f(-0.1f, -0.1f);

     glEnd();
     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, -0.23f);
    glVertex2f(-0.9f,  -0.3f);
    glVertex2f(-0.1f, -0.3f);
     glVertex2f(-0.1f, -0.23f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, -0.37f);
    glVertex2f(-0.9f,  -0.45f);
    glVertex2f(-0.1f,   -0.45f);
     glVertex2f(-0.1f, -0.37f);

     glEnd();

      //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, -0.52f);
    glVertex2f(-0.9f,  -0.6f);
    glVertex2f(-0.1f, -0.6f);
     glVertex2f(-0.1f, -0.52f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, -0.67f);
    glVertex2f(-0.9f,  -0.75f);
    glVertex2f(-0.1f, -0.75f);
     glVertex2f(-0.1f, -0.67f);

     glEnd();

     //Red
    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.0f, 0.0f);
    glVertex2f(-0.9f, -0.82f);
    glVertex2f(-0.9f,  -0.9f);
    glVertex2f(-0.1f, -0.9f);
     glVertex2f(-0.1f, -0.82f);
     glEnd();
      glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(-0.9, -0.1);
    glVertex2f(-0.6, -0.1);
    glVertex2f(-0.6, -0.4);
     glVertex2f(-0.9, -0.4);

     glEnd();

      //star
      glBegin(GL_POINTS);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,1,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.09;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.75,y-0.25);
        }
	glEnd();
     //New

      glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.8f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.9f,  -0.1f);
    glVertex2f(0.9f, -0.9f);
     glVertex2f(0.1f, -0.9f);
      glEnd();


//star
      glBegin(GL_POLYGON);
   glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.8149687869831, -0.4777953742685);
    glVertex2f(0.8501724361929, -0.4794201580782);
     glVertex2f(0.824175895238, -0.5000007530008);
     glVertex2f(0.84, -0.54);
    glVertex2f(0.8019705165056, -0.514623807288);
    glVertex2f(0.76, -0.54);
    glVertex2f(0.7775987593604, -0.4978343745879);
     glVertex2f(0.76, -0.48);
      glVertex2f(0.7900554352346, -0.478878563475);
    glVertex2f(0.8, -0.45);
      glEnd();




      //star
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.5113734866678, -0.1622237764249);
    glVertex2f(0.5465771358775, -0.1638485602346);
     glVertex2f(0.5205805949226, -0.1844291551572);
     glVertex2f(0.5364046996847, -0.2244284021564);
    glVertex2f(0.4983752161903, -0.1990522094444);
    glVertex2f(0.4564046996847, -0.2244284021564);
    glVertex2f(0.4740034590451, -0.1822627767443);
     glVertex2f(0.4564046996847, -0.1644284021564);
      glVertex2f(0.4864601349193, -0.1633069656314);
    glVertex2f(0.4964046996847, -0.1344284021564);
      glEnd();


      //star
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    //////////////
    glVertex2f(0.3113734866678, -0.2622237764249);
    glVertex2f(0.3465771358775, -0.2638485602346);
     glVertex2f(0.3205805949226, -0.2844291551572);
     glVertex2f(0.3364046996847, -0.3244284021564);
    glVertex2f(0.2983752161903, -0.2990522094444);
    glVertex2f(0.2564046996847, -0.3244284021564);
    glVertex2f(0.2740034590451, -0.2822627767443);
     glVertex2f(0.2564046996847, -0.2644284021564);
      glVertex2f(0.2864601349193, -0.2633069656314);
    glVertex2f(0.2964046996847, -0.2344284021564);
      glEnd();

       //star
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.3113734866678, -0.6622237764249);
    glVertex2f(0.3465771358775, -0.6638485602346);
     glVertex2f(0.3205805949226, -0.6844291551572);
     glVertex2f(0.3364046996847, -0.7244284021564);
    glVertex2f(0.2983752161903, -0.6990522094444);
    glVertex2f(0.2564046996847, -0.7244284021564);
    glVertex2f(0.2740034590451, -0.6822627767443);
     glVertex2f(0.2564046996847, -0.6644284021564);
      glVertex2f(0.2864601349193, -0.6633069656314);
    glVertex2f(0.2964046996847, -0.6344284021564);
      glEnd();

      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.7113734866678, -0.6622237764249);
    glVertex2f(0.7465771358775, -0.6638485602346);
     glVertex2f(0.7205805949226, -0.6844291551572);
     glVertex2f(0.7364046996847, -0.7244284021564);
    glVertex2f(0.6983752161903, -0.6990522094444);
    glVertex2f(0.6564046996847, -0.7244284021564);
    glVertex2f(0.6740034590451, -0.6822627767443);
     glVertex2f(0.6564046996847, -0.6644284021564);
      glVertex2f(0.6864601349193, -0.6633069656314);
    glVertex2f(0.6964046996847, -0.6344284021564);
      glEnd();



     //////////////////////
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.7113734866678, -0.2622237764249);
    glVertex2f(0.7465771358775, -0.2638485602346);
     glVertex2f(0.7205805949226, -0.2844291551572);
     glVertex2f(0.7364046996847, -0.3244284021564);
    glVertex2f(0.6983752161903, -0.2990522094444);
    glVertex2f(0.6564046996847, -0.3244284021564);
    glVertex2f(0.6740034590451, -0.2822627767443);
     glVertex2f(0.6564046996847, -0.2644284021564);
      glVertex2f(0.6864601349193, -0.2633069656314);
    glVertex2f(0.6964046996847, -0.2344284021564);
      glEnd();







      //star
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.5000604632565, -0.7680940879323);
    glVertex2f(0.5502328994493, -0.7975142460105);
     glVertex2f(0.5242363584944, -0.8180948409331);
     glVertex2f(0.5400604632565, -0.8580940879323);
    glVertex2f(0.5020309797621, -0.8327178952203);
    glVertex2f(0.4600604632565, -0.8580940879323);
    glVertex2f(0.4776592226169, -0.8159284625202);
     glVertex2f(0.4600604632565, -0.7980940879323);
      glVertex2f(0.4901158984911, -0.7969726514073);
    glVertex2f(0.5000604632565, -0.7680940879323);
      glEnd();


      //star
      glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);

     glVertex2f(0.2018521709234, -0.4827123828846);
    glVertex2f(0.2370558201332, -0.4843371666943);
    glVertex2f(0.2110592791783, -0.504917761617);
     glVertex2f(0.2268833839403, -0.5449170086161);
    glVertex2f(0.1888539004459, -0.5195408159041);
    glVertex2f(0.1504322088232, -0.5438022165368);
    glVertex2f(0.1644821433007, -0.502751383204);
     glVertex2f(0.1468833839403, -0.4849170086161);
      glVertex2f(0.1769388191749, -0.4837955720911);
    glVertex2f(0.1868833839403, -0.4549170086161);
      glEnd();


      //star
      glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f;
    glVertex2f;
     glVertex2f;
     glVertex2f;
    glVertex2f;
    glVertex2f;
    glVertex2f;
     glVertex2f;
      glVertex2f;
    glVertex2f;
      glEnd();


    glFlush(); // Flush the OpenGL pipeline to display the flag
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Group-4");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
