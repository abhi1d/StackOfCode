#include<stdio.h>
int main()
{	
	char a[50],b[50],c[100],i,j;

	printf("enter the first string "); 
	 scanf("%s",a);
	 	printf("enter the second string "); 
	 scanf("%s",b);
   for(i=0;a[i]!='\0';i++)
   {
   	 c[i]=a[i];
   	 
   }
    for(j=0;b[j]!='\0';j++,i++)
   {
   	 c[i]=b[j];
   	
   }
   c[i]='\0';
   printf("the final string is : \n");
   puts(c);
   	 
}
