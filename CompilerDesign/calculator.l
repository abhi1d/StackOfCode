/*
 yacc -d filename.y
 lex filename.l
 gcc lex.yy.c y.tab.c -o filename -ll
 ./filename

 eg:5+10
 sum : 15
*/


%{
#include "y.tab.h"
#include<stdio.h>
extern int yylval;
%}
%%

[0-9]+ {yylval=atoi(yytext); return NUMBER;}
. {return yytext[0];}
[\t]+ ;
\n {return 0;} 
%
