/*
Compile  : gcc filename.c -o filename -lgraph -lm 
here we write lm for math library
Run : ./filename

*/


#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
int graphdriver=DETECT,graphmode,errorcode;
int i;
int x2,y2,x1,y1,x,y,xn,yn;
double r11,r12,r21,r22,th;

// reference Point
int ref = 300;
x1 = 0,y1 = 0,x2=100,y2=0;
initgraph(&graphdriver,&graphmode,"c:\\tc\\bgi");
setcolor(GREEN);
line(ref + x1,ref + y1, ref + x2, ref + y2);

// angle in degree
th = 45;
r11=cos((th*3.1428)/180);
r12=sin((th*3.1428)/180);
r21=(-sin((th*3.1428)/180));
r22=cos((th*3.1428)/180);
//printf("%lf  %lf  %lf  %lf",r11,r12,r21,r22);
xn=((x2*r11)-(y2*r12));
yn=((x2*r12)+(y2*r11));
setcolor(RED);
line(ref + x1, ref + y1,ref + xn, ref + yn);

delay(15000);
closegraph();
}

