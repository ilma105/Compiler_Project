 /*c declarations */

%{
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "1707105.tab.h"
#include <stdlib.h>
%}

variable [a-zA-Z][a-zA-Z0-9]*
%%
"~" {return ASSIGN;}
"integer" {return INT;}
"float" {return FLOAT;}
"character" {return CHAR;}
[-+]?[0-9]+ { 
  yylval.integerType=atoi(yytext);
     return INTNUMBER;
}
[-+]?[0-9]*"."[0-9]+ { 
  yylval.floattType=atof(yytext);
     return FLOATNUMBER;
}
"->" {return GO;}
"HANDLE"  { return SWITCH; }
"SAMPLE"    { return CASE;  } 
"DEFAULT"  { return DEFAULT; }
"TRAVEL" {return FOR;}
"SHOW"    { return PRINT; }
"plus" {return PLUS;}
"div" {return DIV;}
"mult" {return MULT;}
"minus" {return MINUS;}
"SUM_ALL"         {return SUM_FUNC;}
"MULT_ALL"         {return Multiply_FUNC ;}
"GCD"  {return GCD_FUNC;}
"Even_Odd" {return EO_FUNC ;}
"PROVISO" {return IF;}
"OR" {return ELSE;}
"DIFFERENTLY" { return IEC; }
"PROCEED"  {return WHILE;}
"LEAP_YEAR" { return LEAP_FUNC; }
"Palindrome" { return PALINDROME_FUNC ; }
"Div_ALL"  {return Division_FUNC ; }
"Prime"    {return PRIME_FUNC ;}
"Factorial"         {return FACTORIAL_FUNC ;}
"POWER" 	{return POWER_FUNC ;}
"SIN" {return SINE_FUNC ;}
"COS" {return COSE_FUNC ;}
"TAN" {return TANE_FUNC ;}
"COSEC"  {return COSEC_FUNC;}
"SEC"  {return SEC_FUNC;}
"COT"  {return COT_FUNC;}
"ATAN" {return ATAN_FUNC ;}
"ASIN" {return ASIN_FUNC ;}
"ACOS" {return ACOS_FUNC ;}
"EXPONENTIAL"  {return EXP_FUNC;}
"MODULO"  {return MOD_FUNC;}
"ABSOLUTE" {return ABS_FUNC;}
"ROOT" {return ROOT_FUNC;}
"Log"  {return LOG;}
"Gte"  {return GTE;}
"Lte"  {return LTE;}
"Incre" {return UP;}
"Decre" {return DOWN;}
"Eq" {return EQ;}
"Noteq" {return NOTEQ;}
"And"  {return AND;}
"Or"  {return OR;}
"(" {return LP;}
")" {return RP;}
"LCM" {return LCM_FUNC;} 
"Begin" {return LB;}
"Finish" {return RB;}
"," {return COMA;}
";" {return SEMI;}
":" {return COLON;}
"<" {return LT;}
">" {return GT;}
"FABS" {return FABS_FUNC;}
{variable} {yylval.stringtype=strdup(yytext);
return VARIABLE;
}
"void Friends" {return VOIDMAIN;}

[ \t\n]* ;

. {
    yyerror("unknown char.\n");
 }
%%

/* user subroutines */





