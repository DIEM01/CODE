#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int main (){
	
	int var1, var2, var3 , aux ;

	printf ("Este programa ordena tres numeros enteros diferentes\n"); 
	
	printf ("y los acomoda en las mismas variables de menor a mayor\n");
	printf ("Dame el primer nmero :\n " ); scanf ("%i", &var1);
	do {
		printf ("dame el segundo numero : \n") ; scanf ("%i", &var2);
		if (var2 == var1)
		
			printf ("el segundo numero debe ser diferente\n ");
		
			getch();	
			
	} while (var2 == var1);
	do {
		printf ("Dame el tercer numero :\n");  scanf ("%i", &var3);
		if (var3 == var1 ){
	
			printf (" El tercer numero debe ser diferente del primero\n");
			printf (" Presiona Enter para volver a capturar...\n");
				getch();
		}
		else {
	
			if (var3 == var2 )
				printf (" El tercer numero debe ser diferente del segundo\n");
				printf (" Presiona Enter para volver a ca pturar...\n" );
					getch();
	}
			
		
		
		
	}while (var3 == var2 && var3 == var1);
	if (var3 <var2){

		aux = (var2);
		var3 = (var2);
		var2 = (aux);
	}
	if (var2 <var1){

		aux = (var2);
		var2 =( var1);
		var1 = (aux);
	
	}
	if (var3 <var2){
	
		aux = (var3);
		var3 = (var2);
		var2 = (aux);
	}

printf ("      numero 1 :   %i numero 2 :   %i numero 3 :   %i", var1, var2 ,var3);


	
	return 0 ; 
}
