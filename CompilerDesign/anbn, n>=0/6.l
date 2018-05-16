%{
#include "y.tab.h"
%}
%%
"a"|"A" {return A;}
"b"|"B" {return B;}
[ \t] {;}
\n {return 0;}
. {return yytext[0];}
%%