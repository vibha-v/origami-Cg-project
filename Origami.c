#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
int i=-1;
float j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0;
typedef struct
{
  int width, height;
} window;window wh;
void display_cube() 
{
  glClear(GL_COLOR_BUFFER_BIT);
  
  //red
  glColor3f(1, 0, 0);
  glBegin(GL_POLYGON);
  glVertex3f(-1, 0, 1);
  glVertex3f(-1, 0+l, 2-l);
  glVertex3f(0, 0+l, 2-l);
  glVertex3f(0, 0, 1);
  glEnd();
  //yellow
  glColor3f(1, 1, 0);
  glBegin(GL_POLYGON);
  glVertex3f(-1, 0, 0);
  glVertex3f(-1, 0, 1);
  glVertex3f(0, 0, 1);
  glVertex3f(0, 0, 0);
  glEnd();
  //pink
  glColor3f(1, 0, 1);
  glBegin(GL_POLYGON);
  glVertex3f(-1, 0, 0);
  glVertex3f(0, 0, 0);
  glVertex3f(0, 0+j, -1+j);
  glVertex3f(-1,0+j, -1+j);
  glEnd();
  //blue
  glColor3f(0, 1, 1);
  glBegin(GL_POLYGON);
  glVertex3f(0, 0, 0);
  glVertex3f(0, 0, 1);
  glVertex3f(1-k, 0+k, 1);
  glVertex3f(1-k, 0+k, 0);
  glEnd();
  //black
  glColor3f(0, 0, 0);
  glBegin(GL_POLYGON);
  glVertex3f(1-k,0+k,0);
  glVertex3f(1-k,0+k,1);
  glVertex3f(2-(2*k)-n,0+(2*k)-n,1);
  glVertex3f(2-(2*k)-n,0+(2*k)-n,0);
  glEnd();
  //green  
  glBegin(GL_POLYGON);
  glColor3f(0, 1, 0);
  glVertex3f(-1, 0, 1);
  glVertex3f(-1, 0, 0);
  glVertex3f(-2+m, 0+m, 0);
  glVertex3f(-2+m, 0+m, 1);
  glEnd();
  glFlush();
}
void display_elephant() 
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.2627, 0.3882, 0.8471);
  glBegin(GL_POLYGON);
  glVertex3f(-2.5, 0, 1.5);
  glVertex3f(-2.5, 0, 1);
  glVertex3f(-2.1, 0, 0.5);
  glVertex3f(2.1, 0, 0.5);
  glVertex3f(2.5, 0, 1);
  glVertex3f(2.5, 0, 1.5);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(0, 0, -2+q);
  glVertex3f(-2.1, 0, 0.5);
  glVertex3f(2.1, 0, 0.5);
  glEnd();
  if(p>=3)
  {
  glColor3f(1,1,1);
    glBegin(GL_LINE_LOOP);
    glVertex3f(0, 0, -2+q);
    glVertex3f(-2.1, 0, 0.5);
    glVertex3f(2.1, 0, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(0, 0, -2+q);
    glVertex3f(0, 0, 0.5);
    glEnd();
  }

  if(p<3||s<1)
  {
  glColor3f(0.2627, 0.3882, 0.8471);
  glBegin(GL_POLYGON);
  glVertex3f(2.5, 0, 1);
  glVertex3f(2.5-o, 0, -2+p);
  glVertex3f(0, 0, -2+q);
  glEnd();
  glBegin(GL_POLYGON);
  glVertex3f(-2.5, 0, 1);
  glVertex3f(-2.5+o, 0, -2+p);
  glVertex3f(0, 0, -2+q);
  glEnd();
  glColor3f(1, 1, 1);
  glBegin(GL_LINE_LOOP);
  glVertex3f(2.5, 0, 1);
  glVertex3f(2.5-o, 0, -2+p);
  glVertex3f(0, 0, -2+q);
  glEnd();
  glBegin(GL_LINE_LOOP);
  glVertex3f(-2.5, 0, 1);
  glVertex3f(-2.5+o, 0, -2+p);
  glVertex3f(0, 0, -2+q);
  glEnd();
  }
  if(r==1)
  {
    glBegin(GL_POINTS);
    glColor3f(1,1,1);
    glVertex3f(-2.5,0,-1);
  }
  glFlush();
}
void display_pyramid() 
{
  glClear(GL_COLOR_BUFFER_BIT);
  //yellow base
  glColor3f(1,1,0);
  glBegin(GL_POLYGON);
  glVertex3f(-1.5,0,-0.5);
  glVertex3f(-0.5,0,-0.5);
  glVertex3f(-0.5,0,0.5);
  glVertex3f(-1.5,0,0.5);
  glEnd();

  //red left
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(-1.0,0+(t/3),-1.5+(t/2));
  glVertex3f(-0.5,0,-0.5);
  glVertex3f(-1.5,0,-0.5);
  glEnd();

  //blue back
  glColor3f(0,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(0.5-(u/2),0+(u/3),0);
  glVertex3f(-0.5,0,-0.5);
  glVertex3f(-0.5,0,0.5);
  glEnd();

  //red right
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  glVertex3f(-1.0,0+(v/3),1.5-(v/2));
  glVertex3f(-0.5,0,0.5);
  glVertex3f(-1.5,0,0.5);
  glEnd();

  //blue front
  glColor3f(0,1,1);
  glBegin(GL_POLYGON);
  glVertex3f(-2.5+(w/2),0+(w/3),0);
  glVertex3f(-1.5,0,-0.5);
  glVertex3f(-1.5,0,0.5);
  glEnd();

  glFlush();
}
void stateChange(unsigned char key, int x, int y)
{
  if(key==' ')
     i=0;
  if(key=='1')
  {
     i=1;j=0;k=0;l=0;m=0;n=0;
  }
  if(key=='2')
  {
     i=2;o=0;p=0;q=0;r=0;s=0;
  }
  if(key=='3')
  {
     i=3;t=0;u=0;v=0;w=0;
  }
  glutPostRedisplay();
}
void printCharacters(float x, float y, const unsigned char* str)
{  
  int characters_width = glutBitmapLength(GLUT_BITMAP_TIMES_ROMAN_24,str);
  glRasterPos2f(x - characters_width / 2, y);
  for(int i = 0;str[i];++i)
      glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
}
void displayList()
{
	
  int header_y = wh.height * 3 / 4;
  int offset = 20, line_height = 30;
  glColor3f(1, 0, 0);
  printCharacters(wh.width / 2, header_y-line_height-offset, (unsigned char*)"PRESS:");
  glColor3f(0, 0, 1);
  printCharacters(wh.width / 2, header_y-line_height*2-offset, (unsigned char*)"1. Cube");
  printCharacters(wh.width / 2, header_y-line_height*3-offset, (unsigned char*)"2. Elephant");
  printCharacters(wh.width / 2, header_y-line_height*4-offset, (unsigned char*)"3. Pyramid");
}
void displayText()
{
  int left_half= wh.width / 4,right_half = wh.width * 3 / 4;
  int header_y = wh.height * 3 / 4;
  int offset = 20, line_height = 30;
  glColor3f(1, 0, 0);
  
  printCharacters(left_half, header_y, (unsigned char*)"Name");
  printCharacters(right_half, header_y, (unsigned char*)"USN");
  
  glColor3f(0.2,0.1,0.2);
  printCharacters(left_half, header_y-line_height-offset, (unsigned char*)"Shreya Shirva");
  printCharacters(right_half, header_y-line_height-offset, (unsigned char*)"4nm16cs142");
  printCharacters(left_half, header_y-line_height*2-offset, (unsigned char*)"Shrikantha budya");
  printCharacters(right_half, header_y-line_height*2-offset, (unsigned char*)"4nm16cs143");
  printCharacters(left_half, header_y-line_height*3-offset, (unsigned char*)"Shrilatha");
  printCharacters(right_half, header_y-line_height*3-offset, (unsigned char*)"4nm16cs144");
  glColor3f(0, 0, 1);
  printCharacters(wh.width / 2, header_y-line_height*6-offset, (unsigned char*)"ORIGAMI");
}

void init1() 
{
  glFrustum(-2, 2, -1.5, 1.5, 1, 20);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef(0, 0, -3);
  glRotatef(30, 1, 0, 0);
  glRotatef(70, 0, 1, 0);
}
void update1(int value)
{
 if(j<1)
   j=j+0.00001;
 else if(k<1)
   k=k+0.00001;
 else if(l<1)
   l=l+0.00001;
 else if(m<1)
   m=m+0.00001;
 else if(n<1)
   n=n+0.00001;
 if(i==1){
 glutPostRedisplay();
 glutTimerFunc(1,update1,0);
}
}
void init2()
{
  glFrustum(-2, 2, -1.5, 1.5, 1, 40);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef(0, 0, -3);
  glRotatef(70, 1, 0, 0);
  glRotatef(0, 0, 1, 0);
  glLineWidth(2);
  glPointSize(3);
}
void update2(int value)
{
 if(p<3)
 { 
   if(o<2.5)
     o=o+0.00005;
   p=p+0.00005;
 }
 else if(s<1)
   s=s+0.00005;
 else if(q<4.5)
   q=q+0.00005;
 else
   r=1;
 if(i== 2){glutPostRedisplay();
 glutTimerFunc(1,update2,0);}
}

void init3() 
{
  glFrustum(-2, 2, -1.5, 1.5, 1, 20);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef(0, 0, -3);
  glRotatef(30, 1, 0, 0);
  glRotatef(60, 0, 1, 0);
}
void update3(int value)
{
 if(t<3)
   t=t+0.00005;
 else if(u<3)
   u=u+0.00005;
 else if(v<3)
   v=v+0.00005;
 else if(w<3)
   w=w+0.00005;
 if(i ==3) {glutPostRedisplay();
 glutTimerFunc(1,update3,0);}
}
void sequential()
{
  glClearColor(1, 1, 1, 1);
  glClear(GL_COLOR_BUFFER_BIT);
  gluOrtho2D(0,wh.width,0,wh.height);
  glDisable(GL_CULL_FACE);
  glCullFace(GL_BACK);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  if(i==-1)
    displayText();
  if(i==0)
  {
    displayList();
  }
  else if(i==1)
  {
    init1();
    display_cube();
    glutTimerFunc(1,update1,0);
  }
  else if(i==2)
  {
    init2();
    display_elephant();
    glutTimerFunc(1,update2,0);
  }
  else if(i==3)
  {
    init3();
    display_pyramid();
    glutTimerFunc(1,update3,0);
  }
  glFlush();
}

int main(int argc, char** argv)
{
   wh.width= 800;
   wh.height= 600;
    glutInit(&argc, argv);
    glutInitWindowPosition(80, 80);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Origami");
    glutKeyboardFunc(stateChange);
    glutDisplayFunc(sequential);
    glutMainLoop();
    return 0;
}
