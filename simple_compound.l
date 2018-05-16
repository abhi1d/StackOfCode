%{
int valid;
%}
%%
[a-zA-Z][ ](and|but|or)[ ][a-zA-Z] { valid=1; }
.|[\n] ;
%%
main()
{
printf("\nEnter the sentence ");
yylex();
if(valid)
{
printf("\nStatement is compound!\n");
}
else
{
printf("\nStatement is simple!\n");
}
}
