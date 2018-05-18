#include<stdio.h>
#include<graphics.h>

void main()
{
int gd=DETECT, gm;
float xmax,ymax,xmin,ymin,x1,y1,x2,y2,m;
float start[4],end[4],code[4];

initgraph(&gd,&gm,"");
// bottom left co-ordinate of viewport
xmin = 100.00, ymin = 100.00;
//top right co-ordinate of viewport
xmax = 400.00, ymax = 400.00;

//the co-ordinates for starting point of line: ");
x1=120.0, y1 = 60.0;

//the co-ordinates for ending point of line
x2 = 350.0, y2 = 450.0;


// If you want to show the intital line and window then 
// remove the comments below 


 // //Code Snippet : 
 // rectangle(xmin,ymin,xmax,ymax);
 // line(x1,y1,x2,y2);
 // delay(5000);

int i;

for(i=0;i < 4;i++)
{
    start[i]=0;
    end[i]=0;
}

// slope
m=(y2-y1)/(x2-x1);

// starting point of line 
// deciding the region codes
// if condition fails then default value set to zero.
if(x1 < xmin) start[0]=1;
if(x1 > xmax) start[1]=1;
if(y1 > ymax) start[2]=1;
if(y1 < ymin) start[3]=1;

// end point of line 
// deciding the region codes
// if condition fails then default value set to zero.
if(x2 < xmin) end[0]=1;
if(x2 > xmax) end[1]=1;
if(y2 > ymax) end[2]=1;
if(y2 < ymin) end[3]=1;


// Logical And Operation.
for(i=0;i <4;i++)
 {
   code[i]=start[i]&&end[i];
 }

if((code[0]==0)&&(code[1]==0)&&(code[2]==0)&&(code[3]==0))
{
    if((start[0]==0)&&(start[1]==0)&&(start[2]==0)&&(start[3]==0)&&(end[0]==0)&&(end[1]==0)&&(end[2]==0)&&(end[3]==0))
    {
        
        //The line is totally visible and not a clipping candidate
        rectangle(xmin,ymin,xmax,ymax);
        line(x1,y1,x2,y2);
        delay(5000);
        
    }
    else
    {
        
        //Line is partially visible
        // see the link for how did i derive the formula
        // https://lecturenotes.in/materials/68-computer-graphics?utm_source=subjectpage&utm_medium=web&utm_campaign=materialpage

        // bottom edge intersection point
        if((start[2]==0)&&(start[3]==1))
        {
            x1=x1+(ymin-y1)/m;
            y1=ymin;
        }
        if((end[2]==0)&&(end[3]==1))
        {
            x2=x2+(ymin-y2)/m;
            y2=ymin;
        }

         // top edge intersection point
        if((start[2]==1)&&(start[3]==0))
        {
            x1=x1+(ymax-y1)/m;
            y1=ymax;
        }
        if((end[2]==1)&&(end[3]==0))
        {
            x2=x2+(ymax-y2)/m;
            y2=ymax;
        }

        // left edge intersection point
        if((start[1]==0)&&(start[0]==1))
        {
            y1=y1+m*(xmin-x1);
            x1=xmin;    
        }
        if((end[1]==0)&&(end[0]==1))
        {
            y2=y2+m*(xmin-x2);
            x2=xmin;
        }

        // right edge intersection point
        if((start[1]==1)&&(start[0]==0))
        {
            y1=y1+m*(xmax-x1);
            x1=xmax;
        }
        if((end[1]==1)&&(end[0]==0))
        {
            y2=y2+m*(xmax-x2);
            x2=xmax;
        }


        
        //After clippling
        rectangle(xmin,ymin,xmax,ymax);
        line(x1,y1,x2,y2);
        delay(5000);
    }
}
else
{
   
    
   //Line is invisible
    rectangle(xmin,ymin,xmax,ymax);
    delay(5000);
}


closegraph();
}