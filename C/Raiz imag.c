#include <stdio.h>
#include <math.h>
int main ()
{
	float x, z;
	printf("este da la raiz cuadrada de un numeorp "); 
	scanf("%f",&x);
	
    z = sqrt(x);
		
	if ( x < 0){
		printf ("el nuemro  no tinee raiz  ", z);
		
	}
	else {
		printf ("la raiz cuandrada es %.2f", z);
	}
	
	
	return 0; 
}
