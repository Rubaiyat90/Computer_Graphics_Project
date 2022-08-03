#include<windows.h>
#include<mmsystem.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <fstream>
#include<iostream>
#define PI 3.1416

using namespace std;

static float txB=0.0;
static float tyB=0.0;

static float txP=0.0;
static float tyP=0.0;

float txPeo1=0.0;
float txPeo2=0.0;

float txSun=0.0;


void circle(float radius_x, float radius_y)
{
    int i = 0;
    float angle1 = 0.0;

    glBegin(GL_POLYGON);

    for(i = 0; i < 100; i++)
    {
        angle1 = 2 * PI * i / 100;
        glVertex3f (cos(angle1) * radius_x, sin(angle1) * radius_y, 0);
    }

    glEnd();
}



void Bird1()
{

    txB=txB+0.008;
    if(txB>90)
    {
        txB=-30;
    }

    glLineWidth(5);//UperFan
    glBegin(GL_LINES);
    glColor3ub(96, 96, 96);
    glVertex2f(-24.5f, 80.0f);
    glVertex2f(-25.0f, 83.0f);
    glEnd();

    glPushMatrix();//Body
    glTranslated(-25,80,0);
    glScaled(0.5,1.5,0);
    glColor3ub(128, 128, 128);
    circle(3,1);
    glPopMatrix();

    glLineWidth(2);//
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(-26.0f, 80.0f);
    glVertex2f(-27.0f, 80.0f);
    glEnd();

    glLineWidth(2);//
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(-26.0f, 80.0f);
    glVertex2f(-27.0f, 82.0f);
    glEnd();

    glLineWidth(5);//LowerFan
    glBegin(GL_LINES);
    glColor3ub(96, 96, 96);
    glVertex2f(-24.5f, 80.0f);
    glVertex2f(-25.0f, 78.0f);



    glEnd();

    glPushMatrix();//Head
    glTranslated(-23.3,80,0);
    glScaled(0.5,1.5,0);
    glColor3ub(128, 128, 128);
    circle(0.8,0.8);
    glPopMatrix();

    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-23.2,80.6);
    glEnd();
    glLineWidth(2);//
    glBegin(GL_LINES);
    glColor3ub(204, 204, 0);
    glVertex2f(-23.0f, 80.0f);
    glVertex2f(-22.5f, 80.0f);
    glEnd();
}

void Bird2()
{
    txB=txB+0.008;
    if(txB>90)
    {
        txB=-30;
    }

    glLineWidth(5);//UperFan
    glBegin(GL_LINES);
    glColor3ub(96, 96, 96);
    glVertex2f(-20.5f, 84.0f);
    glVertex2f(-21.0f, 86.0f);
    glEnd();

    glPushMatrix();//Body
    glTranslated(-21,83,0);
    glScaled(0.5,1.5,0);
    glColor3ub(128, 128, 128);
    circle(3,1);
    glPopMatrix();

    glLineWidth(2);//
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(-22.0f, 83.0f);
    glVertex2f(-23.0f, 86.0f);
    glEnd();

    glLineWidth(2);//
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(-22.0f, 83.0f);
    glVertex2f(-23.0f, 83.0f);
    glEnd();

    glLineWidth(5);//LowerFan
    glBegin(GL_LINES);
    glColor3ub(96, 96, 96);
    glVertex2f(-20.5f, 83.0f);
    glVertex2f(-21.0f, 81.0f);



    glEnd();

    glPushMatrix();//Head
    glTranslated(-19.3,83,0);
    glScaled(0.5,1.5,0);
    glColor3ub(128, 128, 128);
    circle(0.8,0.8);
    glPopMatrix();

    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-19.2,83.6);
    glEnd();
    glLineWidth(2);//
    glBegin(GL_LINES);
    glColor3ub(204, 204, 0);
    glVertex2f(-19.0f, 83.0f);
    glVertex2f(-18.5f, 83.0f);
    glEnd();
}

void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 191, 255);
    glVertex2f(-50.0f, 110.0f);
    glVertex2f(50.0f, 110.0f);

    glVertex2f(50.0f, 25.0f);
    glVertex2f(-50.0f, 25.0f);
    glEnd();
}


void FirstBuild()
{

    glBegin(GL_POLYGON);
    glColor3ub(218, 65, 147); //side

    glVertex2f(-38.0f, 25.0f);
    glVertex2f(-36.0f, 25.0f);
    glVertex2f(-36.0f, 64.0f);
    glVertex2f(-38.0f, 67.0f);

    glColor3ub(236, 197, 218); //front
    glVertex2f(-38.0f, 67.0f);
    glVertex2f(-45.0f, 67.0f);
    glVertex2f(-45.0f, 25.0f);
    glVertex2f(-38.0f, 25.0f);
    glEnd();
}


void FrstBuildWindow()
{


    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);  //1st window

    glVertex2f(-44.0f, 62.0f);
    glVertex2f(-42.5f, 62.0f);
    glVertex2f(-42.5f, 57.0f);
    glVertex2f(-44.0f, 57.0f);

    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //2nd window

    glVertex2f(-41.0f, 62.0f);
    glVertex2f(-39.5f, 62.0f);
    glVertex2f(-39.5f, 57.0f);
    glVertex2f(-41.0f, 57.0f);

    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);  //3rd window

    glVertex2f(-44.0f, 51.0f);
    glVertex2f(-42.5f, 51.0f);
    glVertex2f(-42.5f, 46.0f);
    glVertex2f(-44.0f, 46.0f);

    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //4th window

    glVertex2f(-41.0f, 51.0f);
    glVertex2f(-39.5f, 51.0f);
    glVertex2f(-39.5f, 46.0f);
    glVertex2f(-41.0f, 46.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);  //5th window

    glVertex2f(-44.0f, 40.0f);
    glVertex2f(-42.5f, 40.0f);
    glVertex2f(-42.5f, 35.0f);
    glVertex2f(-44.0f, 35.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //6th window

    glVertex2f(-41.0f, 40.0f);
    glVertex2f(-39.5f, 40.0f);
    glVertex2f(-39.5f, 35.0f);
    glVertex2f(-41.0f, 35.0f);

    glEnd();

}

