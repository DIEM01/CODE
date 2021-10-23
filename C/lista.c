
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FALSE 0
#define   TRUE 1

typedef struct nodo {
   int edadmax;
   char tipo [20];
   char tarea[20];
   char tamano[20];
   struct nodo *liga; 
} tipoNodo;
typedef tipoNodo *nodo;
void crearinicio(nodo *inicio){
	nodo nuevo;
	system("cls");
    printf("Crear inicio\n");
    *inicio = (nodo) malloc (sizeof(tipoNodo));
    printf("Edad de la hormiga : \n");
	scanf("%d", &(*inicio)->edadmax);
	fflush(stdin);
	printf("Tipo de hormiga: \n");
	scanf("%s", &(*inicio)->tipo );
	printf("Tarea de la hormiga: \n");
	scanf("%s", &(*inicio)->tarea);
	printf("Tamaño promedio de la hormiga: \n");
	scanf("%s", &(*inicio)->tamano);
    (*inicio)->liga=NULL;
    int sn;
    do {
    	nuevo= (nodo) malloc (sizeof(tipoNodo));
    	printf("Edad de la hormiga : \n");
		scanf("%d", &nuevo->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &nuevo-> tipo);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &nuevo->tarea);
		printf("Tamaño promedio de la hormiga: \n");
		scanf("%s", &nuevo->tamano);
        nuevo->liga= *inicio;
        *inicio=nuevo;
        printf("\n¿Agregar otro elemento a la cola 1/0?\n");
        scanf("%d", &sn);
    } while (sn == 1); 
}

void crearfinal (nodo *inicio){
	nodo nuevo, aux;
	int sn;
	system("cls");
    printf("Crear al final\n");
    *inicio = (nodo) malloc (sizeof(tipoNodo));
    	printf("Edad de la hormiga : \n");
		scanf("%d", &(*inicio)->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &(*inicio)-> tipo);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &(*inicio)->tarea);
		printf("Tamaño promedio de la hormiga: \n");
		scanf("%s", &(*inicio)->tamano);
    (*inicio)->liga=NULL;
    aux=*inicio;
    do {
    	nuevo = (nodo) malloc (sizeof(tipoNodo));
    	printf("Edad de la hormiga : \n");
		scanf("%d", &(*inicio)->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &(*inicio)-> tipo);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &(*inicio)->tarea);
		printf("Tamaño promedio de la hormiga: \n");
		scanf("%s", &(*inicio)->tamano);
        nuevo->liga= NULL;
        aux->liga= nuevo;
        aux=nuevo;
        printf("\n¿Agregar otro elemento a la cola 1/0?\n");
        scanf("%d", &sn);
    } while (sn == 1); 
}

void verrecursivo(nodo inicio){
	if (inicio!= NULL ){
		printf("La edad de la hormiga : %d \n",inicio->edadmax);	
		printf("El tipo de hormiga:%s \n",inicio->tipo);
		printf("La tarea de la hormiga: %s \n",inicio->tarea);
		printf("El tamaño promedio de la hormiga: %s \n",inicio->tamano);
		verrecursivo(inicio -> liga);
	}
}

void veriterativo(nodo inicio){
	nodo aux;
	aux = inicio;
	while (aux != NULL){
		printf("La edad de la hormiga : %d \n",inicio->edadmax);	
		printf("El tipo de hormiga:%s \n",inicio->tipo);
		printf("La tarea de la hormiga: %s \n",inicio->tarea);
		printf("El tamaño promedio de la hormiga: %s \n",inicio->tamano);
		
        aux = aux -> liga ;
    }
}

void insertafinal(nodo inicio){
	system("cls");
    printf("Inserta al final\n");
	nodo nuevo, aux ;
	aux=inicio;
	while (aux->liga != NULL){
		aux=aux->liga;
	}
    nuevo= (nodo) malloc (sizeof(tipoNodo));
   	printf("Edad de la hormiga : \n");
	scanf("%d", &inicio->edadmax);
	fflush(stdin);
	printf("Tipo de hormiga: \n");
	scanf("%s", &inicio-> tipo);
	printf("Tarea de la hormiga: \n");
	scanf("%s", &inicio->tarea);
	printf("Tamaño promedio de la hormiga: \n");
	scanf("%s", &inicio->tamano);
    nuevo->liga=NULL;
    aux->liga=nuevo;
}
// Q es inicio, T es aux , x es nuevo 2

