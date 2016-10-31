#include<stdio.h>
int main()
{
	int m,n,x,y;
	printf("enter the dimensions for array-1: \n");
	scanf("%d%d",&m,&n);
	
	printf("enter the dimensions for the array 2 : \n");
		scanf("%d%d",&x,&y);
	printf("the Multiplication of a[m][n] & b[x][y] : \n");	
	 int a[m][n],b[x][y],i,j,k;
	if(n!=x)
	  printf("Multiplication not possible");
	else
	{	
	 printf("Enter the elements in array 1: \n");
		for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
		 			scanf("%d",&a[i][j]);
		 
			}
		printf("enter the elements in the array 2 :\n");
  
			for(i=0;i<x;i++)
			{
				for(j=0;j<y;j++)
		 			scanf("%d",&b[i][j]);
		   
	    	}

		  for(i=0;i<m;i++)
			{	
				for(j=0;j<y;j++)
		   			{
		   			     int c[i][j]=0;
		   				for(k=0;k<n;k++) //n and x is equal we can write either n or x 
		   	  				c[i][j]+=a[i][k]*b[k][j];
		   			}
    		}
    	printf("the multiplication of two array \n");
	  	for(i=0;i<m;i++)
			{
				for(j=0;j<y;j++)
		   			printf("%d \t",c[i][j]);
         		printf("\n");
    		}
	
   }
}
