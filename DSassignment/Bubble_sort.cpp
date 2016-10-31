/**
*buble sort in c-programming
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
  for( i=0;i<n;i++)
  {
  	for(j=0;j<n-1;j++)
  	{
  		if(arr[j]>arr[j+1])
  		{
  			int temp;
  			temp=arr[j+1];
  			arr[j+1]=arr[j];
  			arr[j]=temp;
  		}
  	}
  }
  printf("Now the Sorted array : \n");
  for(k=0;k<n;k++)
   {
   	printf("%d\t",arr[k]);
   }	
}
