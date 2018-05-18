
/*

 Not done 
 some errors
*/

#include <stdio.h>

#include <graphics.h>

void main()
{

int n,i,j,k,gd,gm,dy,dx;
int x,y,temp;
int a[20][2],xi[20];
float slope[20];

// printf("\n\n\tEnter the no. of edges of polygon : ");
// scanf("%d",&n);
// 4 edges
// printf("\n\n\tEnter the cordinates of polygon :\n\n\n ");

for(i=0;i<n;i++)
{
printf("\tX%d Y%d : ",i,i);
scanf("%d %d",&a[i][0],&a[i][1]);
}
a[0][0] = 0,a[0][1] = 0;
a[1][0] = 200,a[1][1] = 0;
a[2][0] = 200,a[2][1] = 200;
a[3][0] = 0,a[3][1] = 200;

// adding again intital point
a[4][0]=a[0][0];
a[4][1]=a[0][1];


detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi");


/*- draw polygon -*/

// for(i=0;i<4;i++) 
// {
// line(200+a[i][0],200+a[i][1],200+a[i+1][0],200+a[i+1][1]);
// }
// delay(5000);

for(i=0;i<4;i++)
{
	dy=a[i+1][1]-a[i][1];
	dx=a[i+1][0]-a[i][0];

	if(dy==0) slope[i]=1.0;
	
	if(dx==0) slope[i]=0.0;

	if((dy!=0)&&(dx!=0)) /*- calculate inverse slope -*/ 
	{
		slope[i]=(float) dx/dy;
	}
}

for(y=0;y< 480;y++)
{
	k=0;
	for(i=0;i<n;i++)
	{

		if( ((a[i][1]<=y)&&(a[i+1][1]>y))||((a[i][1]>y)&&(a[i+1][1]<=y)))
		{
			xi[k]=(int)(a[i][0]+slope[i]*(y-a[i][1]));
			k++;
		}
	}

	for(j=0;j<k-1;j++) /*- Arrange x-intersections in order -*/
	{
		for(i=0;i<k-1;i++)
		{
			if(xi[i]>xi[i+1])
			{
				temp=xi[i];
				xi[i]=xi[i+1];
				xi[i+1]=temp;
			}
		}
	}
	

	setcolor(35);
	for(i=0;i<k;i+=2)
	{
	line(xi[i],y,xi[i+1]+1,y);
	   
	}


}

}
