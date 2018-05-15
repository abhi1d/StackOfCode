#include<stdio.h>
int main()
{
	 int n;
	printf("enter the size of array : \n");
	scanf("%d",&n);
	int a[n],i,x,flag=0;
	printf("enter the elements in the array : \n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);

	printf("enter the number to be searched :  ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		 {
		 	flag=1;
		 	break;
		 }
	}  
   if(flag)
   printf("the number is searched and index value is  :  %d ",i);	
   else 
    printf("the number is not available in the array  ");
}
