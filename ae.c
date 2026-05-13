%{
#include <stdio.h>

int words = 0;
int chars = 0;
int lines = 0;
%}

%%
\n              { lines++; chars++; }
[ \t]+          { chars += yyleng; }
[^ \t\n]+       { words++; chars += yyleng; }
.               { chars++; }
%%

int main() {
    yylex();
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}



int yywrap() {
    return 1;
}