#include<stdio.h>
#include<graphics.h>

 
int main()
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   putpixel(525, 525, RED);
 
   getch();
   closegraph();
   return 0;
}