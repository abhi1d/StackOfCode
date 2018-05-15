#include<stdio.h>
#include<graphics.h>

 
int main()
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
 // Two points

   // initial point
  int x0 = 2,y0 = 2;
  putpixel(x0,y0,RED);

  // final point
  int x1= 100, y1= 55;
  putpixel(x1,y1,RED);

  int dx = (x1 - x0);
  int dy = (y1 - y0);

  int p_temp = 2 * dy;

 // According to Bresenham's Algo
 // P0 = 2 * dy - dx 
  int pk = p_temp - dx; 

  // because x1 is max
  for(int x = x0, y = y0; x <= x1; x++)
  {
  	putpixel(x,y,GREEN);

  	// Pk = P0 + 2 * dy;
    pk = pk + p_temp;

    // if pk > 0
  	// then pk+1 = pk +  2dy - 2dx
    // otw pk+1 = pk + 2dy
  	if(pk >= 0)
  	{
  		y++;
  		

  		pk = pk - 2 * (dx);
  	} 



  }


 
   getch();
   closegraph();
   return 0;
}