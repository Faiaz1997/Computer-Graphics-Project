#include <windows.h>
#include <GL/glut.h>
#include <math.h>
# define PI 3.14159265358979323846

GLfloat colorchange = 0.0f;
GLfloat increment = 0.01f;
float sr=133;///sky Color
float sg=204;
float sb=250;
float mr=255;///moon and sun
float mg=255;
float mb=0;
int dcheck=0;
GLfloat positionRL = 0.0f;
GLfloat speedRL = 0.05f;
GLfloat m = 0.0f;


void updateRL(int value) {

    if(positionRL <-2.0)
        positionRL = 1.0f;

    positionRL -= speedRL;

	glutPostRedisplay();


	glutTimerFunc(100, updateRL, 0);
}

GLfloat positionLR = 0.0f;
GLfloat speedLR = 0.05f;
void updateLR(int value) {

    if(positionLR >2.0)
        positionLR = -1.0f;

    positionLR += speedLR;
	glutPostRedisplay();


	glutTimerFunc(100, updateLR, 0);
}

void update(int value) {
    if(colorchange >1.0)
        colorchange = 0.0f;
    colorchange += increment;
    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}

void tree()
{

    glPushMatrix();
    glTranslatef(-0.2,0,0);
    glPushMatrix();
    glScalef(0.4,0.4,0);
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.6f, 0.0f, 0.0f); // Yellow
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(0.08f, -0.5f);
	glVertex2f(0.08f, 0.4f);
	glEnd();

    glBegin(GL_TRIANGLES);//
    glColor3ub(0, 130, 110);//rgb color picker

    glVertex2f(-.2f, -0.01f);    // x, y
	glVertex2f(+0.28f, -0.01f);
	glVertex2f(+.04f, 0.6f);
	glEnd();

	glBegin(GL_TRIANGLES);//
    glColor3ub(0, 155, 100);//rgb color picker

    glVertex2f(-.15f, .25f);    // x, y
	glVertex2f(+0.22f,.25f);
	glVertex2f(+.04f, 0.8f);
	glEnd();
	glPopMatrix();
	glPopMatrix();


	glFlush();  // Render now
}

void railline()
{
      //rail line start

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1.0,-0.5);
    glVertex2f(1.0,-0.5);
    glVertex2f(1.0,-0.6);
    glVertex2f(-1.0,-0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1.0,-0.8);
    glVertex2f(1.0,-0.8);
    glVertex2f(1.0,-0.9);
    glVertex2f(-1.0,-0.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.9,-0.6);
    glVertex2f(1.0,-0.6);
    glVertex2f(1.0,-0.8);
    glVertex2f(0.9,-0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.7,-0.6);
    glVertex2f(0.8,-0.6);
    glVertex2f(0.8,-0.8);
    glVertex2f(0.7,-0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.5,-0.6);
    glVertex2f(0.6,-0.6);
    glVertex2f(0.6,-0.8);
    glVertex2f(0.5,-0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.3,-0.6);
    glVertex2f(0.4,-0.6);
    glVertex2f(0.4,-0.8);
    glVertex2f(0.3,-0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.1,-0.6);
    glVertex2f(0.2,-0.6);
    glVertex2f(0.2,-0.8);
    glVertex2f(0.1,-0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.1,-0.6);
    glVertex2f(0.0,-0.6);
    glVertex2f(0.0,-0.8);
    glVertex2f(-0.1,-0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.3,-0.6);
    glVertex2f(-0.2,-0.6);
    glVertex2f(-0.2,-0.8);
    glVertex2f(-0.3,-0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.5,-0.6);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.4,-0.8);
    glVertex2f(-0.5,-0.8);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.7,-0.6);
    glVertex2f(-0.6,-0.6);
    glVertex2f(-0.6,-0.8);
    glVertex2f(-0.7,-0.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.9,-0.6);
    glVertex2f(-0.8,-0.6);
    glVertex2f(-0.8,-0.8);
    glVertex2f(-0.9,-0.8);
    glEnd();
    glPopMatrix();

    //rail line end

}

