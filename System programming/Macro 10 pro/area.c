#include<stdio.h>
#define pi 3.14
#define area(r) (pi*r*r)
int main()
{
int r;
scanf("%d",&r);
float ar=area(r);
printf("area of circle  %f\n",ar);
return 0;
}
