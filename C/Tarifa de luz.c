#include <stdio.h>
int main (){
	float var4;
	float var1 = 1.2;
	float var2 = 1.0;
	float var3 = 0.9;
	printf ("cuanta energia consumiste ?"); scanf ("%f", &var4);
	if (var4 < 1.000){
		printf("la tariga a pagar es 1.2");	
	}
	
	if (var4 > 1.000 && var4 < 1.850){
		printf("la tariga a pagar es 1.0");	
	}	
	if (var4 > 1.850){
		printf("la tariga a pagar es 0.9");	
	}	
	return 0; 
	
}


