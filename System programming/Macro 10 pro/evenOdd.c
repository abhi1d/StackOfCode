#include <stdio.h>
 
#define MACRO(num, str) do {\
            printf("%d is %s ",num,str);\
           } while(0)
 
int main(void)
{
    int num;
 
    printf("Enter a number: ");
    scanf("%d", &num);
 
    if (num & 1)
        MACRO(num, "Odd");
    else
        MACRO(num, "Even");
 
    return 0;
}
