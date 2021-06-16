#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#define NUM_ELEM 300000
int saldo , i;
int main ()
{
	srand((unsigned)time (NULL));
	for (i=1;i<=10; i++)
	{
	saldo =rand () %NUM_ELEM;
	printf ("saldo  = %i\n  ", saldo );
}
printf ("enter parar terminar ");

getch();

}
