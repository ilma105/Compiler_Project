%{
#include<stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <math.h>
int w=0;
struct {
char *s;
float n;
int ni;
}store[1000];
int yylex(void);
%}

%union
{
float floattType ;
int integerType;
char *stringtype;
}
%token INT CHAR FLOAT LB RB LP RP COMA SEMI VOIDMAIN ASSIGN UP FABS_FUNC ATAN_FUNC ASIN_FUNC ACOS_FUNC  DOWN LTE GTE EQ NOTEQ AND GCD_FUNC LCM_FUNC  OR PLUS MINUS MULT DIV LOG GT LT FOR SWITCH GO CASE DEFAULT PRINT COLON WHILE IF IEC ELSE EO_FUNC Multiply_FUNC SUM_FUNC  PRIME_FUNC POWER_FUNC Division_FUNC LEAP_FUNC PALINDROME_FUNC FACTORIAL_FUNC SINE_FUNC COSE_FUNC TANE_FUNC COSEC_FUNC COT_FUNC SEC_FUNC EXP_FUNC MOD_FUNC ABS_FUNC ROOT_FUNC   
%token<stringtype> VARIABLE
%token<floattType> FLOATNUMBER
%token<integerType> INTNUMBER
%type <integerType> intexpression 
%type <floattType> floatexpression 
%nonassoc IF
%nonassoc ELSE
%right EQ NOTEQ ASSIGN 
%left AND OR
%left LTE GTE LT GT   
%left PLUS MINUS
%left MULT DIV
%right UP  DOWN 
/*simple gram rules*/
%%
project: VOIDMAIN LP RP LB projectstatement RB    { printf("\nSuccessfully COMPILED\n"); }
;

projectstatement :
|projectstatement otheroperation  
|projectstatement vardeclaration 
|projectstatement assignmentoperation SEMI

;
assignmentoperation: assignmentoperation COMA first
|first
;
first:VARIABLE ASSIGN FLOATNUMBER {
int search =0,p=0;
for(p=0;p<w;p++)
{
if(strcmp(store[p].s,$1)==0)
{
store[p].n=$3;
printf("\nvalue of variable %s~%.2f \n",store[p].s,store[p].n);
search =1;
break;
}
}
if(search==0)
{
printf("\nvariable is not declared \n");
}
 }
|VARIABLE ASSIGN INTNUMBER {
int search =0,j=0;
for(j=0;j<w;j++)
{
if(strcmp(store[j].s,$1)==0)
{
store[j].ni=$3;
printf("\nvalue of variable %s~%d \n",store[j].s,store[j].ni);
search =1;
break;
}
}
if(search==0)
{
printf("\n variable is not declared \n");
}
 }
;
vardeclaration : TYPE varr SEMI{ printf("\n Valid declaration \n"); }
;
TYPE :INT 
| FLOAT 
|CHAR
;
varr : varr COMA ids 
|ids 
;
ids:VARIABLE  { int search =0,j=0;
for(j=0;j<w;j++)
{
if(strcmp(store[j].s,$1)==0)
{
printf("\n%s variable is already declared \n",store[j].s);
search =1;
break;
}
}
if(search==0){
  store[w].s=$1;
store[w].n=1;
printf("decalred variable %s\n",store[w].s);
w++;
}
}
|VARIABLE ASSIGN FLOATNUMBER { int search =0,j=0;

for(j=0;j<w;j++)
{
if(strcmp(store[j].s,$1)==0)
{
printf("\n%s variable is already declared \n",store[j].s);
search =1;
break;
}
}
if(search==0)
{
store[w].s=$1;
store[w].n=$3;
printf("\nvalue of variable %s~%.2f\n",store[w].s,store[w].n);
w++;
}
 }
