/*
$lex p2a.l
$cc lex.yy.c –ll
$./a.out
Enter the expression
(a+b*c)
a is an identifier
b is an identifier
c is an identifier
[Ctrl-d]
*/


%{
#include<stdio.h>
int nplus=0,nminus=0,nmul=0,ndiv=0,id=0,flag1=0,flag2=0,left=0;
%}
%%
[(] {flag1++;left++;}
[)] {flag1--;}
[a-zA-Z0-9]+ {flag2++;id++;}
[+] {flag2--;nplus++;}
[-] {flag2--;nminus++;}
[*] {flag2--;nmul++;}
[/] {flag2--;ndiv++;}
%%
int main()
{
printf("\nenter a valid arithematic expression\n");
yylex();
if(flag1!=0||flag2!=1)
printf("invalid expression");
else
{
printf("\nValid expression\n");
printf("addition(+)=%d\n",nplus);
printf("subtraction(-)=%d\n",nminus);
printf("multiplication(*)=%d\n",nmul);
printf("division(/)=%d\n",ndiv);
printf("\nIDENTIFIER=%d\n",id);
printf("\nleft=%d\n",left);

return 0;
}
}

