#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#define NUM_ELEM 300000
#definie <conio.h
int main ()
{
	srad((unsigned)time (NULL));
	for (i=1;i<=10; i++)
	{
	saldo =rand () %NUm_ELEM;
	printf ("saldo  = \n ", saldo );
}
printf ("enter parar terminar ");
getch();
	system ("color 8F"); setlocale (LC_ALL , "spanish");
	int cantidad ;
	float precio, iva, importe, descuento,importedesc,total ;
	char sigue;
		printf ("Digite el precio del articulo : " ); scanf ("%f", &precio);
		printf ("\nDigite la cantidad de artículos a comprar :"); scanf ("%i",&cantidad);
		if (cantidad > 0 )
		{
			importe = (cantidad * precio);
			if (importe <= 5000)
			{
			descuento = ((importe*5)/100);
			}		
			else 
			{
				if (importe > 5000 && importe <= 20000 ){
					descuento = ((importe *10)/100);	
				}
				else 
					{
					if (importe > 20000 )
					{
						descuento = ((importe *15)/100);
					}
					}	
			}
			importedesc = (importe - descuento );
			importe = (importedesc);
			iva = (importe *16/100);
			total = (importedesc + iva);
			importe = (cantidad * precio);
			
			printf (" \n Importe sin descuento : $ %.2f", importe);
			printf (" \n             Descuento : $ %.2f", descuento);
			printf (" \n Importe con descuento : $ %.2f", importedesc);
			printf (" \n                   IVA : $ %.2f", iva);// EL IVA FUE EN BASE A EL IMPORTE CON DESCUENTO 
			printf (" \n         Total a pagar : $ %.2f", total);
			printf ("\n   Preciona enter para continuar...");	scanf("%c",&sigue);
		}		
	return 0; 
}

