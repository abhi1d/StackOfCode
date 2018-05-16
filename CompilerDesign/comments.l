%{
    #include<stdio.h>
    #include<stdlib.h>
    int a=0,b=0,d;
%}
%%
"//".* {a++;}
[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/] {b++;}

%%
void main(int argc,char *argv[]){
    yyin=fopen(argv[1],"r");
    yylex();
    printf("single line %d \nmultiline %d \n",a,b);
    d=a+b;
    printf("total %d \n",d);
}