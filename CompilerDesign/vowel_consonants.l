%{
#include<stdio.h>
int vcount=0,ccount=0;
%}
%%
[a|i|e|o|u|E|A|I|O|U] {vcount++;}
[a-z A-Z (^a|i|e|o|u|E|A|I|O|U) ] {ccount++;}
%%
int main()
{
yylex();
printf("No. of Vowels :%d\n",vcount);
printf("No. of Consonants :%d\n",ccount);
return 0;
}