void insertaantes (nodo *inicio) {
	nodo nuevo, nuevo2, aux;
	int ref;
	int BAND=TRUE;
	nuevo=*inicio;
	printf("\n\nIngresa la referencia: ");
    scanf("%d", &ref);
	while (nuevo->edadmax != ref&&BAND==TRUE){
		if (nuevo->liga != NULL){
			aux=nuevo;
			nuevo=nuevo->liga;
		} 
		else {
			BAND=FALSE;
		}
	}
	if (BAND== TRUE ){
	    nuevo2 = (nodo) malloc (sizeof(tipoNodo));
	   	printf("Edad de la hormiga : \n");
		scanf("%d", &(*inicio)->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &(*inicio)-> tipo);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &(*inicio)->tarea);
		printf("Tamaño promedio de la hormiga: \n");
		scanf("%s", &(*inicio)->tamano);
        if (*inicio==nuevo){
        	nuevo2->liga=*inicio;
        	*inicio=nuevo2;
        }else{
        	aux->liga=nuevo2;
        	nuevo2->liga=nuevo;
        }

	}
}

void eliminaprimero (nodo *inicio){
	nodo nuevo;
	
	nuevo=*inicio;
	
	if (nuevo->liga != NULL){
		*inicio=nuevo->liga;
	}else {
		*inicio=NULL;
	}
	
	free(nuevo);
}

void eliminaultimo (nodo *inicio){
	nodo nuevo,aux;
	
	if ((*inicio)->liga==NULL){
		free(inicio);
		*inicio=NULL;
	}else {
		nuevo=*inicio;
		while (nuevo->liga != NULL){
			aux=nuevo;
			nuevo=nuevo->liga;
		}
		aux->liga=NULL;
		free(nuevo);
	}
}

void eliminaX (nodo *inicio, int nuevo2){
	nodo nuevo, aux;
	int BAND=TRUE;	

	nuevo=*inicio;
	
	while (nuevo->edadmax !=nuevo2 && BAND==TRUE){
		if (nuevo->liga != NULL){
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

void buscarrecursivo(nodo inicio, int nuevo2){
	if(inicio != NULL){
		if (inicio->edadmax == nuevo2){
			printf("La hormiga no fue encontrada\n");
		}else{
			buscarrecursivo(inicio->liga, nuevo2);
		}
	}else{
		printf("La hormiga no se encuentra en la lista\n");
	}
}

int main(){
	nodo inicio = NULL;
	int eOpcion = 0, edadmax, nuevo2;
char tipo[20],tarea[20];

	do{
		fflush(stdin);
		printf("\t*******\n Datos de las hormigas\n\t*******\n");
		printf("1. Crear inicio \n2. Crear final \n3. Ver iterativo \n4. Ver recursivo \n5. Insertar al final\n6. insertar antes\n7. Elimina primero\n8. Elimina ultimo\n9. Elimina Elemento\n10. Busca elemento\n11. Salir\n");
		printf("Selecione una opci%cn: ", 162);
		scanf("%d", &eOpcion);
		switch(eOpcion){
			case 1: crearinicio(&inicio);
					break;
			case 2: crearfinal (&inicio);
					break;
			case 3: veriterativo(inicio);
					break;
			case 4: verrecursivo (inicio) ;
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
	       		printf("\n\nIngresa la edad de la hormiga a eliminar: ");
				scanf("%d", nuevo2);
				eliminaX(&inicio, nuevo2);
				break; 
			case 10:
				printf("\n\nIngresa la hormiga a buscar: ");
				scanf("%d", &nuevo2);
				buscarrecursivo(inicio, nuevo2);
			 	break;
			default:
				printf("Error en la selecci%cn. \n", 162);
				break;
		} 

	} while(eOpcion != 11);
			
	getch();
	return 0;
}

