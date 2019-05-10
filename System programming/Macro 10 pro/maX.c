#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max(num1,num2)(num1>num2?num1:num2)

int main()
{
 int num1,num2;
 scanf("%d%d",&num1,&num2);
 int MAX=max(num1,num2);
 printf("maximum value is : \t%d\t",MAX);
}

 
 
