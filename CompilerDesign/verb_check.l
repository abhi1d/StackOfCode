
/* lex filename.l
   gcc lex.yy.c -ly -ll
   ./a.out
*/


%%
[\t]+ 
is    | 
am    |
are   |
was   |
were  |
shall |
have  { printf("%s: is a verb\n",yytext);}
[a-zA-Z]+ {printf("%s: is not a verb\n",yytext); /*yytext is the buffer*/};
. | \n
 /* This is a type of comment test comment which starts with a blank space*/
%{
/*This is also a type of comment */
%}
 /*This is also a comment type. CHECK the semicolon.*/;
%%
int main(){
	yylex();
    return 0;
}