void train()
{
     //train start
    glPushMatrix();
    glTranslatef(positionLR,0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(0,0.5f,0.3f);
    glVertex2f(-0.1,-0.5);
    glVertex2f(-0.1,-0.7);
    glVertex2f(0.1,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0.5f,0.3f);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.1,-0.5);
    glVertex2f(-0.1,-0.7);
    glVertex2f(-0.9,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.3f,0,0);
    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.1,-0.3);
    glVertex2f(-0.1,-0.5);
    glVertex2f(-0.5,-0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6f,0,0);
    glVertex2f(-0.9,-0.1);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.9,-0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(96,96,96);
    glVertex2f(-0.8,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.8,-0.4);
    glEnd();

    //train end
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2f(-1.0,0.0);
    glVertex2f(-0.4,0.0);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-1.0,-0.1);
    glEnd();

    //wheel
    int w1;
    glColor3ub(70,70,70);


    GLfloat a = -0.3f; GLfloat b = -0.7f; GLfloat r = 0.1f;
	int tA = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat tPi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(a, b); // center of circle
		for( w1 = 0; w1 <= tA; w1++ ) {
			glVertex2f(
		            a + (r * cos(w1 *  tPi / tA)),
			    b + (r * sin(w1 * tPi / tA))
			);
		}
	glEnd();

	//wheel
    int w2;
    glColor3ub(70,70,70);


    GLfloat c1 = -0.7f; GLfloat c2 = -0.7f; GLfloat r1 = 0.1f;
	int tA2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat tPi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(c1, c2); // center of circle
		for( w2 = 0; w2 <= tA2; w2++ ) {
			glVertex2f(
		            c1 + (r1 * cos(w2 *  tPi1 / tA2)),
			    c2 + (r1 * sin(w2 * tPi1 / tA2))
			);
		}
	glEnd();

	glPopMatrix();
}
void sky()
{
      glBegin(GL_QUADS);
	glColor3ub(sr, sg, sb);

	glVertex2f(-0.999f, 1.0f);
	glVertex2f(-0.999f, 0.2f);
	glVertex2f(0.999f, 0.2f);
	glVertex2f(0.999f, 1.0f);

	glEnd();
}

void ground()
{
      glBegin(GL_QUADS);
	glColor3f(0.0f,0.4f, 0.0f);

	glVertex2f(-0.999f, 0.2f);
	glVertex2f(-0.999f, -0.3f);
	glVertex2f(0.999f, -0.3f);
	glVertex2f(0.999f, 0.2f);

	glEnd();
}
void footpath()
{
      glBegin(GL_QUADS);
	glColor3f(0.8f, 0.4f, 0.0f);

	glVertex2f(-0.999f, -0.3f);
	glVertex2f(-0.999f, -0.4f);
	glVertex2f(0.999f, -0.4f);
	glVertex2f(0.999f, -0.3f);

	glEnd();
}

