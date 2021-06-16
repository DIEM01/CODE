#include <windows.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
system ("color 8F"); setlocale (LC_ALL , "spanish");
	int num , deno , paso = 2;
	 printf ("dame el primer numero "); scanf ("%i", &num);
	 printf ("dame el segundo numero "); scanf ("%i", &deno);
if (deno ==0 )
{

	printf ("esta division no estta definida ");
	printf ("enter para terminar");
	getch ();
}
else {
	while ((paso <num || paso < deno) && deno > 2)
	{ if (( num % paso  == 0) && (deno % paso == 0 ))
	{ num =  ( num / paso );
	  deno = ( deno / paso );
	  
	}
	  else { (paso = paso + 1 );
	  }
	}
printf (" \n\n   la minima expresion es %i/ %i", num , deno)	;
	
}

return 0;
}




