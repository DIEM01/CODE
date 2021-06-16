#include <stdio.h >
int main (){
	float saldo, retiro;
	int tic, var1;
	printf ("Inserta tu tarjeta de credito  "); 
	printf ("el saldo que tienes "); scanf ("%f", &saldo);
	printf ("si quieres onsultar el saldoescribe 1 y si quieres retirar efectivo escribe 2  "); 
	scanf ("%f", &var1);
	if (var1 = 1 ){
		printf ("el saldo inicial es : %f", saldo);
			
	}
	else {
		printf ("cuanto quieres retiraara?");scanf ("%f", &retiro);
		if (retiro > 5000 and retiro > saldo /2){
			printf ("tu operacion no puede ser efectuada ");
			
		}
		else {
			if (retiro < 5000 and retiro < saldo/2);
			printf (" el saldo final es de : %f ", saldo - retiro );
		}
		
		
	}
	printf ("desea imprimir el tiked, 1 para aceptar , 2 para ignorar ?"); scanf("%i",&tic);
		if (tic == 1){
			
			
			
		}
		
	
	
	
	
	return 0; 
}
