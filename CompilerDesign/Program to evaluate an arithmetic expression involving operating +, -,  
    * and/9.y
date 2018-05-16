%{
#include<stdio.h>
int res=0;
%}
%token number
%left '+' '-'
%left '*' '/'
%%
stmt:expr {res=$$;}
;
expr:expr '+' expr {$$=$1+$3;}
    |expr '-' expr {$$=$1-$3;}
    |expr '*' expr {$$=$1*$3;}
    |expr '/' expr {if($3==0)
             exit(0);
             else $$=$1/$3;}
    |number
    ;
%%
void main()
{
printf(" enter expr\n");
yyparse();
printf("valid=%d",res);
exit(0);
}

void yyerror()
{
printf("invalid\n");
exit(0);
}