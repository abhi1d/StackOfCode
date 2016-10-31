
#include<stdio.h>
int main()
{
	int m,n;
	printf("enter the dimensions :");
	scanf("%d%d",&m,&n);
	 int a[m][n],b[m][n],c[m][n],i,j;
	printf("enter the elements in the array 1 :");
  
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		 scanf("%d",&a[i][j]);
		 
	}
		printf("enter the elements in the array 2 :");
  
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		 {
		 scanf("%d",&b[i][j]);
		   c[i][j]=a[i][j]+b[i][j];
	    }

    }
	printf("the add of two array \n");
	  for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		   printf("%d \t",c[i][j]);
         printf("\n");
    }
	
}
