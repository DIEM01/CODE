#include <stdio.h>
#include <windows.h>
#include <locale.h>
int main ()
{
system ("color 8F"); setlocale (LC_ALL , "spanish");	
float calif , promedio,  suma;
int cuenta;	
cuenta = (1);
do {
	printf ("Dame una calificación No. %i \n", cuenta);
	scanf ("%f",&calif);
	suma = (suma + calif );
	cuenta = (cuenta + 1);
	
}while (calif != 0);
printf ("\nLas calificaciones que se van a promediando son : %i\n", cuenta -2);
if (calif == 0)
	printf ("\nEl promedio es : %.2f \n", suma /(cuenta - 2));
	return 0;
}
