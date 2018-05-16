/*
 yacc -d filename.y
 lex filename.l
 gcc lex.yy.c y.tab.c -o filename -ll
 ./filename

 eg:5+10
 sum : 15
*/


%{
#include<stdio.h>
%}
%token NUMBER
%left '+' '-'
%left '*' '/'
%%
st: exp {printf("sum::%d",$$);}
    ;
exp: exp '+' exp {$$ = $1 + $3;}
    |exp '-' exp {$$ = $1 - $3;}
    |exp '*' exp {$$ = $1 * $3;}
    |exp '/' exp {$$ = $1 / $3;}
    |'('exp')' {$$ = $2;}                                   
    |NUMBER {$$ = $1;}
    ;
%%
int main()
{
        yyparse();
        return 0;
}
yyerror(char *s)
{
        printf("error:%s",s);
}
