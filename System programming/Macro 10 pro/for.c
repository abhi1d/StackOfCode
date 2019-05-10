#include <stdio.h>

#define repeat( c ) int c1 ; for(c1=0;c1<c;c1++)

int main()
{
    repeat(10)
    {
        puts("Hello!");
    }

    return(0);
}