|VARIABLE ASSIGN INTNUMBER { int search =0,k=0;

for(k=0;k<w;k++)
{
if(strcmp(store[k].s,$1)==0)
{
printf("\n%s  variable is already declared  %s~%d \n",store[k].s);
search=1;
break;
}
}
if(search==0)
{
store[w].s=$1;
store[w].ni=$3;
printf("\nvalue of variable %s~%d\n",store[w].s,store[w].ni);
w++;
}
 }
|VARIABLE ASSIGN VARIABLE {printf("string = %s",$3);}
;
otheroperation: SEMI
|intexpression SEMI { printf("\nValue of expression : %d \n",$1); }
|floatexpression SEMI { printf("\nValue of expression : %.2f \n",$1); }
|SWITCH_OPERATION
|IF_OPERATION 
|LOOP_OPERATION
|ALL_FUNCTIONS
; 
SWITCH_OPERATION:SWITCH GO intexpression LB CASE intexpression COLON PRINT LP intexpression RP SEMI  CASE intexpression COLON  PRINT LP intexpression RP SEMI  DEFAULT COLON  PRINT LP intexpression RP SEMI   RB
{
if($6==$3)
{
printf("\nvalue in switch case: %d\n",$10);
}
else if($14==$3)
{
printf("\nvalue in switch case:%d\n",$18);
}
else{
printf("\nvalue in switch case:%d\n",$25);
}
printf("\n");
}
;
|SWITCH GO intexpression LB CASE intexpression COLON PRINT LP intexpression RP SEMI  CASE intexpression COLON PRINT LP intexpression RP SEMI  CASE intexpression COLON PRINT LP intexpression RP SEMI  CASE intexpression COLON PRINT LP intexpression RP SEMI  CASE intexpression COLON  PRINT LP intexpression RP SEMI  DEFAULT COLON  PRINT LP intexpression RP SEMI   RB
{
if($6==$3)
{
printf("\nvalue in switch case: %d\n",$10);
}
else if($14==$3)
{
printf("\nvalue in switch case:%d\n",$18);
}
else if($22==$3)
{
printf("\nvalue in switch case:%d\n",$26);
}else if($30==$3)
{
printf("\nvalue in switch case:%d\n",$34);
}else if($38==$3)
{
printf("\nvalue in switch case:%d\n",$42);
}
else{
printf("\nvalue in switch case:%d\n",$49);
}
printf("\n");
}
;
IF_OPERATION:IF GO intexpression LB intexpression SEMI RB
{
 if($3)
     { 
       printf("\nValue of expression in PROVISO BLOCK : %d\n",$5);
    }
 else
    {
      printf("\nCondition value zero in PROVISO BLOCK \n");
    }
printf("\n");

}
|IF GO intexpression LB intexpression SEMI RB ELSE LB intexpression SEMI RB{

 if($3) 
   {
    printf("\nValue of expression in PROVISO BLOCK : %d\n",$5);
   }
 else
   { 
     printf("\nValue of expression in OR BLOCK : %d\n",$10);
   }
printf("\n");
}
|IF GO intexpression LB intexpression SEMI RB IEC GO intexpression LB intexpression SEMI RB ELSE LB intexpression SEMI RB{

 if($3) 
   {
    printf("\nValue of expression in PROVISO BLOCK : %d\n",$5);
   }
 else if($10)
   { 
     printf("\nValue of expression in DIFFERENTLY BLOCK : %d\n",$12);
   }
else{
printf("\nValue of expression in OR BLOCK : %d\n",$17);
}  
printf("\n");
}   
|IF GO floatexpression LB floatexpression SEMI RB
{
 if($3)
     { 
       printf("\nValue of expression in PROVISO BLOCK : %0.2f\n",$5);
    }
 else
    {
      printf("\nCondition value zero in PROVISO BLOCK \n");
    }
printf("\n");

}
|IF GO floatexpression LB floatexpression SEMI RB ELSE LB floatexpression SEMI RB{

 if($3) 
   {
    printf("\nValue of expression in PROVISO BLOCK : %0.2f\n",$5);
   }
 else
   { 
     printf("\nValue of expression in OR BLOCK : %0.2f\n",$10);
   }
printf("\n");
}
|IF GO floatexpression LB floatexpression SEMI RB IEC GO floatexpression LB floatexpression SEMI RB ELSE LB floatexpression SEMI RB{

 if($3) 
   {
    printf("\nValue of expression in PROVISO BLOCK : %0.2f\n",$5);
   }
 else if($10)
   { 
     printf("\nValue of expression in DIFFERENTLY BLOCK : %0.2f\n",$12);
   }
else{
printf("\nValue of expression in OR BLOCK : %0.2f\n",$17);
}  
printf("\n");
}   
;