void road()
{
      glBegin(GL_QUADS);
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.999f, -0.4f);
	glVertex2f(-0.999f, -1.0f);
	glVertex2f(0.999f, -1.0f);
	glVertex2f(0.999f, -0.4f);

	glEnd();


}
void pole()
{
    glPushMatrix();
    glTranslatef(-0.74, -0.2f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.1f);
	glVertex2f(0.01f, 0.2f);
	glVertex2f(0.01f, -0.2f);
	glVertex2f(0.03f, -0.2f);
	glVertex2f(0.03f, 0.2f);
	glEnd();
	glPopMatrix();

}
void lightbox()
{
 glPushMatrix();
    glTranslatef(-0.79, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.09f, 0.05f);
	glVertex2f(0.09f, -0.1f);
	glVertex2f(0.05f, -0.1f);
	glVertex2f(0.05f, 0.05f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.72, 0.02f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.016;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.72, -0.02f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,0.4,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.016;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.72, -0.06f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,0.0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.016;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

	glEnd();
	glPopMatrix();


}
void sunmoon()
{
    glPushMatrix();
	glTranslatef(-0.72, 0.8f, 0.0f);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(mr,mg,mb);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

	glEnd();
	glPopMatrix();
}

void car()
{
    glPushMatrix();
	glTranslatef(positionRL, 0.2f, 0.0f);
    glPushMatrix();
	glTranslatef(-0.3, -0.6f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.0f, 0.0f);

	glVertex2f(0.05f, 0.2f);
	glVertex2f(0.05f, 0.12f);
	glVertex2f(0.6f, 0.12f);
	glVertex2f(0.6f, 0.25f);
	glVertex2f(0.18f, 0.25f);

	glEnd();

	glLineWidth(9.0);

	glBegin(GL_LINES);
	glColor3f(0.8f, 0.0f, 0.1f);
	glVertex2f(0.18f, 0.24f);
	glVertex2f(0.25f, 0.32f);

	glEnd();

    glLineWidth(9.0);

	glBegin(GL_LINES);
	glColor3f(0.8f, 0.0f, 0.1f);
	glVertex2f(0.25f, 0.32f);
	glVertex2f(0.5f, 0.32f);
	glEnd();

	glLineWidth(9.0);

	glBegin(GL_LINES);
	glColor3f(0.8f, 0.0f, 0.1f);
	glVertex2f(0.5f, 0.32f);
	glVertex2f(0.53f, 0.24f);
	glEnd();

	glLineWidth(9.0);

	glBegin(GL_LINES);
	glColor3f(0.8f, 0.0f, 0.1f);
	glVertex2f(0.35f, 0.32f);
	glVertex2f(0.37f, 0.24f);
	glEnd();

	glPopMatrix();





//tire
glLineWidth(7.5);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(-0.1+x,-0.5+y);
}
glEnd();

                         //tire
glLineWidth(7.5);
glBegin(GL_POLYGON);
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(0.2+x,-0.5+y);
}
glEnd();

    glPopMatrix();

}
void building()
{
    glTranslatef(0.4, -0.2f, 0.0f);
     glBegin(GL_QUADS);
	glColor3f(1.0f, 0.8f, 0.0f);

	glVertex2f(-0.3f, 1.0f);
	glVertex2f(-0.3f, -0.1f);
	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.3f, 1.0f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.3f, 0.0f);

	glVertex2f(-0.1f, 1.0f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, 1.0f);

	glEnd();


	glLineWidth(1.0);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.1f);
	glVertex2f(-0.3f, 0.20f);
	glVertex2f(0.3f, 0.20f);

	glEnd();

	glLineWidth(1.0);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.1f);
	glVertex2f(-0.3f, 0.4f);
	glVertex2f(0.3f, 0.4f);

	glEnd();

	glLineWidth(1.0);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.1f);
	glVertex2f(-0.3f, 0.6f);
	glVertex2f(0.3f, 0.6f);
	glEnd();


	glLineWidth(1.0);

	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.1f);
	glVertex2f(-0.3f, 0.8f);
	glVertex2f(0.3f, 0.8f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.2f, 0.0f, 0.0f);

	glVertex2f(-0.1f, 0.1f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(0.1f, -0.1f);
	glVertex2f(0.1f, 0.1f);

	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(-0.09f, 0.09f);
	glVertex2f(-0.09f, -0.1f);
	glVertex2f(0.09f, -0.1f);
	glVertex2f(0.09f, 0.09f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex2f(-0.23f, 0.27f);
	glVertex2f(-0.23f, 0.34f);
	glVertex2f(-0.17f, 0.34f);
	glVertex2f(-0.17f, 0.27f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex2f(-0.23f, 0.47f);
	glVertex2f(-0.23f, 0.54f);
	glVertex2f(-0.17f, 0.54f);
	glVertex2f(-0.17f, 0.47f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex2f(-0.23f, 0.67f);
	glVertex2f(-0.23f, 0.74f);
	glVertex2f(-0.17f, 0.74f);
	glVertex2f(-0.17f, 0.67f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex2f(-0.23f, 0.87f);
	glVertex2f(-0.23f, 0.94f);
	glVertex2f(-0.17f, 0.94f);
	glVertex2f(-0.17f, 0.87f);

	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex2f(0.23f, 0.27f);
	glVertex2f(0.23f, 0.34f);
	glVertex2f(0.17f, 0.34f);
	glVertex2f(0.17f, 0.27f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex2f(0.23f, 0.47f);
	glVertex2f(0.23f, 0.54f);
	glVertex2f(0.17f, 0.54f);
	glVertex2f(0.17f, 0.47f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex2f(0.23f, 0.67f);
	glVertex2f(0.23f, 0.74f);
	glVertex2f(0.17f, 0.74f);
	glVertex2f(0.17f, 0.67f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.1f, 0.0f, 0.0f);

	glVertex2f(0.23f, 0.87f);
	glVertex2f(0.23f, 0.94f);
	glVertex2f(0.17f, 0.94f);
	glVertex2f(0.17f, 0.87f);

	glEnd();

}


void scene2()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    //sky
    glBegin(GL_QUADS);
    glColor3ub(sr,sg,sb);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glVertex2f(1.0,0.0);
    glVertex2f(-1.0,0.0);
    glEnd();

    //grass
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex2f(-1.0,-0.5);
    glVertex2f(1.0,-0.5);
    glVertex2f(1.0,-1.0);
    glVertex2f(-1.0,-1.0);
    glEnd();

    //field
    glBegin(GL_QUADS);
    glColor3ub(205,105,0);
    glVertex2f(-1.0,0.1);
    glVertex2f(1.0,0.1);
    glVertex2f(1,.0-0.5);
    glVertex2f(-1.0,-0.5);
    glEnd();


    //station start
    glBegin(GL_QUADS);
    glColor3ub(127,0,255);
    glVertex2f(-0.2,0.4);
    glVertex2f(0.8,0.4);
    glVertex2f(0.8,-0.1);
    glVertex2f(-0.2,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(0.2,0.1);
    glVertex2f(0.4,0.1);
    glVertex2f(0.4,-0.1);
    glVertex2f(0.2,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.1,0.3);
    glVertex2f(0.1,0.3);
    glVertex2f(0.1,0.1);
    glVertex2f(-0.1,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.5,0.3);
    glVertex2f(0.7,0.3);
    glVertex2f(0.7,0.1);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.3);

    glVertex2f(-0.1,0.2);
    glVertex2f(0.1,0.2);

    glVertex2f(0.6,0.1);
    glVertex2f(0.6,0.3);

    glVertex2f(0.5,0.2);
    glVertex2f(0.7,0.2);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,153,153);
    glVertex2f(-0.2,0.5);
    glVertex2f(0.8,0.5);
    glVertex2f(0.8,0.4);
    glVertex2f(-0.2,0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,153,153);
    glVertex2f(-0.2,0.5);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.2,0.4);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,153,153);
    glVertex2f(0.8,0.5);
    glVertex2f(0.8,0.4);
    glVertex2f(0.9,0.4);
    glEnd();



	//birds
    glPushMatrix();
    glTranslatef(positionRL,0.0f, 0.0f);
    glBegin(GL_LINES);
    glColor3f(0,0,0);

    glVertex2f(0.7,0.7);
    glVertex2f(0.8,0.8);

    glVertex2f(0.7,0.7);
    glVertex2f(0.6,0.8);

    glVertex2f(0.4,0.8);
    glVertex2f(0.5,0.9);

    glVertex2f(0.4,0.8);
    glVertex2f(0.3,0.9);

    glEnd();
    glPopMatrix();

   //windmill
	glBegin(GL_QUADS);
    glColor3ub(96,96,96);
    glVertex2f(-0.75,0.5);
    glVertex2f(-0.65,0.5);
    glVertex2f(-0.65,0.1);
    glVertex2f(-0.75,0.1);
    glEnd();

    glPushMatrix();
    glTranslatef(-0.7,0.5,0.0);
    glScalef(0.5,0.5,0.5);
    glRotatef(m,0.0,0.0,0.1);

    glBegin(GL_QUAD_STRIP);
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.1,0.2);
    glVertex2f(0.1,0.2);
    glVertex2f(0.0,0.5);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.0);
    glVertex2f(0.2,0.1);
    glVertex2f(0.2,-0.1);
    glVertex2f(0.5,0.0);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.0);
    glVertex2f(0.1,-0.2);
    glVertex2f(-0.1,-0.2);
    glVertex2f(0.0,-0.5);
    glEnd();

    glBegin(GL_QUAD_STRIP);
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.2,0.1);
    glVertex2f(-0.2,-0.1);
    glVertex2f(-0.5,0.0);
    glEnd();

    glPopMatrix();//glPopMatrix pops the top matrix off the stack
    m-=0.01f;//i=i+.1=.2


    sunmoon();
    railline();
    train();


	glFlush();
}

