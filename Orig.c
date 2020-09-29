#include <GL/glut.h>
typedef struct
{
  int width, height;
} window;window wh;

float display=0;
float h_i=0,h_j=0,h_k=0,h_l=0,h_m=0,h_n=0,h_o=0,h_p=0;
float d_i=0,d_j=0,d_k=0,d_l=0,d_m=0,d_n=0,d_o=0,d_p=0,d_q=0;
float t_i=0,t_j=0,t_k=0,t_l=0,t_m=0,t_n=0,t_o=0,t_p=0,t_q=0;

void printCharacters(float x, float y, float z, const unsigned char* str)
{  
  int characters_width = glutBitmapLength(GLUT_BITMAP_TIMES_ROMAN_24,str);
  glRasterPos3f(x, y, z);
  for(int i = 0;str[i];++i)
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
}

//List
void displayList()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1, 0, 0);
  printCharacters(-0.5, 0, 2, (unsigned char*)"PRESS:");
  glColor3f(0, 0, 1);
  printCharacters(-0.75, 0, 1, (unsigned char*)"a) Heart");
  printCharacters(-0.75, 0,0.5, (unsigned char*)"b) Duck");
  printCharacters(-0.75, 0,0, (unsigned char*)"c) Tulip");
}

//Main Page
void displayText()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1, 0, 0);
  
  printCharacters(-3, 0, 2 ,(unsigned char*)"Name");
  printCharacters(2, 0, 2, (unsigned char*)"USN");
  
  glColor3f(0.2,0.1,0.2);
  printCharacters(-3.5, 0, 1.5, (unsigned char*)"Shreya Shirva");
  printCharacters(1.5, 0,1.5, (unsigned char*)"4nm16cs142");
  printCharacters(-3.75, 0, 1, (unsigned char*)"Shrikantha budya");
  printCharacters(1.5, 0, 1, (unsigned char*)"4nm16cs143");
  printCharacters(-3.15,0, 0.5, (unsigned char*)"Shrilatha");
  printCharacters(1.5, 0,0.5, (unsigned char*)"4nm16cs144");
  glColor3f(0, 0, 1);
  printCharacters(-0.5, 0, -1.5, (unsigned char*)"ORIGAMI");
}

