#include <windows.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
int main (){
system ("color 8F"); setlocale (LC_ALL , "spanish");

	float num;
	int numi ;
	printf ("dame un numero entero "); scanf ( "%f", &num);
	numi = int (num);
	if (numi < 0)
	{
		printf (" \n el numero que escribiste es negativo ");
		
	}	
	else {
		printf ("\n el numero que escribsite es positivo ");
	}  
    if (numi % 2 == 0)
     {
  	printf ("\n es par");
  	
      }
  	else {
  		printf ("\n es non ");
  	}
	int res = 1 ;
	int primo = 1;
	int div = 2 ;
	while (div < numi  && res != 0);
	{
		res = numi % div ;
		if (res == 0 ){
			{primo = 0 ;
			
			}
		}
		div = div +1 ;
		
		
		
		
	}
    if ( numi != 0 )
    {
    	if ( primo == 0)
    	{ printf ( " \n no es primo ");
    	}
    	else {
    		printf (" \n es primo ");
    }
    }
  	int coc , suma = 0 , i ; 
  	//d esde que i vale dos mietras i sea menos o igual al numero analizado y con incrementos unitarios de i {
  	for (i = 2; i <= numi ; i = i +1)
  	{
  		if ((numi & i) == 0 )
  		{ suma = suma + ( numi / i);
  	   
  		}
  	}
  	if ( suma == numi)
  	{ printf ( "\n es perfecto ");
  	
  	}
  	else { printf ("\n no es perfeccto");
  	
  }
  
  
  
  
	return 0 ;  
}
