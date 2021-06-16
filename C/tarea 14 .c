#include <windows.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
	system ("color 8F"); setlocale (LC_ALL , "spanish");

	int bandera =1, ecuenta =1, edeno=0 , enume =1;
	float fcoc , fpaso = 1.0 , fsuma =1.0;
	printf("sucesion ");
	while (fpaso >= 0.01)
	{ edeno =edeno + 2;
	fcoc = (float (enume)/ float (edeno));
	fpaso = fcoc;
	if (fcoc >= 0.01)
	{ if (bandera == 1)
		{ fcoc = fcoc *(-10);
		  bandera =0;
		}
		else 
		{ bandera = 1;
		}
	fsuma = fsuma + fcoc ;
	ecuenta = ecuenta +1;
	}
	

	} 
	printf ("\n          total : %6f", fsuma);
	printf ("\n\n    Numero de elementos sumados %d ", ecuenta );
	printf ("\n enter para terminar ");
	getch ();
	return 0 ;
}
