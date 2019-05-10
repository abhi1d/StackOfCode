#include<stdio.h>
int temp;
#define swap(x,y) {temp=x;x=y;y=temp;}



int main()
{
int num1,num2;
printf("Enter the two number for swapping\t");
scanf("%d%d",&num1,&num2);
swap(num1,num2);
printf("num1 = %d \t num2 = %d\t",num1,num2);

return 0;
}

