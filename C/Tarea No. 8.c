#include <stdio.h >
#include <windows.h>
#include <locale.h>
int main (){
	system ("color B5"); setlocale (LC_ALL , "spanish");
	float saldo, retiro;
	int tic , var1;
	char sigue;
	printf ("Inserta tu tarjeta de credito...\n "); 
	printf ("\n Digita el saldo que tienes es : "); scanf ("%f", &saldo);
	printf ("Si quieres consultar tu saldo escribe 1 y si quieres retirar efectivo escribe 2 : "); 
	scanf ("%i", &var1);
	if (var1 == 2 )
	{
		printf ("\n¿Cuánto quieres retirar?(El retiro está limitado a $5000 y la mitad del saldo disponible) ");scanf ("%f", &retiro);
			if (retiro < 5000 && retiro < saldo/2){                    
				printf (" El saldo final es de : %.2f ", saldo - retiro );
				printf ("Desea imprimir el ticket digita 1 para aceptar y 2 para terminar :   ?"); scanf("%i",&tic);
	
			if (tic == 1){
				printf ("\n**********TICKET***********");
			}
			}
			else {
				printf ("Tu operación no puede ser efectuada ");
			}		
}
	if (var1 == 1 )	
{
		printf ("El saldo inicial es : %.2f", saldo);
}
	return 0; 
}