LOOP_OPERATION:FOR operation
| WHILE GO intexpression LT intexpression LB  intexpression ASSIGN intexpression PLUS intexpression RB  { 

int n=$11;
int f=$9;
int i,x;
while(f<$5){
  f=f+n;
 printf("\nValue of expression in PROCEED BLOCK : %d\n",f);
}
printf("\n");
for(x=0;x<w;x++){
if($9==store[x].ni){
store[x].ni=f;
break;
}
}
}
|WHILE GO intexpression LT intexpression LB  intexpression ASSIGN intexpression MULT intexpression RB  { 

int n=$11;
int f=$9;
int i,x;
while(f<$5){
  f=f*n;
 printf("\nValue of expression in PROCEED BLOCK : %d\n",f);
}
printf("\n");
for(x=0;x<w;x++){
if($9==store[x].ni){
store[x].ni=f;
break;
}
}
}
;

operation:GO intexpression COLON intexpression LB intexpression ASSIGN intexpression MULT intexpression RB {
int n=$2;
int rem=$4;
int l=$8;
int r=$10;
int k=$6,i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k*$10;

	                                 printf("value in the TRAVEL loop: %d\n", k);	

}
}
else{
for(i=n;i<=rem;i++){	
k=l*$10;

	                                 printf("value in the TRAVEL loop: %d\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if($6==store[x].ni){
store[x].ni=k;
break;
}
}
}
|GO intexpression COLON intexpression LB intexpression ASSIGN intexpression MINUS intexpression RB {
int n=$2;
int rem=$4;
int l=$8;
int r=$10;
int k=$6,i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k-$10;

	                                 printf("value in the TRAVEL loop: %d\n", k);	
}
}
else{
for(i=n;i<=rem;i++){	
k=l-$10;

	                                 printf("value in the TRAVEL loop: %d\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if($6==store[x].ni){
store[x].ni=k;
break;
}
}
}
|GO intexpression COLON intexpression LB intexpression ASSIGN intexpression PLUS intexpression RB {
int n=$2;
int rem=$4;
int l=$8;
int r=$10;
int k=$6,i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k+$10;

	                                 printf("Value in the TRAVEL loop: %d\n", k);	
}
}
else{
for(i=n;i<=rem;i++){	
k=l+$10;

	                                 printf("value in the TRAVEL loop: %d\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if($6==store[x].ni){
store[x].ni=k;
break;
}
}
}
|GO intexpression COLON intexpression LB intexpression ASSIGN intexpression PLUS intexpression IF GO intexpression GT intexpression LB intexpression ASSIGN intexpression MULT intexpression RB RB {
int n=$2;
int rem=$4;
int l=$8;
int r=$10;
int k=$6,i,x;
for(i=n;i<=rem;i++){	
k=k+$10;
if(k>$15){
k=k*$21;

	                                 printf("\nMy roll: %d\n", k);	
break;
}

}
printf("\n");
for(x=0;x<w;x++){
if($6==store[x].ni){
store[x].ni=k;
break;
}
}
}
|GO intexpression COLON intexpression LB floatexpression ASSIGN floatexpression MULT floatexpression RB {
int n=$2;
int rem=$4;
float l=$8;
float r=$10;
float k=$6;
int i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k*$10;

	                                 printf("value in the TRAVEL loop for mult : %0.2f\n", k);	

}
}
else{
for(i=n;i<=rem;i++){	
k=l*$10;

	                                 printf("value in the TRAVEL loop: %0.2f\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if($6==store[x].n){
store[x].n=k;
break;
}
}
}
|GO intexpression COLON intexpression LB floatexpression ASSIGN floatexpression MINUS floatexpression RB {
int n=$2;
int rem=$4;
float l=$8;
float r=$10;
float k=$6;
int i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k-$10;

	                                 printf("value in the TRAVEL loop: %0.2f\n", k);	
}
}
else{
for(i=n;i<=rem;i++){	
k=l-$10;

	                                 printf("value in the TRAVEL loop: %0.2f\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if($6==store[x].n){
store[x].n=k;
break;
}
}
}
|GO intexpression COLON intexpression LB floatexpression ASSIGN floatexpression PLUS floatexpression RB {
int n=$2;
int rem=$4;
float l=$8;
float r=$10;
float k=$6;
int i,x;
if(k==l){
for(i=n;i<=rem;i++){	
k=k+$10;

	                                 printf("Value in the TRAVEL loop: %0.2f\n", k);	
}
}
else{
for(i=n;i<=rem;i++){	
k=l+$10;

	                                 printf("value in the TRAVEL loop: %0.2f\n", k);	
}
}
printf("\n");
for(x=0;x<w;x++){
if($6==store[x].n){
store[x].n=k;
break;
}
}
}
;
ALL_FUNCTIONS:EO_FUNC LP intexpression RP SEMI  {
	       int  n=$3;   

			if(n%2==0){
			printf("%d is an even number \n",$3);
}
else{
printf("%d is an odd number \n",$3);

}


	     }

