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
	y1 = 0; y2 = 0;  

	int x3 = 0;
	int x4 = 100;
	int y3 = 100;
	int y4 = 100;


 	 	/* initialize graphic mode */
	 initgraph(&graphdriver, &graphmode, "C:\\TC\\BGI");


 	    int x_center = getmaxx() / 2;
        int y_center = getmaxy() / 2;
        
	printf("Line before scaling");
	line(x_center +  x1, y_center + y1, x_center + x2, y_center + y2);
	line(x_center +  x1, y_center + y1, x_center + x3, y_center + y3);
	line(x_center +  x2, y_center + y2, x_center + x4, y_center + y4);
	line(x_center +  x3, y_center + y3, x_center + x4, y_center + y4);
	

	

	// delay(1000);
	// cleardevice();
	int Sx, Sy;
	Sx= 2; Sy = 2;
	x1=(x1*Sx);
	y1=(y1*Sy);
	x2=(x2*Sx);
	y2=(y2*Sy);


	x3=(x3*Sx);
	y3=(y3*Sy);
	x4=(x4*Sx);
	y4=(y4*Sy);

	printf("Line after scaling");
	line(x_center +  x1, y_center + y1, x_center + x2, y_center + y2);
	line(x_center +  x1, y_center + y1, x_center + x3, y_center + y3);
	line(x_center +  x2, y_center + y2, x_center + x4, y_center + y4);
	line(x_center +  x3, y_center + y3, x_center + x4, y_center + y4);
	
	//getch();
	delay(10000);
	closegraph();
	return 0;
}