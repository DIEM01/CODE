
#include<stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct nodo {
   int edadmax;
   char tipo [20];
   char tarea[20];
   char tamano[20];   
   struct nodo *liga; 
} tipoNodo; 
typedef tipoNodo *nodo;
/*
	Name:crearinicio 
	Description: comienza a crear datos desde el inicio de la lista 
*/

void crearinicio(nodo *inicio){
	nodo nuevo, Ultimo;
	system("cls");
    printf("Crear inicio\n");
    *inicio = (nodo) malloc (sizeof(tipoNodo));
    printf("Edad de la hormiga (meses): \n");
	scanf("%d", &(*inicio)->edadmax);
	fflush(stdin);
	printf("Tipo de hormiga: \n");
	scanf("%s", &(*inicio)->tipo );	fflush(stdin);
	printf("Tarea de la hormiga: \n");
	scanf("%s", &(*inicio)->tarea);	fflush(stdin);
	printf("Tamaño promedio de la hormiga: \n");
	scanf("%s", &(*inicio)->tamano);
    (*inicio)->liga=*inicio;
    Ultimo= *inicio;
    int sn;
    do {
    	nuevo = (nodo) malloc (sizeof(tipoNodo));
        printf("Edad de la hormiga (meses): \n");
		scanf("%d", &nuevo->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &nuevo-> tipo);fflush(stdin);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &nuevo->tarea);fflush(stdin);
		printf("Tamaño promedio de la hormiga: \n");
		scanf("%s", &nuevo->tamano);
		nuevo -> liga = *inicio;
        *inicio=nuevo;
        Ultimo->liga = *inicio;
        printf("\n¿Agregar otro elemento a la cola 1/0?\n");
        scanf("%d", &sn);
    } while (sn == 1); 
}
/*
	Name:crearfinal
	Description: comienza a crear datos desde el fin de la lista 
*/

void crearfinal (nodo *inicio){
	nodo nuevo, aux;
	int sn;
	system("cls");
    printf("Crear al final\n");
    *inicio = (nodo) malloc (sizeof(tipoNodo));
    printf("Edad de la hormiga (meses): \n");
	scanf("%d", &(*inicio)->edadmax);
	fflush(stdin);
	printf("Tipo de hormiga: \n");
	scanf("%s", &(*inicio)-> tipo);fflush(stdin);
	printf("Tarea de la hormiga: \n");
	scanf("%s", &(*inicio)->tarea);fflush(stdin);
	printf("Tamaño promedio de la hormiga: \n");
	scanf("%s", &(*inicio)->tamano);
    (*inicio)->liga=*inicio;
    aux=*inicio;
    do {
    	nuevo = (nodo) malloc (sizeof(tipoNodo));
        printf("Edad de la hormiga (meses): \n");
		scanf("%d", &(*inicio)->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &(*inicio)-> tipo);fflush(stdin);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &(*inicio)->tarea);fflush(stdin);
		printf("Tamaño promedio de la hormiga: \n");
		scanf("%s", &(*inicio)->tamano);
        nuevo->liga= *inicio;
        aux->liga=nuevo;
        aux=nuevo;
        printf("\n¿Agregar otro elemento a la cola 1/0?\n");
        scanf("%d", &sn);
    } while (sn == 1); 
}
/*
	Name:veriterativo
	Description: muestra los datos recabados de forma iterativa
*/

void veriterativo(nodo inicio){
	nodo aux;
	aux=inicio;
	do {
		printf("La edad de la hormiga (meses): %d \n",aux->edadmax);	
		printf("El tipo de hormiga:%s \n",aux->tipo);
		printf("La tarea de la hormiga: %s \n",aux->tarea);
		printf("El tamaño promedio de la hormiga: %s \n",aux->tamano);
		aux=aux->liga;
	} while (aux != inicio);	
}
/*
	Name:verrecursivo
	Description: Muestra los datos recabados de forma recursiva
*/

void verrecursivo  (nodo inicio, nodo Inicio2){
	printf("La edad de la hormiga (meses): %d \n",inicio->edadmax);	
	printf("El tipo de hormiga:%s \n",inicio->tipo);
	printf("La tarea de la hormiga: %s \n",inicio->tarea);
	printf("El tamaño promedio de la hormiga: %s \n",inicio->tamano);
	if (inicio->liga!=Inicio2){
		verrecursivo (inicio->liga,Inicio2);
	}
}
/*
	Name:inserta final
	Description: recaba datos de la terminal y los inserta al final de la lista  
*/

void insertafinal(nodo inicio){
	system("cls");
    printf("Inserta al final\n");
	nodo nuevo, aux;
	aux=inicio;
	while (aux->liga != inicio){
		aux=aux->liga;
	}
    nuevo = (nodo) malloc (sizeof(tipoNodo));
   	printf("Edad de la hormiga (meses): \n");
	scanf("%d", &nuevo->edadmax);
	fflush(stdin);
	printf("Tipo de hormiga: \n");
	scanf("%s", &nuevo-> tipo);fflush(stdin);
	printf("Tarea de la hormiga: \n");
	scanf("%s", &nuevo->tarea);fflush(stdin);
	printf("Tamaño promedio de la hormiga: \n");
	scanf("%s", &nuevo->tamano);
    nuevo->liga=inicio;
    aux->liga=nuevo;
}
/*
	Name:insertaantes
	Description: recibe un dato por referencia, recaba datos y los inserta antes del dato de referencia 
*/