|Multiply_FUNC LP intexpression COMA intexpression RP SEMI {
int n=$3;
int rem=$5;
int mul=1,i;

			for(i=n;i<=rem;i++){
	                                 mul*=i;			
			}
		
			printf("Multiplication from %d to %d is: %d\n", $3, $5,mul);
}
|SUM_FUNC LP intexpression COMA intexpression RP SEMI {
	         int n=$3;
int rem=$5;
int f=0,i;

			for(i=n; i<=rem; i++)
			{
				f+=i;			
			}
			printf("Summation from %d to %d is: %d\n", $3, $5,f);
	     }
|PRIME_FUNC LP intexpression RP SEMI {
int n=$3;
int primen=0,i;
for(i=2;i<n;i++){
	                                 if(n%i==0){
primen=1;
break;

}			
			}
			if(n==1){
			printf("%d is neither a  prime number nor a composite \n", $3);
}
else if(primen==0){
printf("%d is a prime number \n", $3);
}
else{
printf("%d is not a prime number \n", $3);
}
}
|POWER_FUNC LP intexpression COMA intexpression RP SEMI {
int n=$3;
int rem=$5;
			
			printf("%d ^ %d = %.2lf\n", $3, $5,pow(n,rem));
}
|FACTORIAL_FUNC LP intexpression RP SEMI {
	        int n=$3,i,fac=1;   

			for(i=n; i>=2; i--)
			{
				fac*=i;			
			}
			
			printf("\nFactorial of %d : %d\n",$3,fac);
	     }	
