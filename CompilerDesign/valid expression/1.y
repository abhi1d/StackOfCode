%{
#include<stdio.h>
%}
%token ID NUMBER
%left '+' '-'
%left '*' '/'
%%
stmt:expr
    ;
expr: expr '+' expr
    | expr '-' expr
    | expr '*' expr
    | expr '/' expr
    | '(' expr ')'
    | NUMBER
    | ID
    ;
%%
void main()
{
printf("enter expr : \n");
yyparse();
printf("valid exp");
exit(0);
}
void yyerror()
{
  printf("invalid exp");
exit(0);
}