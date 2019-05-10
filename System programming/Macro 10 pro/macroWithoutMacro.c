#include<stdio.h>
#define macro1 4
#define macro2 6
int main(void)
{
 #ifdef macro1
  printf("\nMacro 1 value is : %d\n",macro1);
 #endif
#ifdef macro2
 printf("\nMacro 2 value is : %d\n",macro2);
 #endif
 #ifdef macro3
  printf("\n not defined Macro 3\n");
  #endif
}

 
