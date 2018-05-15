

#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main(){
  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);

  int r;
  int x, y;
  // for moving the centre from (0,0) to some arbitrary point
  // or if we want to make the circle in the center then 
  // use getmaxx() function and getmaxy()
     int xc = 250, yc = 250;



  r = 50;
  int p; // decision parameter
  // Starting value at (0,r)
  p = 5/4 - r;
  x = 0;
  y = 50;

  while(x<=y){
    if(p < 0){
      p += 2*x + 3;
      x = x + 1;
      y = y;
    }
    else{
      p += 2*(x-y) + 5;
      x += 1;
      y -= 1;
    }
    // Since circle has 8 axes of symmetry we can use reflection
    // rather than sampling over and over again.
    // Reflection about y axis and x axis
        putpixel(xc+x,yc+y, WHITE);
        putpixel(xc+x,yc-y, WHITE);
        putpixel(xc-x,yc+y, WHITE);
        putpixel(xc-x,yc-y, WHITE);
        // Reflection about line y=x
        putpixel(xc+y,yc+x, WHITE);
        putpixel(xc-y,yc+x, WHITE);
        putpixel(xc+y,yc-x, WHITE);
        putpixel(xc-y,yc-x, WHITE);
    delay(100);
  }
  delay(5000);
  return 0;
}