void scene1()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
	sky();
	ground();
	tree();
	road();
	footpath();
	pole();
	lightbox();
	sunmoon();
	building();
	car();
	glPushMatrix();
	glTranslatef(-0.4,0.1,0);
	railline();
	glPopMatrix();
	train();
	glFlush();

}



void keyboard(unsigned char key, int x, int y) {

    switch(key){

      case 'n':///Day and night check

                {
                sr=0;///sky night
                sg=0;
                sb=100;
                mr=255;///moon
                mg=255;
                mb=255;
                }
                break;

        case 'd':
                {

                 sr=133;///sky day
                 sg=204;
                 sb=250;
                 mr=255;///moon and sun
                 mg=255;
                 mb=0;
               }
            break;
        case 'p':
                 speedLR = 0.0f;
                 break;
        case 'r':
                 speedLR = 0.1f;
                 break;

        case 'l':
			speedLR += 0.1f;
			break;
        case 'j':
			if (speedLR>=0.1)
	           speedLR -= 0.1f;
	           else speedLR == 0.1;
	           break;
        case 'z':
			   glutDisplayFunc(scene2);
			   glutPostRedisplay();
	           break;
        case 'x':
			   glutDisplayFunc(scene1);
			   glutPostRedisplay();
	           break;
            }

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3); // Create a window with the given title
	glutTimerFunc(100, update, 0);
	glutInitWindowSize(320, 320);// Set the window's initial width & height
	glutKeyboardFunc(keyboard);
    glutDisplayFunc(scene1);
	glutTimerFunc(100, updateRL, 0);
	glutTimerFunc(100, updateLR, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