//Heart
void display_heart() {
  glClear(GL_COLOR_BUFFER_BIT);

 
  //1
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(-4.0,0,3.25);
  glVertex3f(-4.5,0,3.75);
  glVertex3f(-3.5,0,3.75);
  glEnd();
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(-4.0,0,4.25-h_j);
  glVertex3f(-4.5,0,3.75);
  glVertex3f(-5.5,0,2.75);
  glVertex3f(-4.0,0,1.25);
  glVertex3f(-2.5,0,2.75);
  glVertex3f(-3.5,0,3.75);
  glEnd();
  glColor3f(0,0,0);
  printCharacters(-5.5, 0, 3.5, (unsigned char*)"(1)");

  glColor3f(0,0,0);
  glLineStipple(1,0XAAAA);
  glEnable(GL_LINE_STIPPLE);
  glBegin(GL_LINES);
  glVertex3f(-4.0,0,4.25-h_j);
  glVertex3f(-4.0,0,1.25);
  glVertex3f(-5.5,0,2.75);
  glVertex3f(-2.5,0,2.75);
  glEnd();

  //2
  glColor3f(0,0,0);
  printCharacters(-1.5, 0, 3.5, (unsigned char*)"(2)");
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(0.0,0,3.25);
  glVertex3f(-0.5,0,3.75);
  glVertex3f(0.5,0,3.75);
  glEnd();
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(0.0,0,3.25);
  glVertex3f(-0.5,0,3.75);
  glVertex3f(-1.5,0,2.75);
  glVertex3f(-1.25,0,2.5);
  glVertex3f(1.25,0,2.5);
  glVertex3f(1.5,0,2.75);
  glVertex3f(0.5,0,3.75);
  glEnd();
  if(h_k>1.25){
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(-1.25,0,2.5);
  glVertex3f(0.0,0,2.5+h_l);
  glVertex3f(1.25,0,2.5);
  glEnd();
  }
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(-1.25,0,2.5);
  glVertex3f(0.0,0,1.25+h_k);
  glVertex3f(1.25,0,2.5);
  glEnd();

  //3
  glColor3f(0,0,0);
  printCharacters(2.5, 0, 3.5, (unsigned char*)"(3)");
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(3.5,0,3.75);
  glVertex3f(3.75,0,3.5);
  glVertex3f(2.75+h_m,0,2.5+h_m);
  glVertex3f(4,0,2.5);
  glVertex3f(5.25-h_m,0,2.5+h_m);
  glVertex3f(4.25,0,3.5);
  glVertex3f(4.5,0,3.75);
  glEnd();
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(3.5,0,3.75);
  glVertex3f(3.25,0,3.5);
  glVertex3f(2.5+h_m,0,2.75+h_m);
  glVertex3f(2.75+h_m,0,2.5+h_m);
  glVertex3f(3.75,0,3.5);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(4.5,0,3.75);
  glVertex3f(4.75,0,3.5);
  glVertex3f(5.5-h_m,0,2.75+h_m);
  glVertex3f(5.25-h_m,0,2.5+h_m);
  glVertex3f(4.25,0,3.5);
  glEnd();
  if(h_m>+0.65)
  {
    glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(3.15,0,3.4);
  glVertex3f(3.15+h_n,0,3.4+h_n);
  glVertex3f(3.4+h_n,0,3.15+h_n);
  glVertex3f(4,0,2.5);
  glEnd(); 
  glBegin(GL_POLYGON);
  glVertex3f(4.85,0,3.4);
  glVertex3f(4.85-h_n,0,3.4+h_n);
  glVertex3f(4.6-h_n,0,3.15+h_n);
  glVertex3f(4,0,2.5);
  glEnd(); 
  }

  //4
  glColor3f(0,0,0);
  printCharacters(-5.5, 0, -1, (unsigned char*)"(4)");
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(-5.5+h_o,0,-1.75);
  glVertex3f(-5,0,-1.15);
  glVertex3f(-4,0,0);
  glVertex3f(-3.25,0,-0.75);
  glVertex3f(-3.25,0,-4);
  glVertex3f(-5,0,-2.25);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(-3.25,0,-0.75);
  glVertex3f(-2.5,0,0);
  glVertex3f(-1.5,0,-1.15);
  glVertex3f(-1-h_o,0,-1.75);
  glVertex3f(-1.5,0,-2.25);
  glVertex3f(-3.25,0,-4);
  glEnd();

  //5
  glColor3f(0,0,0);
  printCharacters(0.5, 0, -1, (unsigned char*)"(5)");
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(1,0,-1.15);
  glVertex3f(1.8,0,-0.25);
  glVertex3f(2,0,0-h_p);
  glVertex3f(2.25,0,-0.25);
  glVertex3f(2.75,0,-0.75);
  glVertex3f(2.75,0,-4);
  glVertex3f(1,0,-2.25);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(2.75,0,-0.75);
  glVertex3f(3.25,0,-0.25);
  glVertex3f(3.5,0,0-h_p);
  glVertex3f(3.7,0,-0.25);
  glVertex3f(4.5,0,-1.15);
  glVertex3f(4.5,0,-2.25);
  glVertex3f(2.75,0,-4);
  glEnd();
 
  glFlush();
}

