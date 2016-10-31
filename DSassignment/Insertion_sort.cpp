/**
*insertion sort in c-programming
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
  for( i=1;i<n;i++)
  {
  	int temp=arr[i];
  	j=i-1;
  	while(temp<arr[j] && j>=0)
  	{
  		arr[j+1]=arr[j];
  		j=j-1;
  	}
  	arr[j+1]=temp;
  }
  printf("Now the Sorted array : \n");
  for(k=0;k<n;k++)
   {
   	printf("%d\t",arr[k]);
   }	
}
