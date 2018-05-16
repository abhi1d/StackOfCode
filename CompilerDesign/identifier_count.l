%{
#include<stdio.h>
int count=0,flag=0;
%}
%%
"int "|"float"|"char"|"long" {flag=1;}
","|";" {if(flag) count++;}
%%
int main(int arg,char*argv[])
{
printf("Declare your variable\n");
yyin=fopen(argv[1],"r");
yylex();
printf("No of identifiers=%d\n",count);
}
