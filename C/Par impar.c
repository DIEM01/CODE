#include <stdio.h>
int main () {
	int var1;
	printf ("determina si un numero es par o impar ");
	
	printf ("dame un numero "); scanf ("%i",&var1);	
	
	if (2 % var1 ==0){	
		printf ("este uemro es par ");
}
	if (var1 % 2 !=0 ){
		
		printf ("este es un numero impar");
	}
	
	return 0;
}
