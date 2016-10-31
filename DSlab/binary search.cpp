#include<stdio.h>
int main()
{
	 int n;
	printf("enter the size of array : \n");
	scanf("%d",&n);
	int a[n],i,item;
	printf("enter the sorted array : \n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);

	printf("enter the number to be searched :  ");
	scanf("%d",&item);
 int LB=0,UB=n,mid;
 while(LB<UB)
 {
 	mid=(LB+UB)/2;
 	if(a[mid]<=item)
 	 LB=mid;
 	else
	 UB=mid-1; 
 }
 if(LB==UB)
 printf("item is found and index value is : %d",LB);
 else
  printf("item not found ");
}
