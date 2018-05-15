#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	int graphdriver=DETECT,graphmode,errorcode;
	int i;
	int x2,y2,x1,y1,x,y;
	// printf("Enter the 2 line end points:");
	// printf("x1,y1,x2,y2");
	x1 = 0;
	x2 = 100;
	y1 = 0; y2 = 100;  
 	
 	/* initialize graphic mode */
	 initgraph(&graphdriver, &graphmode, "C:\\TC\\BGI");
        
	printf("Line before scaling");
	line(x1,y1,x2,y2);
	// delay(1000);
	// cleardevice();
	int Sx, Sy;
	Sx= 1; Sy = 2;
	x1=(x1*Sx);
	y1=(y1*Sy);
	x2=(x2*Sx);
	y2=(y2*Sy);
	printf("Line after scaling");
	line(x1,y1,x2,y2);
	//getch();
	delay(10000);
	closegraph();
	return 0;
}