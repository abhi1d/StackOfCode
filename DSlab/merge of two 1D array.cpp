#include<stdio.h>
int main()
{ int n,m;
  printf("enter the size of array 1:");
  scanf("%d",&m);
  printf("enter the size of array 2:");
  scanf("%d",&n);
  printf("enter the elements for Array 1:");
  int a[m],b[n],c[m+n];
  for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("enter the elements for Array 1:");
   for(int i=0;i<n;i++)
   scanf("%d",&b[i]);
   int i=0,k=0;
   for(i=0;i<m;i++)
   {
   	c[k]=a[i];
   	k++;
   } 
   int j=0;
   for(j=i;j<m+n;j++)
   {
   	c[k]=b[j];
   	k++;
   }
   for(int l=0;l<m+n;l++)
     printf("%d \t",c[l]);
}