|LEAP_FUNC LP intexpression RP SEMI {
if($3 % 4==0){
printf("\n%d is a leap year \n", $3);
}
else{
printf("\n%d is not a leap year \n",$3);
}
}
|PALINDROME_FUNC LP intexpression RP SEMI 
{
int originalN = $3,rem,reversedN=0;
while ($3 != 0) {
        rem = $3 % 10;
        reversedN = reversedN * 10 + rem;
        $3 /= 10;
    }

   
    if (originalN == reversedN)
        printf("\n%d is a palindrome.\n", originalN);
    else
        printf("\n%d is not a palindrome.\n", originalN);

}
|GCD_FUNC LP intexpression COMA intexpression RP SEMI {
int gcd,i; 
for(i=1; i <= $3 && i <= $5; ++i)
    {
        
        if($3%i==0 && $5%i==0)
            gcd = i;
    }

    printf("\nG.C.D of %d and %d is %d\n", $3, $5, gcd);

}
|LCM_FUNC LP intexpression COMA intexpression RP SEMI {
int i,max; 
 max = ($3 > $5) ? $3 : $5;

    while (1) {
        if (max % $3 == 0 && max % $5 == 0) {
            printf("\nL.C.M of %d and %d is %d.\n", $3, $5, max);
            break;
        }
        ++max;
    }
}
|Division_FUNC LP intexpression COMA intexpression RP SEMI {
int n; 
if($5!=0)
    {
     n = $3 / $5;
printf("\nresult of divison : %d\n",n);
   }
  else
    {
     n = 0;
     printf("\ndivide by 0\t\n");
    }
}
|ABS_FUNC LP intexpression RP SEMI{
	           

			
			printf("\nAbsolute value of %d  is :%d \n",$3,abs($3));
}
|FABS_FUNC LP floatexpression RP SEMI{
	           

			
			printf("\nAbsolute value of %0.2lf  is :%0.2lf \n",$3,fabs($3));
}
|MOD_FUNC LP intexpression COMA intexpression RP  SEMI {
int n; 
if($5!=0)
    {
     n = $3 % $5;
printf("\nResult of MODULO function: %d\n",n);
   }
  else
    {
     n = 0;
     printf("\ndivide by 0\t\n");
    }	           

	
}
|ROOT_FUNC LP intexpression RP   SEMI{
printf("\nSquare ROOT value of %d  is :%0.2lf \n",$3,sqrt($3));
}
|ROOT_FUNC LP floatexpression RP  SEMI {
printf("\nSquare ROOT value of %0.2lf  is :%0.2lf \n",$3,sqrt($3));
}
|EXP_FUNC LP floatexpression RP  SEMI {

			printf("\nExponential value of %0.2lf  is :%0.2lf \n",$3,exp($3));
}
|PRINT LP intexpression RP SEMI {printf("\nPrinted Value %d\n",$3);}
|PRINT LP floatexpression RP SEMI {printf("\nPrinted Value %0.2f\n",$3);}
|LOG LP intexpression RP SEMI    {int n;
n=$3;
printf("\nValue of Log Base 2 is %0.2lf\n",(log2(n)));}
|cone SEMI 
;
cone : SINE_FUNC LP intexpression RP   {
	           

			
			printf("\nSine Value of %d  degree  is :%.2lf \n",$3,sin($3*3.1416/180));
}
|COSE_FUNC LP intexpression RP   {
	           

			
			printf("\nCoSine value of %d  degree  is :%.2lf \n",$3,cos($3*3.1416/180));
}
|TANE_FUNC LP intexpression RP   {
	           

			
			printf("\nTangent value of %d  degree  is :%.2lf \n",$3,tan($3*3.1416/180));
}
|COT_FUNC LP intexpression RP   {
	           

			
			printf("\nCotangent value of %d  degree  is :%.2lf \n",$3,(1/tan($3*3.1416/180)));
}
|COSEC_FUNC LP intexpression RP   {
	           

			
			printf("\nCosecant value of %d  degree  is :%.2lf \n",$3,(1/sin($3*3.1416/180)));
}
|SEC_FUNC LP intexpression RP   {
	           

			
			printf("\nSecant value of %d  degree  is :%.2lf \n",$3,(1/cos($3*3.1416/180)));
}
|ASIN_FUNC LP floatexpression RP   {
	           
float k, ret;
float val;
 
    
    k = $3;
    
    ret = asin(k);
    val = (ret * 180) / 3.1416;

			
			printf("\nArc Sine Value of %0.2lf is :%.0lf degree\n",$3,val);
}
|ACOS_FUNC LP floatexpression RP   {
	           
float k, ret, val;
 
    
    k = $3;
    
    ret = acos(k);
    val = (ret * 180) / 3.1416;
			
			printf("\nArc COSine Value of %0.2lf is :%.0lf degree\n",$3,val);
}
|ATAN_FUNC LP floatexpression RP   {
	           
float k, ret, val;
 
    
    k = $3;
    
    ret = atan(k);
    val = (ret * 180) / 3.1416;
			
			printf("\nArc TAN Value of %0.2lf is :%.0lf degree\n",$3,val);
}
;

