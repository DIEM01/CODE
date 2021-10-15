#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR_VALOR -1
 
typedef struct nodo {
   int informacion;
   char sCaracter [20];
   struct nodo *siguiente; 
   struct nodo *anterior ;
} tipoNodo;

typedef tipoNodo *pNodo; 
/*
   Name: bicola_vacia
   Parámetros: 
      inicio: Tipo apuntador al primer elemento de la cola
   Regresa:
   	  1: Si la cola está vacÃ­a
   	  0: Si la cola no está vacÃ­a
*/
int bicola_vacia(pNodo inicio,pNodo final){
	if(!inicio&& !final){
		return 1;
	}else
		return 0;
}

/*
   Name: bicola_llena
   Description: Revisar si hay espacio en la memoria.
   Regresa:
   	  1: Si la memoria está llena
   	  0: Si la memoria no está llena
*/

int bicola_llena(){
	
	if ( (pNodo)malloc(sizeof(tipoNodo))== NULL )
		return 1;
	else
		return 0;

}
/*
   Name: ver_cabecera
   Description: Mostrar el primer elemento de la cola
   Parámetros: 
      cabecera:ve esta funcion imprime los ultimos datos de inicio y fin 
*/
void ver_cabecera(pNodo inicio, pNodo final){
	if(bicola_vacia(inicio, final)){
		fprintf(stderr, "La bicola est%c vac%ca\n", 160, 161);
	} else 
		printf("El inicio de la bicola es: %d \n", inicio->informacion );
		printf("El inicio de la bicola es: %s \n", inicio->sCaracter );
		printf("El inicio de la bicola es: %d \n", final->informacion );
		printf("El inicio de la bicola es: %s \n", final->sCaracter );
}


/*
	Name: ver_bicola
	Copyright: 
	Author: ivan flores 
	Date: 23/09/21 23:36
	Description:esta funcion ve la cola de incio y fin 
*/

void ver_bicola(pNodo inicio,pNodo final, int eNumero, char sCaracter[20]){
	pNodo aux;
	
	if(bicola_vacia(inicio, final)){
		fprintf(stderr, "La bicola est%c vac%ca\n", 160, 161);	
	}else {
		int ent ;
		printf ("Iniciar desde final 1 o inicio 2");
		scanf (" %d", &ent);
		if (ent == 1 ){
			aux = inicio;	
			printf("\nBicola: ");
			while (aux != NULL){
				printf("%i \n", aux->informacion);
				printf ("%s \n", aux ->sCaracter);
				aux = aux->siguiente;
			}	
			printf("\n");	
		}
		else if(ent == 2){
			aux = final;	
			printf("\nBicola: ");
			while (aux != NULL){
				printf("%i \n", aux->informacion);
				printf ("%s \n", aux ->sCaracter);
				aux = aux->anterior;
			}	
		printf("\n");		
		}
	}
}

/*
	Name: enbiCola
	Copyright: 
	Author: Ivan Flores 
	Date: 23/09/21 23:34
	Description: inserta los datos que se ingresaron por el usuario 
	se pasan los datos que se ingresaron por el usuario 
*/

void enbiCola(pNodo *inicio, pNodo *final, int informacion , char sCaracter [20])
{
	pNodo nuevo;
   
	if(bicola_llena()){ 	
				fprintf(stderr, "Memoria llena.\n");
	}else {
		nuevo = (pNodo)malloc(sizeof(tipoNodo)); 
		nuevo->informacion = informacion;
		strcpy (nuevo->sCaracter,sCaracter );
   		nuevo->siguiente = NULL; 
		nuevo -> anterior = NULL;    
   	  if(bicola_vacia(*inicio, *final)){
			*inicio = *final= nuevo;
            nuevo->siguiente = NULL;
            nuevo->anterior=NULL;
		 }else{  
			int n;
   			printf ("Enbicolar desde final 1 o enbicolar desde inicio 2 ");
   			scanf ("%d",&n);
   			if (n== 1){	
				nuevo -> siguiente = (*inicio);
   		   	    nuevo->anterior = NULL ;
   			    *inicio = nuevo;
   			}
			else if (n == 2){
   				nuevo -> siguiente = NULL ;
   				nuevo -> anterior = (*final);
   				*final = nuevo;
   			}
			
		 }
	}
}





/*
	Name: debiCola
	Copyright: 
	Author: Ivan Flores 
	Date: 23/09/21 23:33
	Description: decola los elementos
*/



int debiCola(pNodo *inicio, pNodo *final){
	pNodo aux;
	pNodo aux2 ;
	int x;
	if(bicola_vacia(*inicio, *final)){
		fprintf(stderr, "La bicola est%c vac%ca\n", 160, 161);
		return ERROR_VALOR;
	}
	
	if  (*inicio == *final){
		
	aux = *inicio;
	*final= (*final)->anterior = NULL;
	*inicio = (*inicio)->siguiente= NULL;
		free (aux);
	}else {
		
	aux = *inicio;
	x = (*inicio)->informacion;
	*inicio = (*inicio)->siguiente;	
		
		
	}
	
	
	return x;
}

/******************/
int main(){
	pNodo inicio = NULL, 
		  final = NULL;

	int eOpcion = 0, 
		eNumero;
char sCaracter[20];
	do{
		fflush(stdin);
		printf("\t*******\n\t Colas\n\t*******\n");
		printf("1. Agregar\n2. Eliminar\n3. Ver Frente\n4. Ver biCola\n5. Salir\n");
		printf("Selecione una opci%cn: ", 162);
		scanf("%d", &eOpcion);

		switch(eOpcion){
			case 1: printf("Ingrese el nuevo elemento int : \n");
					scanf("%d", &eNumero);
					fflush(stdin);
					printf("Ingrese el nuevo elemento char: \n");
					scanf("%s", &sCaracter);
					enbiCola(&inicio, &final, eNumero, sCaracter);
					break;

			case 2: eNumero = debiCola(&inicio,&final);
					if (eNumero!= ERROR_VALOR)
						printf("Se elimin%c el elemento  de la bicola\n");
					break;

			case 3: ver_cabecera(inicio, final);
					getch();
					break;

			case 4: ver_bicola(inicio, final,eNumero, sCaracter);
					getch();
					break;

			case 5: break;

			default: printf("Error en la selecci%cn. \n", 162);
					 break;

		} // switch

	} while(eOpcion != 5);
			
	getch();
	return 0;
}
