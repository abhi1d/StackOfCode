%{
#include"y.tab.h"
%}

%%
[a-zA-Z] {return LETTER;}
[0-9] {return DIGIT;}
[_] {return UND;}
[\n] {return NL;}
. {return yytext[0];}
%%