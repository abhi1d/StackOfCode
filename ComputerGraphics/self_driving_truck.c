#include <stdio.h>
#include <graphics.h>

// Function to find the absolute value

int abs(int n){
	return ((n>0)?n:(n*(-1)));
}

// DDA Function for line generation

void DDA(int X0, int Y0, int X1, int Y1){
	// calculate dx and dy
	int dx = X1 - X0;
	int dy = Y1 - Y0;

	// Calculate steps required for generating pixels 
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// calculate increment in x and y for each step
	float x_inc = dx /(float)steps;
	float y_inc = dy /(float)steps;
	int i;
	int X = X0, Y = Y0;
	for(i = 0; i <= steps; i++){
		putpixel(X,Y,WHITE); // Put pixel at (X,Y)
		X += x_inc; // increment in x at each step
		Y += y_inc; // increment in y at each step
	}
}
void drawshape(int x1, int x2, int x3, int x4, int y1, int y2, int y3){
	// This is for drawing the body of the truck
	DDA(x1,y1,x2,y1); // Base Horizontal Line
	DDA(x1,y1,x1,y2); // Leftmost Vertical Line
	DDA(x2,y1,x2,y2); // Rightmost Vertical Line
	DDA(x1,y2,x2,y2); // Completing the body of the Truck
	DDA(x3,y2,x3,y3); // The Left Side of the Engine Part of the Truck
	DDA(x4,y2,x4,y3); // The Right Side of the Engine Part of the Truck
	DDA(x3,y3,x4,y3); // The Topmost Covering of the Enginer of the Truck
}

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	int x1, x2, x3, x4, y1, y2, y3;
	x1 = 100, x2 = 400, x3 = 250, x4 = 350, y1 = 100, y2 = 200, y3 = 50;
	int dx = 2;
	int radius = 20;
	int centre_x1 = 150, centre_x2 = 360;
	int centre_y1 = 220, centre_y2 = 220;
	for(int i = 0; i < 50; i++){
		drawshape(x1,x2,x3,x4,y1,y2,y3); // The is for the body of the truck
		circle(centre_x1,centre_y1,radius); // For wheel1 of the truck
		circle(centre_x2,centre_y2,radius); // For wheel2 of the truck
		delay(100);
		cleardevice(); // For deleting this truck
		centre_x1 += dx;
		centre_x2 += dx;
		x1 += dx;
		x2 += dx;
		x3 += dx;
		x4 += dx;
	}
	delay(2000);
	return 0;
}