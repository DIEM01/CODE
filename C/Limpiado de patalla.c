#include<stdio.h>
#include <stdlib.h>
int main ()
{
	char x;
	printf ("lalallalllalalala");
	printf ("para limpiar pantalla digite 1 ");
	scanf ("%c",&x);
	if (x == '1'){
		system ("cls");
		printf ("se limpio correcto ")	;
		}	
		
	else {
		fflush (stdin);
		printf ("no ha funciinado ");
		printf ("para limpiar pantalla digite 1 ");
	scanf ("%c",&x);
	if (x == '1'){
		system ("cls");
		printf ("se limpio correcto ")	;
		}		
		
	
		
	}
	
	
	
	
	
	return 0;
}
