/**
*Selection sort in c-programming
*/
#include<stdio.h>
int main()
{
  int n,i,j,k,x;
  printf("Enter the size of the array  : \n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements in the array  : \n");
  for(x=0;x<n;x++)
  {
  	scanf("%d",&arr[x]);
  }
  int min;
  for( i=0;i<n-1;i++)
  {
  	min=i;
  	for(j=i+1;j<n;j++)
  	{
  		if(arr[min]>arr[j])
  		{
  		 min=j;
  		}
  	}
  	int temp=arr[i];
  	arr[i]=arr[min];
  	arr[min]=temp;
  }
  printf("Now the Sorted array : \n");
  for(k=0;k<n;k++)
   {
   	printf("%d\t",arr[k]);
   }	
}