void insertaantes (nodo *inicio) {
	nodo nuevo, nuevo2, aux, Ultimo;
	int ref;
	int BAND=TRUE;
	Ultimo=aux=nuevo=*inicio;
	while (Ultimo->liga != *inicio){
		Ultimo=Ultimo->liga;
	}
	printf("\n\nIngresa la referencia: ");
    scanf("%d", &ref);
	while (nuevo->edadmax != ref&&BAND==TRUE){
		if (nuevo->liga != *inicio){
			aux=nuevo;
			nuevo=nuevo->liga;
		} else {
			BAND=FALSE;
		}
	}
	if (BAND== TRUE ){
	    nuevo2 = (nodo) malloc (sizeof(tipoNodo));
	   	printf("Edad de la hormiga (meses): \n");
		scanf("%d", &(nuevo2)->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &(nuevo2)-> tipo);fflush(stdin);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &(nuevo2)->tarea);fflush(stdin);
		printf("Tamaño promedio de la hormiga: \n");
		scanf("%s", &(nuevo2)->tamano);
        if (*inicio==nuevo){
        	nuevo2->liga=*inicio;
        	*inicio=nuevo2;
        	Ultimo ->liga = *inicio;
        }else{
        	aux->liga=nuevo2;
        	nuevo2->liga=nuevo;
        }
	}
}
/*
	Name:eliminaprimero
	Description: Elimina el primer nodo de la lista
*/

void eliminaprimero (nodo *inicio){
	nodo nuevo, Ultimo;
	Ultimo=nuevo=*inicio;
	while (Ultimo->liga != *inicio){
		Ultimo=Ultimo->liga;
	}
	if (nuevo->liga != *inicio){
		*inicio=nuevo->liga;
		Ultimo->liga= *inicio;
	}else {
		*inicio=NULL;
	}
	free(nuevo);
}
/*
	Name:eliminaultimo
	Description: elimina  el ultimo nodo de la lista 
*/

void eliminaultimo (nodo *inicio){
	nodo nuevo,aux;
	if ((*inicio)->liga==*inicio){
		free(inicio);
		*inicio=NULL;
	}else {
		nuevo=*inicio;
		while (nuevo->liga != *inicio){
			aux=nuevo;
			nuevo=nuevo->liga;
		}
		aux->liga=*inicio;
		free(nuevo);
	}
}
/*
	Name:eliminax
	Description: elimina el nodo que se le pase por referencia 
*/

void eliminaX (nodo *inicio, int dato){
	nodo nuevo, aux;
	int BAND=TRUE;	
	nuevo=*inicio;
	if ( (*inicio)->edadmax == dato)
		eliminaprimero(&(*inicio));
	else {
		while (nuevo->edadmax !=dato && BAND==TRUE){
			if (nuevo->liga != *inicio){
				aux=nuevo;
				nuevo=nuevo->liga;
			} else {
				BAND=FALSE;
			}
		}
		if (BAND==FALSE){
			printf("La hormiga no fue encontrada");
		}else {
			if (*inicio==nuevo){
    			*inicio=nuevo->liga;
			} else {
				aux->liga=nuevo->liga;
			}
			free(nuevo);
		}	
	}
}
/*
	Name:buscarecursivo
	Description: busta un nodo de forma recursiva por referencia 
*/

void buscarrecursivo(nodo inicio, nodo Inicio2, int dato){
	if (inicio->edadmax == dato){
		printf("Los datos de hormiga no fue encontrada\n");
   	}else{
		if(inicio->liga != Inicio2){
			buscarrecursivo(inicio->liga, Inicio2, dato);
		} else {
			printf("La hormiga no se encuentra en la lista\n");
		}
	}
}

main(){
nodo inicio = NULL;
int eOpcion = 0, edadmax, dato, op;
char tipo[20],tarea[20];
		do{
			/*
		Description: valida si inicio esta apuntando a inicio, en caso de que este apuntando a inicio 
		no puese salir del bucle 
			*/
			while (inicio == NULL){	int prim;
				fflush(stdin);
				printf("\t*******\n Datos de las hormigas\n\t*******\n");
				printf("1. Crear inicio \n2. Crear final \n");
				printf("Selecione una opci%cn: ", 162);
				scanf("%d", &prim);
		 		switch (prim){
					case 1: crearinicio(&inicio);
						break;
					case 2: crearfinal (&inicio);
						break;		
					default:
						printf("Error en la selecci%cn. \n", 162);
						break;	
		    	}
			}
    		fflush(stdin);
			printf("\t*******\n Datos de las hormigas\n\t*******\n");
			printf("1. Crear inicio \n2. Crear final \n3. Ver iterativo \n4. Ver recursivo \n5. Insertar al final\n6. insertar antes\n7. Elimina primero\n8. Elimina ultimo\n9. Elimina Elemento\n10. Busca elemento\n11. Orderdenar edad por metodo burbuja \n12. salir\n");
			printf("Selecione una opci%cn: ", 162);
			scanf("%d", &eOpcion);
			switch (eOpcion){
				case 1: crearinicio(&inicio);
					break;
				case 2: crearfinal (&inicio);
					break;
				case 3: veriterativo(inicio);
					break;
				case 4: verrecursivo (inicio, inicio) ;
					break;
				case 5: insertafinal (inicio);
		         	break;
				case 6: insertaantes(&inicio);
		        	break;
				case 7: eliminaprimero(&inicio);
			        break;
				case 8: eliminaultimo(&inicio);
					break;
				case 9:
					printf("\n\nIngresa la edad de la hormiga a eliminar (meses): ");
					scanf("%d", &dato);
					eliminaX(&inicio, dato);
					break;
				case 10:
					printf("\n\nIngresa la hormiga a buscar: ");
					scanf("%d", &dato);
					buscarrecursivo(inicio, inicio, dato);
					break;
				
				default:
					printf("Error en la selecci%cn. \n", 162);
					break;
			}
		} while (eOpcion !=12);
	return 0;	
}
