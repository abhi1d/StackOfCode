%{
#include<stdio.h>
%}
%token A B
%%
stmt: S
    ;
S: A S B
  |
 ;
%%
void main()
{
printf("enter \n");
yyparse();
printf("valid");
exit(0);
}
void yyerror()
{
printf("invalid ");
exit(0);
}