floatexpression :FLOATNUMBER{store[w].n=$1;
$$=store[w].n;
w++;
}
|VARIABLE  COMA { int search =0,k=0;
for(k=0;k<w;k++)
{
  if(strcmp(store[k].s,$1)==0)
{
$$=store[k].n;
search =1;
break;
}
}
if(search==0)
{
printf("\nvariable is not declared \n");
}
 } 
|floatexpression PLUS floatexpression { $$ = $1 + $3; }
|floatexpression MINUS floatexpression { $$ = $1 - $3; }
|floatexpression MULT floatexpression { $$ = $1 * $3; }
|floatexpression DIV floatexpression {
  if($3)
    {
     $$ = $1 / $3;
   }
  else
    {
     $$ = 0;
     printf("\ndivide by 0\t");}
    }
|floatexpression LT floatexpression { $$ = $1 < $3; }
|floatexpression GT floatexpression { $$ = $1 > $3; }
|floatexpression LTE floatexpression {$$ = $1 <= $3;}
|floatexpression GTE floatexpression {$$ = $1 >= $3;}
|floatexpression EQ floatexpression {$$ = $1 == $3;}
|floatexpression NOTEQ floatexpression {$$ = $1 != $3;}
|floatexpression UP {$$ = $1 + 1;}
|floatexpression DOWN{$$ = $1 - 1;}
|floatexpression OR floatexpression {$$ = $1 || $3;}
|floatexpression AND floatexpression {$$ = $1 && $3;}
|LP floatexpression RP   { $$ = $2; }
;
intexpression :INTNUMBER {store[w].ni=$1;
$$=store[w].ni;
w++;
}
|VARIABLE   { int search =0,j=0;
for(j=0;j<w;j++)
{
if(strcmp(store[j].s,$1)==0)
{
$$=store[j].ni;
search =1;
break;
}
}
if(search==0)
{
printf("\nvariable is not declared \n");
}
 } 
|intexpression PLUS intexpression { $$ = $1 + $3; }
|intexpression MINUS intexpression { $$ = $1 - $3; }
|intexpression MULT intexpression { $$ = $1 * $3; }
|intexpression DIV intexpression {
  if($3)
    {
     $$ = $1 / $3;
   }
  else
    {
     $$ = 0;
     printf("\ndivide by 0\t");}
    }
|intexpression LT intexpression { $$ = $1 < $3; }
|intexpression GT intexpression { $$ = $1 > $3; }
|intexpression LTE intexpression {$$ = $1 <= $3;}
|intexpression GTE intexpression {$$ = $1 >= $3;}
|intexpression EQ intexpression {$$ = $1 == $3;}
|intexpression NOTEQ intexpression {$$ = $1 != $3;}
|intexpression UP {$$ = $1 + 1;
}
|intexpression DOWN{$$ = $1 - 1;}
|intexpression OR intexpression {$$ = $1 || $3;}
|intexpression AND intexpression {$$ = $1 && $3;}
|LP intexpression RP   { $$ = $2; }

;

%%
int yywrap(){
return 1;
}
int yyerror(char *s)
{
fprintf(stderr,"%s\n",s);
}
int main()
{
freopen("a.txt","r",stdin);
freopen("output.txt","w",stdout);
yyparse();
}