
/*

lex filename.l
gcc lex.yy.c -ll
./a.out

to see the result press cntrl+D
*/

%{
int flag=0;
%}
%%
(""[aA][nN][dD]"")|(""[oO][rR]"")|(""[bB][uU][tT]"") {flag=1;}
%%
int main()
{
printf("Enter the sentence\n");
yylex();
if(flag==1) 
printf("\nCompound sentence\n");
else 
printf("\nSimple sentence\n");
return 0;
}