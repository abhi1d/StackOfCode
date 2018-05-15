

#include <stdio.h>
#include <graphics.h>
#include <math.h>

int main(){
  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);
 
  int point_array[2][2] = {0,0,100,0}; //{x1,y1,x2,y2}
  int translation[] ={0,100}; //traslation factor

  // drawing original line
  // With respect to x = 300, y=300 
  int ref =  300;
 
  setcolor(RED);
  line(ref + point_array[0][0],ref + point_array[0][1],ref+ point_array[1][0],ref+ point_array[1][1]);

 
    // calculating translated coordinates
    point_array[0][0] = point_array[0][0] + translation[0];
    point_array[0][1] = point_array[0][1] + translation[1];
    point_array[1][0] = point_array[1][0] + translation[0];
    point_array[1][1] = point_array[1][1] + translation[1];
 
    // drawing translated line using graphics functions
    setcolor(GREEN);
    line(ref+point_array[0][0],ref+ point_array[0][1],ref+ point_array[1][0],ref+ point_array[1][1]);
    
    delay(5000);
    closegraph();
  return 0;
}