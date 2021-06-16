#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main (){
	system ("color 8F"); setlocale (LC_ALL , "spanish");
	char nom[6];
	int AAC, DT,HE;
	float SD,SB,PA,TE,SAI,SN,ISR, SM, SH;
	printf ("Digita el nombre del trabajador : \n "); 
	scanf ("%s",&nom);
	printf ("Digita la antiguedad en años cumplidos : \n "); 
	scanf ("%i", &AAC);
	printf ("Digita el salario diario : \n");
	scanf ("%f",&SD);
	printf ("Digita los días trabajados : \n "); 
	scanf ("%i", &DT);
	printf ("Digita las horas extras :  \n"); 
	scanf ("%i",&HE);
	SM = (SD * 30);
	SB = (SD * DT);
	SH = (SD/8);
	if (AAC <= 5){
		PA = (SM * 0.05);
	}
	else if ((AAC >5) && (AAC <16)){
		PA = (SM * 0.10);}
	else if (AAC > 16){
	
		PA = (SM * 0.15);
	}

	if (SH <= 9 )
		TE = (SH *2);	
	else if (SH > 10)
		TE = ( SH *3);
			
	
	
SAI = (SB + PA + TE);
SN = (SAI - ISR);
if (SAI <= 12500 ){
	ISR = (0.05);
	ISR = (SAI * ISR );
}	
else if ((SAI >= 12501) && (SAI <= 25000)) {
	ISR = (0.10);
	ISR = (SAI * ISR);
	
}
else if (SAI >= 25000)	
{
	ISR = (0.15);
	ISR = ( SAI * ISR);
	
}
	
	
SN = (SAI - ISR);
printf ("         Nombre de empleado : %s\n", nom);
printf ("                 Antiguedad : %i\n ", AAC );	
printf ("               Saldo diario : %.2f\n", SD);	
printf ("            Dias trabajados : %i\n", DT );	
printf ("               Sueldo bruto : %.2f\n",SB);	
printf ("        Prima de antiguedad : %.2f\n ", PA);
printf ("               Tiempo extra : %.2f\n", TE);
printf ("     Impuesto sobe la renta : %.2f\n", ISR);
printf ("                Sueldo neto : %.2f\n", SN);

	
	return 0; 
}
