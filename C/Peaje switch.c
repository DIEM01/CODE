#include <stdio.h>
int main (){
	int num ;
	printf(" \nselecciona el auto que usas ");
	printf ("\n1 para turismo ");
	printf ("\n2 para autobus ");
	printf("\n 3 para motocicleta ");
	scanf ("%i", &num);
	switch (num){
		case 1 : printf ("el peaje esd de 500"); break;
		case 2 : printf ("el peaje es de 3000"); break;
		case 3 : printf ("el peaje es de 300"); break ;
		default : printf ("este auto no es autorizado ");
		
		
		
		
		
	}
	
	
	return 0;
}