void SecondBuilding()
{
    glBegin(GL_POLYGON);

    glColor3ub(38, 17, 97);
    glVertex2f(-23.0, 69.0f);
    glVertex2f(-21.0f, 66.0f);
    glVertex2f(-21.0f, 25.0f);
    glVertex2f(-23.0f, 25.0f);

    glColor3ub(191, 185, 208);
    glVertex2f(-23.0f, 25.0f);
    glVertex2f(-30.0f, 25.0f);
    glVertex2f(-30.0f, 69.0f);
    glVertex2f(-23.0f, 69.0f);

    glEnd();
}

void secndBuildWindow()
{

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //1st window

    glVertex2f(-29.0f, 63.0f);
    glVertex2f(-27.5f, 63.0f);
    glVertex2f(-27.5f, 58.0f);
    glVertex2f(-29.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //2nd window

    glVertex2f(-26.0f, 63.0f);
    glVertex2f(-24.5f, 63.0f);
    glVertex2f(-24.5f, 58.0f);
    glVertex2f(-26.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //3rd window

    glVertex2f(-29.0f, 52.0f);
    glVertex2f(-27.5f, 52.0f);
    glVertex2f(-27.5f, 47.0f);
    glVertex2f(-29.0f, 47.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //4th window

    glVertex2f(-26.0f, 52.0f);
    glVertex2f(-24.5f, 52.0f);
    glVertex2f(-24.5f, 47.0f);
    glVertex2f(-26.0f, 47.0f);
    glEnd();
}

void thrdBuilding()
{

    glBegin(GL_POLYGON);

    glColor3ub(135, 73, 19);
    glVertex2f(-10.0, 75.0f);
    glVertex2f(-8.0f, 72.0f);
    glVertex2f(-8.0f, 25.0f);
    glVertex2f(-10.0f, 25.0f);

    glColor3ub(205, 146, 94);
    glVertex2f(-10.0f, 25.0f);
    glVertex2f(-17.0f, 25.0f);
    glVertex2f(-17.0f, 75.0f);
    glVertex2f(-10.0f, 75.0f);

    glEnd();


}

void thirdBildWindow()
{


    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //1st window

    glVertex2f(-16.0f, 63.0f);
    glVertex2f(-14.5f, 63.0f);
    glVertex2f(-14.5f, 58.0f);
    glVertex2f(-16.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //2nd window

    glVertex2f(-13.0f, 63.0f);
    glVertex2f(-11.5f, 63.0f);
    glVertex2f(-11.5f, 58.0f);
    glVertex2f(-13.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //3rd window

    glVertex2f(-16.0f, 52.0f);
    glVertex2f(-14.5f, 52.0f);
    glVertex2f(-14.5f, 47.0f);
    glVertex2f(-16.0f, 47.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //4th window

    glVertex2f(-13.0f, 52.0f);
    glVertex2f(-11.5f, 52.0f);
    glVertex2f(-11.5f, 47.0f);
    glVertex2f(-13.0f, 47.0f);
    glEnd();


}
void FrthBuilding()
{

    glBegin(GL_POLYGON);
    glColor3ub(29,122,97);

    glVertex2f(3.0, 80.0f);
    glVertex2f(5.0f, 77.0f);
    glVertex2f(5.0f, 25.0f);
    glVertex2f(3.0f, 25.0f);

    glColor3ub(108,220,190);
    glVertex2f(3.0f, 25.0f);
    glVertex2f(-4.0f, 25.0f);
    glVertex2f(-4.0f, 80.0f);
    glVertex2f(3.0f, 80.0f);

    glEnd();

}

void frthBuildingWindow()
{


    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //1st window

    glVertex2f(-3.0f, 78.0f);
    glVertex2f(-1.5f, 78.0f);
    glVertex2f(-1.5f, 73.0f);
    glVertex2f(-3.0f, 73.0f);
    glEnd();
    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //2nd window

    glVertex2f(0.0f, 78.0f);
    glVertex2f(1.5f, 78.0f);
    glVertex2f(1.5f, 73.0f);
    glVertex2f(0.0f, 73.0f);
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //3rd window

    glVertex2f(-3.0f, 68.0f);
    glVertex2f(-1.5f, 68.0f);
    glVertex2f(-1.5f, 63.0f);
    glVertex2f(-3.0f, 63.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //4th window

    glVertex2f(0.0f, 68.0f);
    glVertex2f(1.5f, 68.0f);
    glVertex2f(1.5f, 63.0f);
    glVertex2f(0.0f, 63.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //5th window

    glVertex2f(-3.0f, 57.0f);
    glVertex2f(-1.5f, 57.0f);
    glVertex2f(-1.5f, 52.0f);
    glVertex2f(-3.0f, 52.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //6th window

    glVertex2f(0.0f, 57.0f);
    glVertex2f(1.5f, 57.0f);
    glVertex2f(1.5f, 52.0f);
    glVertex2f(0.0f, 52.0f);
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //7th window

    glVertex2f(-3.0f, 47.0f);
    glVertex2f(-1.5f, 47.0f);
    glVertex2f(-1.5f, 42.5f);
    glVertex2f(-3.0f, 42.5f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //8th window

    glVertex2f(0.0f, 47.0f);
    glVertex2f(1.5f, 47.0f);
    glVertex2f(1.5f, 42.5f);
    glVertex2f(0.0f, 42.5f);
    glEnd();

}

void fthBuilding()
{
    glBegin(GL_POLYGON);
    glColor3ub(148,35,23);

    glVertex2f(16.0, 77.0f);
    glVertex2f(18.0f, 74.0f);
    glVertex2f(18.0f, 25.0f);
    glVertex2f(16.0f, 25.0f);
    glColor3ub(218,101,88);
    glVertex2f(16.0f, 25.0f);
    glVertex2f(9.0f, 25.0f);
    glVertex2f(9.0f, 77.0f);
    glVertex2f(16.0f, 77.0f);

    glEnd();

}

void fthBuildingWindow()
{

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //1st window

    glVertex2f(10.0f, 68.0f);
    glVertex2f(11.5f, 68.0f);
    glVertex2f(11.5f, 63.0f);
    glVertex2f(10.0f, 63.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //2nd window

    glVertex2f(13.0f, 68.0f);
    glVertex2f(14.5f, 68.0f);
    glVertex2f(14.5f, 63.0f);
    glVertex2f(13.0f, 63.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //3rd window

    glVertex2f(10.0f, 57.0f);
    glVertex2f(11.5f, 57.0f);
    glVertex2f(11.5f, 52.0f);
    glVertex2f(10.0f, 52.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //4th window

    glVertex2f(13.0f, 57.0f);
    glVertex2f(14.5f, 57.0f);
    glVertex2f(14.5f, 52.0f);
    glVertex2f(13.0f, 52.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //5th window

    glVertex2f(10.0f, 47.0f);
    glVertex2f(11.5f, 47.0f);
    glVertex2f(11.5f, 42.5f);
    glVertex2f(10.0f, 42.5f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //6th window

    glVertex2f(13.0f, 47.0f);
    glVertex2f(14.5f, 47.0f);
    glVertex2f(14.5f, 42.5f);
    glVertex2f(13.0f, 42.5f);
    glEnd();

}

void SixBuilding()
{

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(29.0, 73.0f);
    glVertex2f(31.0f, 70.0f);
    glVertex2f(31.0f, 25.0f);
    glVertex2f(29.0f, 25.0f);

    glColor3ub(192,192,192);
    glVertex2f(29.0f, 25.0f);
    glVertex2f(22.0f, 25.0f);
    glVertex2f(22.0f, 73.0f);
    glVertex2f(29.0f, 73.0f);

    glEnd();


}

void SxthBuildingWindow()
{


    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //1st window

    glVertex2f(23.0f, 71.0f);
    glVertex2f(24.5f, 71.0f);
    glVertex2f(24.5f, 66.0f);
    glVertex2f(23.0f, 66.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //2nd window

    glVertex2f(26.0f, 71.0f);
    glVertex2f(27.5f, 71.0f);
    glVertex2f(27.5f, 66.0f);
    glVertex2f(26.0f, 66.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //3rd window

    glVertex2f(23.0f, 60.0f);
    glVertex2f(24.5f, 60.0f);
    glVertex2f(24.5f, 55.0f);
    glVertex2f(23.0f, 55.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //4th window

    glVertex2f(26.0f, 60.0f);
    glVertex2f(27.5f, 60.0f);
    glVertex2f(27.5f, 55.0f);
    glVertex2f(26.0f, 55.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //5th window

    glVertex2f(23.0f, 49.0f);
    glVertex2f(24.5f, 49.0f);
    glVertex2f(24.5f, 44.0f);
    glVertex2f(23.0f, 44.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //6th window

    glVertex2f(26.0f, 49.0f);
    glVertex2f(27.5f, 49.0f);
    glVertex2f(27.5f, 44.0f);
    glVertex2f(26.0f, 44.0f);
    glEnd();
}

void sevenBuilding()
{

    glBegin(GL_POLYGON);
    glColor3ub(153,153,0);

    glVertex2f(41.0, 70.0f);
    glVertex2f(43.0f, 67.0f);
    glVertex2f(43.0f, 25.0f);
    glVertex2f(41.0f, 25.0f);
    glColor3ub(204,204,0);
    glVertex2f(41.0f, 25.0f);
    glVertex2f(34.0f, 25.0f);
    glVertex2f(34.0f, 70.0f);
    glVertex2f(41.0f, 70.0f);

    glEnd();

}

void sevenBuildingWindow()
{

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //1st window

    glVertex2f(35.0f, 63.0f);
    glVertex2f(36.5f, 63.0f);
    glVertex2f(36.5f, 58.0f);
    glVertex2f(35.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //2nd window

    glVertex2f(38.0f, 63.0f);
    glVertex2f(39.5f, 63.0f);
    glVertex2f(39.5f, 58.0f);
    glVertex2f(38.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //3rd window

    glVertex2f(35.0f, 52.0f);
    glVertex2f(36.5f, 52.0f);
    glVertex2f(36.5f, 47.0f);
    glVertex2f(35.0f, 47.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(50, 46, 48);   //4th window

    glVertex2f(38.0f, 52.0f);
    glVertex2f(39.5f, 52.0f);
    glVertex2f(39.5f, 47.0f);
    glVertex2f(38.0f, 47.0f);
    glEnd();



}



void FrstBuildWindowN()
{
    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //1st window

    glVertex2f(-44.0f, 73.0f);
    glVertex2f(-42.5f, 73.0f);
    glVertex2f(-42.5f, 68.0f);
    glVertex2f(-44.0f, 68.0f);

    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //2nd window

    glVertex2f(-41.0f, 73.0f);
    glVertex2f(-39.5f, 73.0f);
    glVertex2f(-39.5f, 68.0f);
    glVertex2f(-41.0f, 68.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //3rd window

    glVertex2f(-44.0f, 62.0f);
    glVertex2f(-42.5f, 62.0f);
    glVertex2f(-42.5f, 57.0f);
    glVertex2f(-44.0f, 57.0f);

    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //4rth window

    glVertex2f(-41.0f, 62.0f);
    glVertex2f(-39.5f, 62.0f);
    glVertex2f(-39.5f, 57.0f);
    glVertex2f(-41.0f, 57.0f);

    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //5th window

    glVertex2f(-44.0f, 51.0f);
    glVertex2f(-42.5f, 51.0f);
    glVertex2f(-42.5f, 46.0f);
    glVertex2f(-44.0f, 46.0f);

    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);
    glVertex2f(-41.0f, 51.0f);
    glVertex2f(-39.5f, 51.0f);
    glVertex2f(-39.5f, 46.0f);
    glVertex2f(-41.0f, 46.0f);

    glEnd();

}


void secndBuildWindowN()
{

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //1st window

    glVertex2f(-29.0f, 75.0f);
    glVertex2f(-27.5f, 75.0f);
    glVertex2f(-27.5f, 70.0f);
    glVertex2f(-29.0f, 70.0f);
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //2nd window

    glVertex2f(-26.0f, 75.0f);
    glVertex2f(-24.5f, 75.0f);
    glVertex2f(-24.5f, 70.0f);
    glVertex2f(-26.0f, 70.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //3rd window

    glVertex2f(-29.0f, 63.0f);
    glVertex2f(-27.5f, 63.0f);
    glVertex2f(-27.5f, 58.0f);
    glVertex2f(-29.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //4th window

    glVertex2f(-26.0f, 63.0f);
    glVertex2f(-24.5f, 63.0f);
    glVertex2f(-24.5f, 58.0f);
    glVertex2f(-26.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //5th window

    glVertex2f(-29.0f, 52.0f);
    glVertex2f(-27.5f, 52.0f);
    glVertex2f(-27.5f, 47.0f);
    glVertex2f(-29.0f, 47.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //6th window

    glVertex2f(-26.0f, 52.0f);
    glVertex2f(-24.5f, 52.0f);
    glVertex2f(-24.5f, 47.0f);
    glVertex2f(-26.0f, 47.0f);
    glEnd();
}



void thirdBildWindowN()
{

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //1st window

    glVertex2f(-16.0f, 75.0f);
    glVertex2f(-14.5f, 75.0f);
    glVertex2f(-14.5f, 70.0f);
    glVertex2f(-16.0f, 70.0f);
    glEnd();
    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //2nd window

    glVertex2f(-13.0f, 75.0f);
    glVertex2f(-11.5f, 75.0f);
    glVertex2f(-11.5f, 70.0f);
    glVertex2f(-13.0f, 70.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //3rd window

    glVertex2f(-16.0f, 63.0f);
    glVertex2f(-14.5f, 63.0f);
    glVertex2f(-14.5f, 58.0f);
    glVertex2f(-16.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //4th window

    glVertex2f(-13.0f, 63.0f);
    glVertex2f(-11.5f, 63.0f);
    glVertex2f(-11.5f, 58.0f);
    glVertex2f(-13.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //5th window

    glVertex2f(-16.0f, 52.0f);
    glVertex2f(-14.5f, 52.0f);
    glVertex2f(-14.5f, 47.0f);
    glVertex2f(-16.0f, 47.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //6th window

    glVertex2f(-13.0f, 52.0f);
    glVertex2f(-11.5f, 52.0f);
    glVertex2f(-11.5f, 47.0f);
    glVertex2f(-13.0f, 47.0f);
    glEnd();


}

void frthBuildingWindowN()
{

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //1st window

    glVertex2f(-3.0f, 87.0f);
    glVertex2f(-1.5f, 87.0f);
    glVertex2f(-1.5f, 82.5f);
    glVertex2f(-3.0f, 82.5f);
    glEnd();
    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //2nd window

    glVertex2f(0.0f, 87.0f);
    glVertex2f(1.5f, 87.0f);
    glVertex2f(1.5f, 82.5f);
    glVertex2f(0.0f, 82.5f);
    glEnd();






    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //1st window

    glVertex2f(-3.0f, 78.0f);
    glVertex2f(-1.5f, 78.0f);
    glVertex2f(-1.5f, 73.0f);
    glVertex2f(-3.0f, 73.0f);
    glEnd();
    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //2nd window

    glVertex2f(0.0f, 78.0f);
    glVertex2f(1.5f, 78.0f);
    glVertex2f(1.5f, 73.0f);
    glVertex2f(0.0f, 73.0f);
    glEnd();


    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //3rd window

    glVertex2f(-3.0f, 68.0f);
    glVertex2f(-1.5f, 68.0f);
    glVertex2f(-1.5f, 63.0f);
    glVertex2f(-3.0f, 63.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //4th window

    glVertex2f(0.0f, 68.0f);
    glVertex2f(1.5f, 68.0f);
    glVertex2f(1.5f, 63.0f);
    glVertex2f(0.0f, 63.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //5th window

    glVertex2f(-3.0f, 57.0f);
    glVertex2f(-1.5f, 57.0f);
    glVertex2f(-1.5f, 52.0f);
    glVertex2f(-3.0f, 52.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //6th window

    glVertex2f(0.0f, 57.0f);
    glVertex2f(1.5f, 57.0f);
    glVertex2f(1.5f, 52.0f);
    glVertex2f(0.0f, 52.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(243, 243, 57);   //7th window

    glVertex2f(-3.0f, 47.0f);
    glVertex2f(-1.5f, 47.0f);
    glVertex2f(-1.5f, 42.5f);
    glVertex2f(-3.0f, 42.5f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //8th window

    glVertex2f(0.0f, 47.0f);
    glVertex2f(1.5f, 47.0f);
    glVertex2f(1.5f, 42.5f);
    glVertex2f(0.0f, 42.5f);
    glEnd();

}



void fthBuildingWindowN()
{
    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //1st window

    glVertex2f(10.0f, 78.0f);
    glVertex2f(11.5f, 78.0f);
    glVertex2f(11.5f, 73.0f);
    glVertex2f(10.0f, 73.0f);
    glEnd();
    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //2nd window

    glVertex2f(13.0f, 78.0f);
    glVertex2f(14.5f, 78.0f);
    glVertex2f(14.5f, 73.0f);
    glVertex2f(13.0f, 73.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //3rd window

    glVertex2f(10.0f, 68.0f);
    glVertex2f(11.5f, 68.0f);
    glVertex2f(11.5f, 63.0f);
    glVertex2f(10.0f, 63.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //4th window

    glVertex2f(13.0f, 68.0f);
    glVertex2f(14.5f, 68.0f);
    glVertex2f(14.5f, 63.0f);
    glVertex2f(13.0f, 63.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);  //5th window

    glVertex2f(10.0f, 57.0f);
    glVertex2f(11.5f, 57.0f);
    glVertex2f(11.5f, 52.0f);
    glVertex2f(10.0f, 52.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //6th window

    glVertex2f(13.0f, 57.0f);
    glVertex2f(14.5f, 57.0f);
    glVertex2f(14.5f, 52.0f);
    glVertex2f(13.0f, 52.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //7th window

    glVertex2f(10.0f, 47.0f);
    glVertex2f(11.5f, 47.0f);
    glVertex2f(11.5f, 42.5f);
    glVertex2f(10.0f, 42.5f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //8th window

    glVertex2f(13.0f, 47.0f);
    glVertex2f(14.5f, 47.0f);
    glVertex2f(14.5f, 42.5f);
    glVertex2f(13.0f, 42.5f);
    glEnd();

}



void SxthBuildingWindowN()
{
    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //1st window

    glVertex2f(23.0f, 82.0f);
    glVertex2f(24.5f, 82.0f);
    glVertex2f(24.5f, 77.0f);
    glVertex2f(23.0f, 77.0f);
    glEnd();
    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //2nd window

    glVertex2f(26.0f, 82.0f);
    glVertex2f(27.5f, 82.0f);
    glVertex2f(27.5f, 77.0f);
    glVertex2f(26.0f, 77.0f);
    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //3rd window

    glVertex2f(23.0f, 71.0f);
    glVertex2f(24.5f, 71.0f);
    glVertex2f(24.5f, 66.0f);
    glVertex2f(23.0f, 66.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //4th window

    glVertex2f(26.0f, 71.0f);
    glVertex2f(27.5f, 71.0f);
    glVertex2f(27.5f, 66.0f);
    glVertex2f(26.0f, 66.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //5th window

    glVertex2f(23.0f, 60.0f);
    glVertex2f(24.5f, 60.0f);
    glVertex2f(24.5f, 55.0f);
    glVertex2f(23.0f, 55.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //6th window

    glVertex2f(26.0f, 60.0f);
    glVertex2f(27.5f, 60.0f);
    glVertex2f(27.5f, 55.0f);
    glVertex2f(26.0f, 55.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //7th window

    glVertex2f(23.0f, 49.0f);
    glVertex2f(24.5f, 49.0f);
    glVertex2f(24.5f, 44.0f);
    glVertex2f(23.0f, 44.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //8th window

    glVertex2f(26.0f, 49.0f);
    glVertex2f(27.5f, 49.0f);
    glVertex2f(27.5f, 44.0f);
    glVertex2f(26.0f, 44.0f);
    glEnd();
}



void sevenBuildingWindowN()
{

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //1st window

    glVertex2f(35.0f, 74.0f);
    glVertex2f(36.5f, 74.0f);
    glVertex2f(36.5f, 69.0f);
    glVertex2f(35.0f, 69.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //2nd window

    glVertex2f(38.0f, 74.0f);
    glVertex2f(39.5f, 74.0f);
    glVertex2f(39.5f, 69.0f);
    glVertex2f(38.0f, 69.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //3rd window

    glVertex2f(35.0f, 63.0f);
    glVertex2f(36.5f, 63.0f);
    glVertex2f(36.5f, 58.0f);
    glVertex2f(35.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //4th window

    glVertex2f(38.0f, 63.0f);
    glVertex2f(39.5f, 63.0f);
    glVertex2f(39.5f, 58.0f);
    glVertex2f(38.0f, 58.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //5th window

    glVertex2f(35.0f, 52.0f);
    glVertex2f(36.5f, 52.0f);
    glVertex2f(36.5f, 47.0f);
    glVertex2f(35.0f, 47.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(243, 243, 57);   //6th window

    glVertex2f(38.0f, 52.0f);
    glVertex2f(39.5f, 52.0f);
    glVertex2f(39.5f, 47.0f);
    glVertex2f(38.0f, 47.0f);
    glEnd();



}
void AirPlane()
{
    txP=txP+0.05;
    if(txP>90)
    {
        txP=-100;
    }
    glBegin(GL_QUADS);//upper Side

    glColor3ub(0,76,153);


    glVertex2f(34.0f,93.0f);
    glVertex2f(32.0f,93.0f);
    glVertex2f(30.0f,100.0f);
    glVertex2f(32.0f,100.0f);

    glEnd();

    glBegin(GL_QUADS);//Body

    glColor3ub(96,96,96);

    glVertex2f(26.0f,87.0f);
    glVertex2f(37.0f,87.0f);
    glVertex2f(37.0f,95.0f);
    glVertex2f(26.0f,95.0f);
    glEnd();
    glLineWidth(4);

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(31.0f, 91.0f);
    glVertex2f(31.0f, 92.5f);
    glEnd();

    glLineWidth(4);

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(33.0f, 91.0f);
    glVertex2f(33.0f, 92.5f);
    glEnd();

    glLineWidth(4);

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(35.0f, 91.0f);
    glVertex2f(35.0f, 92.5f);
    glEnd();


    glBegin(GL_QUADS);//Front

    glColor3ub(96,96,96);

    glVertex2f(37.0f,87.0f);
    glVertex2f(40.0f,88.0f);
    glVertex2f(40.0f,92.0f);
    glVertex2f(37.0f,95.0f);
    glEnd();
    glLineWidth(4);

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(37.5f, 92.0f);
    glVertex2f(38.5f, 92.0f);
    glEnd();


    glBegin(GL_QUADS);//Back
    glColor3ub(0,76,153);

    glVertex2f(26.0f,94.0f);
    glVertex2f(28.0f,94.0f);
    glVertex2f(27.0f,103.0f);
    glVertex2f(26.0f,103.0f);

    glEnd();

    glBegin(GL_QUADS);//Lower Side

    glColor3ub(0,76,153);

    glVertex2f(30.0f,83.0f);
    glVertex2f(32.0f,83.0f);
    glVertex2f(34.0f,90.0f);
    glVertex2f(32.0f,90.0f);

    glEnd();
}

void middle()
{
    glBegin(GL_POLYGON);
    glColor3ub(135, 73, 19);

    glVertex2f(-40.0f, -110.0f); //side
    glVertex2f(-38.0f, -110.0f);
    glVertex2f(-38.0f, -37.0f);
    glVertex2f(-40.0f, -34.0f);

    glColor3ub(205, 146, 94);//front

    glVertex2f(-40.0f, -34.0f);
    glVertex2f(-47.0f, -34.0f);
    glVertex2f(-47.0f, -90.0f);
    glVertex2f(-40.0f, -90.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(29,122,97);

    glVertex2f(-28.0f, -110.0f); //side
    glVertex2f(-26.0f, -110.0f);
    glVertex2f(-26.0f, -34.0f);
    glVertex2f(-28.0f, -31.0f);

    glColor3ub(108,220,190);//front

    glVertex2f(-28.0f, -31.0f);
    glVertex2f(-35.0f, -31.0f);
    glVertex2f(-35.0f, -90.0f);
    glVertex2f(-28.0f, -90.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(38, 17, 97);
    glVertex2f(28.0f, -110.0f); //side
    glVertex2f(26.0f, -110.0f);
    glVertex2f(26.0f, -34.0f);
    glVertex2f(28.0f, -31.0f);

    glColor3ub(191, 185, 208);//front

    glVertex2f(28.0f, -31.0f);
    glVertex2f(35.0f, -31.0f);
    glVertex2f(35.0f, -90.0f);
    glVertex2f(28.0f, -90.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(148,35,23);

    glVertex2f(40.0f, -110.0f); //side
    glVertex2f(38.0f, -110.0f);
    glVertex2f(38.0f, -37.0f);
    glVertex2f(40.0f, -34.0f);

    glColor3ub(218,101,88);//front

    glVertex2f(40.0f, -34.0f);
    glVertex2f(47.0f, -34.0f);
    glVertex2f(47.0f, -90.0f);
    glVertex2f(40.0f, -90.0f);
    glEnd();


//window

    glBegin(GL_POLYGON);
    glColor3ub(243, 243, 57);

    glVertex2f(-45.0f, -37.0f);
    glVertex2f(-43.0f, -39.0f);
    glVertex2f(-43.0f, -39.0f);
    glVertex2f(-45.0f, -37.0f);
    glEnd();


//Field

    glBegin(GL_POLYGON);

    glColor3ub(29,122,97);

    glVertex2f(-25.0f, -100.0f);
    glVertex2f(25.0f, -100.0f);
    glVertex2f(20.0f, -30.0f);
    glVertex2f(-20.0f, -30.0f);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(204,204,0);

    glVertex2f(-8.0f, -60.0f);
    glVertex2f(8.0f, -60.0f);
    glVertex2f(7.7f, -50.0f);
    glVertex2f(-7.7f, -50.0f);
    glEnd();


//road
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-100.0f, -20.0f);
    glVertex2f(-3.0f, -20.0f);
    glVertex2f(-1.0f, 17.00f);
    glVertex2f(-100.0f, 17.00f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(100.0f, -20.0f);
    glVertex2f(3.0f, -20.0f);
    glVertex2f(1.0f, 17.0f);
    glVertex2f(100.0f, 17.0f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-100.0f, 2.0f);
    glVertex2f(-2.0f, 2.0f);

    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(100.0f, 2.0f);
    glVertex2f(2.0f, 2.0f);

    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(119,136,153);

    glVertex2f(-100.0f, 25.0f);
    glVertex2f(-100.0f, 17.0f);
    glVertex2f(100.0f, 17.0f);
    glVertex2f(100.0f, 25.0f);
    glEnd();

    glBegin(GL_QUADS);

    glColor3ub(119,136,153);

    glVertex2f(-100.0f, -20.0f);
    glVertex2f(-100.0f, -30.0f);
    glVertex2f(100.0f, -30.0f);
    glVertex2f(100.0f, -20.0f);
    glEnd();

    //eighth building
    glBegin(GL_POLYGON);
    glColor3ub(218,101,88);

    glVertex2f(-37.0f, 25.0f);
    glVertex2f(-37.0f, 66.0f);
    glVertex2f(-30.0f, 66.0f);
    glVertex2f(-30.0f, 25.0f);

    glEnd();

    //Ninth Building
    glBegin(GL_POLYGON);
    glColor3ub(153,153,0);

    glVertex2f(-22.0f, 66.0f);
    glVertex2f(-22.0f, 25.0f);
    glVertex2f(-17.0f, 25.0f);
    glVertex2f(-17.0f, 66.0f);

    glEnd();

    //tenth Building
    glBegin(GL_POLYGON);
    glColor3ub(192,192,192);

    glVertex2f(-9.5f, 73.0f);
    glVertex2f(-9.5f, 25.0f);
    glVertex2f(-4.0f, 25.0f);
    glVertex2f(-4.0f, 73.0f);

    glEnd();

    //eleventh Building
    glBegin(GL_POLYGON);
    glColor3ub(236, 197, 218); //front

    glVertex2f(3.0f, 25.0f);
    glVertex2f(3.0f, 77.0f);
    glVertex2f(8.5f, 77.0f);
    glVertex2f(8.5f, 25.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(221,160,221); //side

    glVertex2f(8.5f, 25.0f);
    glVertex2f(8.5f, 77.0f);
    glVertex2f(9.0f, 74.0f);
    glVertex2f(9.0f, 25.0f);

    glEnd();

    //twelve Building
    glBegin(GL_POLYGON);
    glColor3ub(191, 185, 208); //front

    glVertex2f(22.0f, 25.0f);
    glVertex2f(22.0, 72.0f);
    glVertex2f(16.5f, 72.0f);
    glVertex2f(16.5f, 25.0f);

    glEnd();

    //thirteen Building
    glBegin(GL_POLYGON);
    glColor3ub(205, 146, 94);//front

    glVertex2f(29.5f, 69.0f);
    glVertex2f(29.5f, 25.0f);
    glVertex2f(34.0f, 25.0f);
    glVertex2f(34.0f, 69.0f);
    glEnd();

    //fourteenth Building
    glBegin(GL_POLYGON);
    glColor3ub(236, 197, 218);//front

    glVertex2f(41.5f, 65.0f);
    glVertex2f(41.5f, 25.0f);
    glVertex2f(48.5f, 25.0f);
    glVertex2f(48.5f, 65.0f);
    glEnd();

    //shop
    glBegin(GL_POLYGON);
    glColor3ub(230,230,250);

    glVertex2f(-37.5f, 25.0f);
    glVertex2f(-37.5f, 40.0f);
    glVertex2f(-30.0f, 40.0f);
    glVertex2f(-30.0f, 25.0f);

    glEnd();

}

void people1()
{

    glPushMatrix();//body
    glTranslated(0,-20,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,100,100);
    circle(1,2.5);
    glPopMatrix();

    glPushMatrix();//head
    glTranslated(0,-14.5,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,255,0);
    circle(1,1);
    glPopMatrix();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.1f, -23.0f);
    glVertex2f(0.3f, -27.0f);
    glEnd();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.3f, -23.0f);
    glVertex2f(-0.5f, -27.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.5f, -17.0f);
    glVertex2f(0.7f, -20.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-.4f, -17.0f);
    glVertex2f(-0.7f, -20.0f);
    glEnd();

}
void people2()
{

    glPushMatrix();//body
    glTranslated(0,25,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,100,100);
    circle(1,2.5);
    glPopMatrix();

    glPushMatrix();//head
    glTranslated(0,30,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,255,0);
    circle(1,1);
    glPopMatrix();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.3f, 18.0f);
    glVertex2f(0.1f, 22.0f);
    glEnd();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.5f, 18.0f);
    glVertex2f(-0.3f, 22.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.7f, 24.0f);
    glVertex2f(-0.4f, 27.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.5f, 24.0f);
    glVertex2f(0.3f, 27.0f);
    glEnd();

}

void people9()
{
    glPushMatrix();


    txPeo1=txPeo1+0.01;
    if(txPeo1>45)
    {
        txPeo1=45;

    }
    glTranslatef(0,txPeo1,0);
    glPushMatrix();//body
    glTranslated(0,-20,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,100,100);
    circle(1,2.5);
    glPopMatrix();

    glPushMatrix();//head
    glTranslated(0,-14.5,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,255,0);
    circle(1,1);
    glPopMatrix();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.1f, -23.0f);
    glVertex2f(0.3f, -27.0f);
    glEnd();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.3f, -23.0f);
    glVertex2f(-0.5f, -27.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.5f, -17.0f);
    glVertex2f(0.7f, -20.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-.4f, -17.0f);
    glVertex2f(-0.7f, -20.0f);
    glEnd();
    glPopMatrix();
}
void people10()
{
     glPushMatrix();


    txPeo2=txPeo2-0.01;
    if(txPeo2<-45)
    {
        txPeo2=-45;

    }
    glTranslatef(0,txPeo2,0);
    glPushMatrix();//body
    glTranslated(0,25,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,100,100);
    circle(1,2.5);
    glPopMatrix();

    glPushMatrix();//head
    glTranslated(0,30,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,255,0);
    circle(1,1);
    glPopMatrix();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.3f, 18.0f);
    glVertex2f(0.1f, 22.0f);
    glEnd();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.5f, 18.0f);
    glVertex2f(-0.3f, 22.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-0.7f, 24.0f);
    glVertex2f(-0.4f, 27.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(0.5f, 24.0f);
    glVertex2f(0.3f, 27.0f);
    glEnd();

glPopMatrix();

}

void people3()
{
    glPushMatrix();//body
    glTranslated(-6,-21,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,100,100);
    circle(1,2.5);
    glPopMatrix();

    glPushMatrix();//head
    glTranslated(-6,-15.5,0);
    glScaled(0.5,1.5,0);
    glColor3ub(255,255,0);
    circle(1,1);
    glPopMatrix();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-6.3f, -24.0f);
    glVertex2f(-6.5f, -28.0f);
    glEnd();

    glLineWidth(3);//leg
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-5.95f, -24.0f);
    glVertex2f(-5.75f, -28.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-6.4f, -18.0f);
    glVertex2f(-6.6f, -21.0f);
    glEnd();

    glLineWidth(3);//hand
    glBegin(GL_LINES);
    glColor3ub(255, 255, 0);
    glVertex2f(-5.6f, -18.0f);
    glVertex2f(-5.4f, -21.0f);
    glEnd();
}

void Traffic()
{



    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    glVertex2f(3.0f, 18.0f);
    glVertex2f(4.0f, 18.0f);
    glVertex2f(4.0f, 38.0f);
    glVertex2f(3.0f, 38.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    glVertex2f(-4.0f, 38.0f);
    glVertex2f(5.0f, 38.0f);
    glVertex2f(5.0f, 50.0f);
    glVertex2f(-4.0f, 50.0f);
    glEnd();


    glPushMatrix();
    glTranslated(-2.5,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(255,0,0);
    circle(1.5,1.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.2,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(10,100,0);
    circle(1.5,1.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(3,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(0,255,0);
    circle(1.5,1.5);
    glPopMatrix();
}

void TrRed()
{


    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    glVertex2f(3.0f, 18.0f);
    glVertex2f(4.0f, 18.0f);
    glVertex2f(4.0f, 38.0f);
    glVertex2f(3.0f, 38.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    glVertex2f(-4.0f, 38.0f);
    glVertex2f(5.0f, 38.0f);
    glVertex2f(5.0f, 50.0f);
    glVertex2f(-4.0f, 50.0f);
    glEnd();

    glPushMatrix();
    glTranslated(-2.5,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(255,0,0);
    circle(1.5,1.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.2,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(255,255,255);
    circle(1.5,1.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(3,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(255,255,255);
    circle(1.5,1.5);
    glPopMatrix();


}

void TrYel()

{
    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    glVertex2f(3.0f, 18.0f);
    glVertex2f(4.0f, 18.0f);
    glVertex2f(4.0f, 38.0f);
    glVertex2f(3.0f, 38.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    glVertex2f(-4.0f, 38.0f);
    glVertex2f(5.0f, 38.0f);
    glVertex2f(5.0f, 50.0f);
    glVertex2f(-4.0f, 50.0f);
    glEnd();

    glPushMatrix();
    glTranslated(-2.5,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(255,255,255);
    circle(1.5,1.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.2,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(10,100,0);
    circle(1.5,1.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(3,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(255,255,255);
    circle(1.5,1.5);
    glPopMatrix();

}

void TrGN()
{

    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    glVertex2f(3.0f, 18.0f);
    glVertex2f(4.0f, 18.0f);
    glVertex2f(4.0f, 38.0f);
    glVertex2f(3.0f, 38.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(64, 64, 64);

    glVertex2f(-4.0f, 38.0f);
    glVertex2f(5.0f, 38.0f);
    glVertex2f(5.0f, 50.0f);
    glVertex2f(-4.0f, 50.0f);
    glEnd();

    glPushMatrix();
    glTranslated(-2.5,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(255,255,255);
    circle(1.5,1.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.2,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(255,255,255);
    circle(1.5,1.5);
    glPopMatrix();

    glPushMatrix();
    glTranslated(3,44,0);
    glScaled(0.5,1.5,0);
    glColor3f(0,255,0);
    circle(1.5,1.5);
    glPopMatrix();
}

void Daydisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    sky();

    FirstBuild();
    FrstBuildWindow();
    SecondBuilding();
    secndBuildWindow();
    thrdBuilding();
    thirdBildWindow();
    FrthBuilding();
    frthBuildingWindow();
    fthBuilding();
    fthBuildingWindow();
    SixBuilding();
    SxthBuildingWindow();
    sevenBuilding();
    sevenBuildingWindow();
    people1();
    people2();

    glPushMatrix();
    glTranslatef(txP,tyP,0);
    AirPlane();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(txB,tyB,0);
    Bird1();
    Bird2();
    glPopMatrix();

    middle();

    people1();

    people2();
    people3();
    Traffic();
    glutPostRedisplay();
    glFlush();
}

void Red(void)
{
    sky();

    FirstBuild();
    FrstBuildWindow();
    SecondBuilding();
    secndBuildWindow();
    thrdBuilding();
    thirdBildWindow();
    FrthBuilding();
    frthBuildingWindow();
    fthBuilding();
    fthBuildingWindow();
    SixBuilding();
    SxthBuildingWindow();
    sevenBuilding();
    sevenBuildingWindow();
    people2();

    glPushMatrix();
    glTranslatef(txP,tyP,0);
    AirPlane();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(txB,tyB,0);
    Bird1();
    Bird2();
    glPopMatrix();

    middle();

    people1();

    people2();
    people3();
    Traffic();
    TrRed();
    glutPostRedisplay();
    glFlush();
}

void Yellow(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    sky();

    FirstBuild();
    FrstBuildWindow();
    SecondBuilding();
    secndBuildWindow();
    thrdBuilding();
    thirdBildWindow();
    FrthBuilding();
    frthBuildingWindow();
    fthBuilding();
    fthBuildingWindow();
    SixBuilding();
    SxthBuildingWindow();
    sevenBuilding();
    sevenBuildingWindow();
    people1();
    people2();

    glPushMatrix();
    glTranslatef(txP,tyP,0);
    AirPlane();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(txB,tyB,0);
    Bird1();
    Bird2();
    glPopMatrix();

    middle();
    people1();
    people2();
    people3();
    Traffic();
    TrYel();
    glutPostRedisplay();
    glFlush();
}

void Green(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    sky();

    FirstBuild();
    FrstBuildWindow();
    SecondBuilding();
    secndBuildWindow();
    thrdBuilding();
    thirdBildWindow();
    FrthBuilding();
    frthBuildingWindow();
    fthBuilding();
    fthBuildingWindow();
    SixBuilding();
    SxthBuildingWindow();
    sevenBuilding();
    sevenBuildingWindow();


    glPushMatrix();
    glTranslatef(txP,tyP,0);
    AirPlane();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(txB,tyB,0);
    Bird1();
    Bird2();
    glPopMatrix();

    middle();
    people1();
    people2();
    people3();
    Traffic();
    TrGN();
    glutPostRedisplay();
    glFlush();
}

void PeopleMoving(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    sky();

    FirstBuild();
    FrstBuildWindow();
    SecondBuilding();
    secndBuildWindow();
    thrdBuilding();
    thirdBildWindow();
    FrthBuilding();
    frthBuildingWindow();
    fthBuilding();
    fthBuildingWindow();
    SixBuilding();
    SxthBuildingWindow();
    sevenBuilding();
    sevenBuildingWindow();

    glPushMatrix();
    glTranslatef(txP,tyP,0);
    AirPlane();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(txB,tyB,0);
    Bird1();
    Bird2();
    glPopMatrix();

    middle();
    people9();
    people10();
    people3();
    TrRed();
    glutPostRedisplay();
    glFlush();
}

void handleKeypress(unsigned char key, int x, int y)
{

    switch (key)
    {

    case 'r':

        glutDisplayFunc(Red);
        glutPostRedisplay();


        break;

    case 'y':

        glutDisplayFunc(Yellow);
        glutPostRedisplay();


        break;

    case 'g':

        glutDisplayFunc(Green);
        glutPostRedisplay();


        break;



    case 'p':

        glutDisplayFunc(PeopleMoving);
        glutPostRedisplay();


        break;

        case 'd':

        glutDisplayFunc(Daydisplay);
        glutPostRedisplay();


        break;


    }

}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GLUT_SINGLE| GLUT_RGB);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -90.0, 110.0, -50.0, 50.0);
}


int main(int arg, char **argv)
{
    glutInit(&arg, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1920, 1080);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("City View");
    init();

    glutDisplayFunc(Daydisplay);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}


