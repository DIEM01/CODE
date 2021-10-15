#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR_VALOR -1
 
typedef struct nodo {
   int informacion;
   char sCaracter [20];
   struct nodo *siguiente; 
} tipoNodo;

typedef tipoNodo *pNodo; 


/*
   Name: cola_vacia
   Parámetros: 
      inicio: Tipo apuntador al primer elemento de la cola
   Regresa:
   	  1: Si la cola está vacÃ­a
   	  0: Si la cola no está vacÃ­a
*/
int cola_vacia(pNodo inicio){
	if(!inicio){
		return 1;
	}else
		return 0;
}

/*
   Name: cola_llena
   Description: Revisar si hay espacio en la memoria.
   Regresa:
   	  1: Si la memoria está llena
   	  0: Si la memoria no está llena
*/

int cola_llena(){
	
	if ( (pNodo)malloc(sizeof(tipoNodo))== NULL )
		return 1;
	else
		return 0;

}
/*
   Name: ver_cabecera
   Description: Mostrar el primer elemento de la cola
   Parámetros: 
      cabecera: Tipo apuntador al primer elemento de la cola
*/
void ver_cabecera(pNodo cabecera){
	if(cola_vacia(cabecera)){
		fprintf(stderr, "La cola est%c vac%ca\n", 160, 161);
	} else 
		printf("El inicio de la cola es: %d\n", cabecera->informacion );
}


/*
	Name: ver_cola
	Copyright: 
	Author: ivan flores 
	Date: 23/09/21 23:36
	Description: see pasan por parametros los datos del usuario y se imprimen en pantall 
	el dato entero devuelve el ASCII pues no me fue posible cambiarlo a decimal
*/

void ver_cola(pNodo inicio,int eNumero, char sCaracter[20]){
	pNodo aux;
	
	if(cola_vacia(inicio)){
		fprintf(stderr, "La cola est%c vac%ca\n", 160, 161);	
	}else {
		aux = inicio;	
		printf("\nCola: ");
			while (aux != NULL){
	
			//	int c = (int)aux->informacion;//'aux->informacion';
			// aux->informacion;// los enteros los da en ASCII 
				printf("%i \n", aux->informacion);
				printf ("%s \n", aux ->sCaracter);
				aux = aux->siguiente;
			}	
		printf("\n");
	}
}

/*
	Name: enCola
	Copyright: 
	Author: Ivan Flores 
	Date: 23/09/21 23:34
	Description: inserta los datos que se ingresaron por el usuario 
	se pasan los datos que se ingresaron por el usuario 
*/


void enCola(pNodo *inicio, pNodo *final, int informacion , char sCaracter [20])
{
	pNodo nuevo;
    //pNodo nuevo2 ;
	//char cadena[20];
	if(cola_llena()){ 	
				fprintf(stderr, "Memoria llena.\n");
	}else {
		nuevo = (pNodo)malloc(sizeof(tipoNodo)); 
		nuevo->informacion = informacion;
	
		strcpy (nuevo->sCaracter,sCaracter );
		
   		nuevo->siguiente = NULL;
   	
		if(cola_vacia(*inicio)){
			*inicio = *final= nuevo;
		}else {
			(*final)->siguiente = nuevo;
			*final = nuevo;
		} 			
	}
}
/*
	Name: deCola
	Copyright: 
	Author: Ivan Flores 
	Date: 23/09/21 23:33
	Description: decola los elementos
*/



int deCola(pNodo *inicio){
	pNodo aux;
	int x;

	if(cola_vacia(*inicio)){
		fprintf(stderr, "La cola est%c vac%ca\n", 160, 161);
		return ERROR_VALOR;
	}

	aux = *inicio;
	x = (*inicio)->informacion;
	*inicio = (*inicio)->siguiente;
	
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
		//system("cls");
		printf("\t*******\n\t Colas\n\t*******\n");
		printf("1. Agregar\n2. Eliminar\n3. Ver Frente\n4. Ver Cola\n5. Salir\n");
		printf("Selecione una opci%cn: ", 162);
		scanf("%d", &eOpcion);

		switch(eOpcion){
			case 1: printf("Ingrese el nuevo elemento int : \n");
					scanf("%d", &eNumero);
						fflush(stdin);
					printf("Ingrese el nuevo elemento char: \n");
					scanf("%s", &sCaracter);
					
					enCola(&inicio, &final, eNumero, sCaracter);
					break;

			case 2: eNumero = deCola(&inicio);
					if (eNumero!= ERROR_VALOR)
						printf("Se elimin%c el elemento %d de la cola\n", 162, eNumero);
					break;

			case 3: ver_cabecera(inicio);
					getch();
					break;

			case 4: ver_cola(inicio,eNumero, sCaracter);
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
