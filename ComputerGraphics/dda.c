#include<stdio.h>
#include<graphics.h>

 int abs(int n)
 {
 	return ( (n>0) ? n : (n*(-1)));
 }

int main()
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   putpixel(25, 25, RED);
 
 // Two points

   // initial point
  int x0 = 2,y0 = 2;
  putpixel(x0,y0,GREEN);

  // final point
  int x1= 100, y1= 116;
  putpixel(x1,y1,GREEN);

 int dx = (x1 - x0);
 int dy = (y1 - y0);


// Taking the Greater Diff 
 int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

 float x_inc = dx / (float) steps; 
 float y_inc = dy / (float) steps; 
 

 float X = x0;
 float Y = y0;

 for(int i = 0 ; i <= steps ; i++)
 {
 	putpixel(X,Y,RED);
 	X += x_inc;
 	Y += y_inc;
 	delay(100);
 }


   getch();
   closegraph();
   return 0;
}