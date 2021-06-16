#include <windows.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
system ("color 8F"); setlocale (LC_ALL , "spanish");
	int  e_num1 , e_num2 ;
	char c_signo ;
do {
	
	printf ("\n ESTE PROGRAMAM ES UNA CALCULADORA SIMPLE ");
	printf ("\n Si captura 2 ceros se acaba el programa");	
	printf ("\n Dame el primer número ");
	scanf ("%i", &e_num1);
	printf ("\n Dame el signo número ");
	scanf ("%s", & c_signo);
	// fflush (stdin )	; para limpiar el bofer 
	printf ("\n Dame el segundo número ");
	scanf ("%i", & e_num2);	
	switch (c_signo )
	{ case '+' : printf ("\n El resultado de la suma es  %i", e_num1 + e_num2); break;
	  case '-' : printf ("\n El resultado de la resta es  %i", e_num1 - e_num2); break;
	  case '*' : printf ("\n El resultado de la multiplicacion es  %i", e_num1 * e_num2); break;
	  case '/' : if (e_num2 == 0)
	                { printf ("\n La division entre cero no esta definida ");
	                }
	            else {printf ("El resultado de la división es %i", e_num1 / e_num2);
	            }
				break;
	  default :  printf ("\n Opcion no valida ");                              // es  para cualqyier otro caracter 
	}   
}while (e_num1 !=0  && e_num2!=0  );
	printf ("\n\n Enter para terminar...");
return 0 ;
}