//Duck
void display_duck() {
  glClear(GL_COLOR_BUFFER_BIT);
 
  //1
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(-4.0,0,4.25);
  glVertex3f(-5.5,0,2.75);
  glVertex3f(-5.25,0,2.5);
  glVertex3f(-4.0,0,1.25+d_j);
  glVertex3f(-2.75,0,2.5);
  glVertex3f(-2.5,0,2.75);
  glEnd();
  glColor3f(0,0,0);
  glLineStipple(1,0XAAAA);
  glEnable(GL_LINE_STIPPLE);
  glBegin(GL_LINES);
  glVertex3f(-4.0,0,4.25);
  glVertex3f(-4.0,0,1.25+d_j);
  glVertex3f(-5.5,0,2.75);
  glVertex3f(-2.5,0,2.75);
  glEnd();
  if(d_j>1){
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(-5.25,0,2.5);
  glVertex3f(-4.0,0,2.5+d_k);
  glVertex3f(-2.75,0,2.5);
  glEnd();
  }
  glColor3f(0,0,0);
  printCharacters(-5.5, 0, 3.5, (unsigned char*)"(1)");

  //2
  glColor3f(0,0,0);
  printCharacters(-1.5, 0, 3.5, (unsigned char*)"(2)");
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(0.0,0,4.25);
  glVertex3f(-1,0,3.25);
  glVertex3f(-1.75+d_l,0,2.5+d_l);
  glVertex3f(-1.25+d_l,0,1.75+d_l);
  glVertex3f(0.0,0,1.75);
  glVertex3f(1.25-d_l,0,1.75+d_l);
  glVertex3f(1.75-d_l,0,2.5+d_l);
  glVertex3f(1,0,3.25);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINES);
  glVertex3f(-1,0,3.25);
  glVertex3f(0.0,0,1.75);
  glVertex3f(0.0,0,1.75);
  glVertex3f(1,0,3.25);
  glEnd();
  
  //3
  glColor3f(0,0,0);
  printCharacters(2.5, 0, 3.5, (unsigned char*)"(4)");
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(4,0,3.95);
  glVertex3f(3.25,0,3);
  glVertex3f(4.25,0,1.75);
  glVertex3f(5.25,0,3);
  glVertex3f(4.5,0,3.95);
  glEnd();
  
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(4.25,0,4.25-d_m);
  glVertex3f(4,0,3.95);
  glVertex3f(3.85,0,3.75);
  glVertex3f(4.25,0,3.25);
  glVertex3f(4.65,0,3.75);
  glVertex3f(4.5,0,3.95);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(3.65,0,2.5);
  glVertex3f(4.25,0,1.75);
  glVertex3f(4.85,0,2.5);
  glVertex3f(4.25,0,3.25);
  glEnd();
  
  glColor3f(0,0,0);
  glBegin(GL_LINES);
  glVertex3f(4,0,3.95);
  glVertex3f(4.5,0,3.95);
  glEnd();

  //4
  glColor3f(0,0,0);
  printCharacters(-5.5, 0, -1, (unsigned char*)"(4)");
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(-4.75,0,-1.05);
  glVertex3f(-5.2,0,-1.625);
  glVertex3f(-5.5+d_n,0,-2);
  glVertex3f(-5.2,0,-2.375);
  glVertex3f(-4.5,0,-3.25);
  glVertex3f(-3.8,0,-2.375);
  glVertex3f(-3.5-d_n,0,-2);
  glVertex3f(-3.8,0,-1.625);
  glVertex3f(-4.25,0,-1.05);
  glEnd();
  
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(-4.5,0,-1.35);
  glVertex3f(-4.75,0,-1.05);
  glVertex3f(-4.9,0,-1.25);
  glVertex3f(-4.5,0,-1.75);
  glVertex3f(-4.1,0,-1.25);
  glVertex3f(-4.25,0,-1.05);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(-4.5,0,-1.75);
  glVertex3f(-5.1,0,-2.5);
  glVertex3f(-4.5,0,-3.25);
  glVertex3f(-3.9,0,-2.5);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(-5.2,0,-1.625);
  glVertex3f(-5.2+d_o,0,-2);
  glVertex3f(-5.2,0,-2.375);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(-3.8,0,-2.375);
  glVertex3f(-3.8-d_o,0,-2);
  glVertex3f(-3.8,0,-1.625);
  glEnd();
  

  glColor3f(0,0,0);
  glBegin(GL_LINES);
  glVertex3f(-3.8,0,-2.375);
  glVertex3f(-3.8,0,-1.625);
  glVertex3f(-5.2,0,-1.625);
  glVertex3f(-5.2,0,-2.375);
  glEnd();

  //5
  glColor3f(0,0,0);
  printCharacters(-1.5, 0, -1, (unsigned char*)"(5)");
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(-0.75,0,-1.05);
  glVertex3f(-1.2,0,-1.625);
  glVertex3f(-1.2,0,-2.375);
  glVertex3f(-0.5,0,-3.25);
  glVertex3f(0.2,0,-2.375);
  glVertex3f(0.2,0,-1.625);
  glVertex3f(-0.25,0,-1.05);
  glEnd();
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(-0.5,0,-1.75-d_p);
  glVertex3f(-0.9,0,-2.25);
  glVertex3f(-1.1,0,-2.5);
  glVertex3f(-0.5,0,-3.25);
  glVertex3f(0.1,0,-2.5);
  glVertex3f(-0.08,0,-2.25);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_LINES);
  glVertex3f(-0.9,0,-2.25);
  glVertex3f(-0.08,0,-2.25);
  glEnd();

  //6
  glColor3f(0,0,0);
  printCharacters(2.5, 0, -1, (unsigned char*)"(6)");
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(3.25,0,-1.05);
  glVertex3f(2.8,0,-1.625);
  glVertex3f(2.8,0,-2.375);
  glVertex3f(3.3,0,-3);
  glVertex3f(3.7,0,-3);
  glVertex3f(4.2,0,-2.375);
  glVertex3f(4.2,0,-1.625);
  glVertex3f(3.75,0,-1.05);
  glEnd();
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(3.92,0,-2.25);
  glVertex3f(3.1,0,-2.25);
  glVertex3f(2.9,0,-2.5);
  glVertex3f(3.3,0,-3);
  glVertex3f(3.5,0,-3.25+d_q);
  glVertex3f(3.7,0,-3);
  glVertex3f(4.1,0,-2.5);
  glEnd();

  glColor3f(0,0,0);
  glBegin(GL_LINES);
  glVertex3f(3.3,0,-3);
  glVertex3f(3.7,0,-3);
  glEnd();  
  if(d_q>=0.25)
  {
     glColor3f(0,0,0);
  printCharacters(3.325, 0, -2.5, (unsigned char*)".  .");
     printCharacters(3.125, 0, -1.75, (unsigned char*)"0    0");
    printCharacters(3.125, 0, -1.75, (unsigned char*)"o    o");
  }

  glFlush();
}
//Tulip------------------------------------------
void display_tulip() {
  glClear(GL_COLOR_BUFFER_BIT);
 
  //1
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(-4.0,0,4.25);
  glVertex3f(-5.5,0,2.75);
  glVertex3f(-4.0,0,1.25+t_j);
  glVertex3f(-2.5,0,2.75);
  glEnd();
  glColor3f(0,0,0);
  glLineStipple(1,0XAAAA);
  glEnable(GL_LINE_STIPPLE);
  glBegin(GL_LINES);
  glVertex3f(-4.0,0,4.25);
  glVertex3f(-4.0,0,1.25+t_j);
  glVertex3f(-5.5,0,2.75);
  glVertex3f(-2.5,0,2.75);
  glEnd();
  if(t_j>1){
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(-5.5,0,2.75);
  glVertex3f(-4.0,0,2.75+t_k);
  glVertex3f(-2.5,0,2.75);
  glEnd();
  }
  glColor3f(0,0,0);
  printCharacters(-5.5, 0, 3.5, (unsigned char*)"(1)");


  //2
  glColor3f(0,0,0);
  printCharacters(-0.5, 0, 3.5, (unsigned char*)"(2)");
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(0.5,0,3.75);
  glVertex3f(1,0,4.25);
  glVertex3f(1.5,0,3.75);
  glVertex3f(1,0,2.75);
  glEnd();
  glColor3f(0,0,0);
  glDisable(GL_LINE_STIPPLE);
  glBegin(GL_LINE_LOOP);
  glVertex3f(0.5,0,3.75);
  glVertex3f(1,0,4.25);
  glVertex3f(1.5,0,3.75);
  glVertex3f(1,0,2.75);
  glEnd();
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(1.5,0,3.75);
  glVertex3f(2.5-t_l,0,2.75+t_m);
  glVertex3f(1,0,2.75);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex3f(1.5,0,3.75);
  glVertex3f(2.5-t_l,0,2.75+t_m);
  glVertex3f(1,0,2.75);
  glEnd();
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(-0.5+t_n,0,2.75+t_o);
  glVertex3f(0.5,0,3.75);
  glVertex3f(1,0,2.75);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex3f(-0.5+t_n,0,2.75+t_o);
  glVertex3f(0.5,0,3.75);
  glVertex3f(1,0,2.75);
  glEnd();

  //3
  glColor3f(0,0,0);
  printCharacters(3, 0, 3.5, (unsigned char*)"(3)");
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(4,0,4.25);
  glVertex3f(4.5,0,3.75);
  glVertex3f(3.5,0,3.75);
  glEnd();
  glColor3f(0,0,0);
  glDisable(GL_LINE_STIPPLE);
  glBegin(GL_LINE_LOOP);
  glVertex3f(4,0,4.25);
  glVertex3f(4.5,0,3.75);
  glVertex3f(3.5,0,3.75);
  glEnd();
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(4.5,0,3.75);
  glVertex3f(3.25,0,4.25);
  glVertex3f(3.5,0,3.75);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex3f(4.5,0,3.75);
  glVertex3f(3.25,0,4.25);
  glVertex3f(3.5,0,3.75);
  glEnd();
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(4.75,0,4.25);
  glVertex3f(3.5,0,3.75);
  glVertex3f(3.875,0,3);
  glVertex3f(4,0,2.75+t_p);
  glVertex3f(4.125,0,3);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex3f(4.75,0,4.25);
  glVertex3f(3.5,0,3.75);
  glVertex3f(3.875,0,3);
  glVertex3f(4,0,2.75+t_p);
  glVertex3f(4.125,0,3);
  glEnd();

  //4
  glColor3f(0,0,0);
  printCharacters(-5.5, 0, 0, (unsigned char*)"(4)");
  glColor3f(1,0.5,0.5);
  glColor3f(0.2,1,0.2);
  glBegin(GL_POLYGON);
  glVertex3f(-4.375+t_q,0,0);
  glVertex3f(-4.375+t_q,0,-3);
  glVertex3f(-3.875,0,-3);
  glVertex3f(-3.875,0,0);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex3f(-4.375+t_q,0,0);
  glVertex3f(-4.375+t_q,0,-3);
  glVertex3f(-3.875,0,-3);
  glVertex3f(-3.875,0,0);
  glEnd();
  glColor3f(0,0,0);
  glLineStipple(1,0XAAAA);
  glEnable(GL_LINE_STIPPLE);
  glBegin(GL_LINES);
  glVertex3f(-4.125,0,0);
  glVertex3f(-4.125,0,-3);
  glEnd();


  //5
  glColor3f(0,0,0);
  printCharacters(-0.5, 0, 0, (unsigned char*)"(5)");
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(0.5,0,0.5);
  glVertex3f(1,0,1);
  glVertex3f(1.5,0,0.5);
  glEnd();
  glColor3f(0,0,0);
  glDisable(GL_LINE_STIPPLE);
  glBegin(GL_LINE_LOOP);
  glVertex3f(0.5,0,0.5);
  glVertex3f(1,0,1);
  glVertex3f(1.5,0,0.5);
  glEnd();
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(1.5,0,0.5);
  glVertex3f(0.25,0,1);
  glVertex3f(0.5,0,0.5);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex3f(1.5,0,0.5);
  glVertex3f(0.25,0,1);
  glVertex3f(0.5,0,0.5);
  glEnd();
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex3f(0.5,0,0.5);
  glVertex3f(1.75,0,1);
  glVertex3f(1.125,0,-0.25);
  glVertex3f(0.875,0,-0.25);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex3f(0.5,0,0.5);
  glVertex3f(1.75,0,1);
  glVertex3f(1.125,0,-0.25);
  glVertex3f(0.875,0,-0.25);
  glEnd();
  glColor3f(0.2,1,0.2);
  glBegin(GL_POLYGON);
  glVertex3f(1.125,0,-0.25);
  glVertex3f(0.875,0,-0.25);
  glVertex3f(0.875,0,-3.25);
  glVertex3f(1.125,0,-3.25);
  glEnd();
  glColor3f(0,0,0);
  glBegin(GL_LINE_LOOP);
  glVertex3f(1.125,0,-0.25);
  glVertex3f(0.875,0,-0.25);
  glVertex3f(0.875,0,-3.25);
  glVertex3f(1.125,0,-3.25);
  glEnd();

  glFlush();
}
void stateChange(unsigned char key, int x, int y)
{
 if(key==' ')
 {
   display=1;
 }
 if(key=='a')
 {
  display=2;
 }
 if(key=='b')
 {
  display=3;
 }
 if(key=='c')
 {
  display=4;
 }
  if(key=='1' && display==2)
  {
    h_i=1;
    h_j=0;
  }
  if(key=='1' && display==3)
  {
    d_i=1;
    d_j=0;
    d_k=0;
  }
  if(key=='1' && display==4)
  {
    t_i=1;
    t_j=0;
    t_k=0;
  }
  if(key=='2' && display==2)
  {
    h_i=2;
    h_k=0;
    h_l=0;
  }
  if(key=='2' && display==3)
  {
    d_i=2;
    d_l=0;
  }
  if(key=='2' && display==4)
  {
    t_i=2;
    t_l=0;
    t_m=0;
    t_n=0;
    t_o=0;
  }
  if(key=='3' && display==2)
  {
    h_i=3;
    h_m=0;
    h_n=0;
  }
  if(key=='3' && display==3)
  {
    d_i=3;
    d_m=0;
  }
  if(key=='3' && display==4)
  {
    t_i=3;
    t_p=0;
  }
  if(key=='4' && display==2)
  {
    h_i=4;
    h_o=0;
  }
  if(key=='4' && display==3)
  {
    d_i=4;
    d_n=0;d_o=0;
  }
  if(key=='4' && display==4)
  {
    t_i=4;
    t_q=0;
  }
  if(key=='5' && display==2)
  {
    h_i=5;
    h_p=0;
  }
  if(key=='5' && display==3)
  {
    d_i=5;
    d_p=0;
  }
  if(key=='6' && display==3)
  {
    d_i=6;
    d_q=0;
  }
  glutPostRedisplay();
}
void update(int value)
{
 //-----------------------Heart----------------------//
 if(display==2){
  if(h_i==1){ if(h_j<1) h_j=h_j+0.00001; glutPostRedisplay();                
   glutTimerFunc(1,update,0);
  }
   
  if(h_i==2){ if(h_k<1.25) h_k=h_k+0.00001;
    else if(h_l<1.25)
     h_l=h_l+0.00001;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(h_i==3){
    if(h_m<0.65)
     h_m=h_m+0.00001;
    else if(h_n<0.65)
     h_n=h_n+0.00001;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(h_i==4){
    if(h_o<0.5)
     h_o=h_o+0.00001;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(h_i==5){
    if(h_p<0.25)
     h_p=h_p+0.00001;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }}

  //-----------------------Duck----------------------//
  if(display==3){
  if(d_i==1){ 
    if(d_j<1.25)  
       d_j=d_j+0.00005;
    else if(d_k<1.25)
     d_k=d_k+0.00005;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(d_i==2){ 
    if(d_l<0.75)  
       d_l=d_l+0.00001;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(d_i==3){ 
    if(d_m<0.6)  
       d_m=d_m+0.00001;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(d_i==4){ 
    if(d_n<0.3)  
       d_n=d_n+0.00002;
    else if(d_o<0.3)  
       d_o=d_o+0.00002;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  
  if(d_i==5){ 
    if(d_p<0.5)  
       d_p=d_p+0.00005;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(d_i==6){ 
    if(d_q<0.25)  
       d_q=d_q+0.00003;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
 }
 
  //-----------------------Tulip----------------------//
  if(display==4){
  if(t_i==1){ 
    if(t_j<1.5)  
       t_j=t_j+0.00005;
    else if(t_k<1.5)
     t_k=t_k+0.00005;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(t_i==2){ 
    if(t_l<2.25)  
       t_l=t_l+0.00005;
    else{
       if(t_n<2.25)
         t_n=t_n+0.00005;
       if(t_o<1.5)
       t_o=t_o+0.00005;
    }
    if(t_m<1.5)  
       t_m=t_m+0.00005;
    
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(t_i==3){ 
    if(t_p<0.25)  
       t_p=t_p+0.00002;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }
  if(t_i==4){ 
    if(t_q<0.25)  
       t_q=t_q+0.00001;
    glutPostRedisplay();
    glutTimerFunc(1,update,0);
  }

 }
}
void init() {

  glClearColor(0.74, 0.6, 1, 1);
  glDisable(GL_CULL_FACE);
  glCullFace(GL_BACK);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glFrustum(-2, 2, -1.5, 1.5, 1, 40);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef(0, 0, -3);
  glRotatef(90, 1, 0, 0);
  glRotatef(0, 0, 1, 0);
  glRotatef(180,1,0,0);
}
void sequential()
{
    displayText();
  if(display==1){
    displayList();
  }
  if(display==2){
   display_heart();
   glutTimerFunc(1,update,0);
  }
  if(display==3){
   display_duck();
   glutTimerFunc(1,update,0);
  }
  if(display==4){
   display_tulip();
   glutTimerFunc(1,update,0);
  }
  glFlush();
}

int main(int argc, char** argv) {
   wh.width= 800;
   wh.height= 600;
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(80, 80);
  glutInitWindowSize(800, 600);
  glutCreateWindow("ORIGAMI");
  glutKeyboardFunc(stateChange);
  glutDisplayFunc(sequential);
  init();
  glutMainLoop();
}
