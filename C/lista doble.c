/*Nombre : Lista doble
Descripcion : programam que crea una lista doble con una estructura de datos
Autor : Ivan Flores Moran 
*/
#include<stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct nodo {
      int edadmax;
   char tipo [20];
   char tarea[20];
   char tamano[20];   
	struct nodo *anterior; 
	struct nodo *siguiente;
} tipoNodo; 
 
typedef tipoNodo *nodo; 


/* Nombre: crearinicio
   Descripcion:	Funcion que crea una lista y agrega los elementos por el inicio
*/
void crearinicio(nodo *inicio){
	nodo nuevo;
	int sn;
	
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
	printf("Tamao promedio de la hormiga: \n");
	scanf("%s", &(*inicio)->tamano);
    (*inicio)->anterior=NULL;
    (*inicio)->siguiente=NULL;
    do {
    	nuevo = (nodo) malloc (sizeof(tipoNodo));
    	 printf("Edad de la hormiga (meses): \n");
		scanf("%d", &nuevo->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &nuevo-> tipo);fflush(stdin);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &nuevo->tarea);fflush(stdin);
		printf("Tama%o promedio de la hormiga: \n", 162);
		scanf("%s", &nuevo->tamano);
        nuevo->siguiente=*inicio;
        nuevo->anterior=NULL;
        (*inicio)->anterior=nuevo;
        *inicio=nuevo;
        printf("\nAgregar otro elemento a la cola 1/0?\n");
        scanf("%d", &sn);
    } while (sn == 1); 
}

/* Nombre: crearfinal
   Descripcion:	Funcion que crea una lista y agrega los elementos por el final.
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
	printf("Tama%o promedio de la hormiga: \n", 162);
	scanf("%s", &(*inicio)->tamano);
    (*inicio)->siguiente=NULL;
    (*inicio)->anterior=NULL;
    aux=*inicio;

	do {
    	nuevo = (nodo) malloc (sizeof(tipoNodo));
    	printf("Edad de la hormiga (meses): \n");
		scanf("%d", &nuevo->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &nuevo-> tipo);fflush(stdin);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &nuevo->tarea);fflush(stdin);
		printf("Tama%o promedio de la hormiga: \n", 162);
		scanf("%s", &nuevo->tamano);
        nuevo->siguiente=NULL;
        nuevo->anterior=*inicio;
        aux->siguiente=nuevo;
        aux=nuevo;
        printf("\nAgregar otro elemento a la cola 1/0?\n");
        scanf("%d", &sn);
    } while (sn == 1); 
}

/* Nombre: veriterativo
   Descripcion:Funcion que imprime los elementos de una lista iterativamente. 
*/
void veriterativo (nodo inicio){
	nodo aux;
	aux=inicio;
	do {
		printf("La edad de la hormiga (meses): %d \n",aux->edadmax);	
		printf("El tipo de hormiga:%s \n",aux->tipo);
		printf("La tarea de la hormiga: %s \n",aux->tarea);
		printf("El tama�o promedio de la hormiga: %s \n",aux->tamano);
		aux=aux->siguiente;
	} while (aux != NULL);
}

/* Nombre: recorreiterativoinv
   Descripcion:Funcion que imprime los elementos de una lista iterativamente.
*/
void recorreiterativoinv (nodo inicio){
	nodo aux;
	aux=inicio;
	while (aux->siguiente != NULL){
		aux=aux->siguiente;
	}
	do {
		printf("La edad de la hormiga (meses): %d \n",aux->edadmax);	
		printf("El tipo de hormiga:%s \n",aux->tipo);
		printf("La tarea de la hormiga: %s \n",aux->tarea);
		printf("El tamaño promedio de la hormiga: %s \n",aux->tamano);
		aux=aux->anterior;
	} while (aux != NULL);
}


/* Nombre: Funcion recorrecursivo
   Descripcion:Funcion que imprime los elementos de una lista recursivamente.
*/
void verrecursivo (nodo inicio){
	if (inicio!=NULL){
	printf("La edad de la hormiga (meses): %d \n",inicio->edadmax);	
	printf("El tipo de hormiga:%s \n",inicio->tipo);
	printf("La tarea de la hormiga: %s \n",inicio->tarea);
	printf("El tama�o promedio de la hormiga: %s \n",inicio->tamano);
		verrecursivo(inicio->siguiente);
	}
}

/* Nombre: Funcion insertafinal
   Descripcion:Funcion que agrega un elemento al final de la lista.
*/
void insertafinal(nodo inicio){
	system("cls");
    printf("Inserta al final\n");
	nodo nuevo, aux;
	aux=inicio;
	while (aux->siguiente != NULL){
		aux=aux->siguiente;
	}
    nuevo = (nodo) malloc (sizeof(tipoNodo));
    printf("Edad de la hormiga (meses): \n");
	scanf("%d", &nuevo->edadmax);
	fflush(stdin);
	printf("Tipo de hormiga: \n");
	scanf("%s", &nuevo-> tipo);fflush(stdin);
	printf("Tarea de la hormiga: \n");
	scanf("%s", &nuevo->tarea);fflush(stdin);
	printf("Tama�o promedio de la hormiga: \n");
	scanf("%s", &nuevo->tamano);
    nuevo->siguiente=NULL;
    nuevo->anterior=aux;
    aux->siguiente=nuevo;
}


/* Nombre: insertaantes
   Descripcion:Funcion que agrega un elemento a la lista antes de un elemento tomado como referencia.
*/
void insertaantes (nodo *inicio) {
	nodo nuevo, nuevo2, aux;
	int ref;
	int BAND=TRUE;
	nuevo=*inicio;
	printf("\n\nIngresa la referencia: ");
    scanf("%d", &ref);
	while (nuevo->edadmax != ref && BAND==TRUE){
		if (nuevo->siguiente != NULL){
			aux=nuevo;
			nuevo=nuevo->siguiente;
		} else {
			BAND=FALSE;
		}
	}
	if (BAND == TRUE ){
	    nuevo2 = (nodo) malloc (sizeof(tipoNodo));
	    printf("Edad de la hormiga (meses): \n");
		scanf("%d", &(nuevo2)->edadmax);
		fflush(stdin);
		printf("Tipo de hormiga: \n");
		scanf("%s", &(nuevo2)-> tipo);fflush(stdin);
		printf("Tarea de la hormiga: \n");
		scanf("%s", &(nuevo2)->tarea);fflush(stdin);
		printf("Tama�o promedio de la hormiga: \n");
		scanf("%s", &(nuevo2)->tamano);
        if (*inicio==nuevo){
        	nuevo2->anterior=NULL;
        	nuevo2->siguiente=*inicio;
        	(*inicio)->anterior=nuevo2;
        	*inicio=nuevo2;
        }else{
        	aux->siguiente=nuevo2;
        	nuevo2->anterior=aux;
        	nuevo2->siguiente=nuevo;
        	nuevo->anterior=nuevo2;
        }
	}
}


/* Nombre: eliminaprimero 
   Descripcion:Funcion que elimina el primero elemento de una lista.
*/

void  eliminaprimero  (nodo *inicio){
	nodo nuevo;
	nuevo=*inicio;
	if (nuevo->siguiente != NULL){
		*inicio=nuevo->siguiente;
		(*inicio)->anterior=NULL;
	}else {
		*inicio=NULL;
	}
	free(nuevo);
}


/* Nombre: eliminaultimo
   Descripcion:Funcion que elimina el ultimo elemento de una lista.
*/
void eliminaultimo (nodo *inicio){
	nodo nuevo,aux;
	if ((*inicio)->siguiente==NULL){
		free(inicio);
		*inicio=NULL;
	}else {
		nuevo=*inicio;
		while (nuevo->siguiente != NULL){
			aux=nuevo;
			nuevo=nuevo->siguiente;
		}
		aux->siguiente=NULL;
		free(nuevo);
	}
}

/* Nombre: Funcion eliminaX
   Descripcion:Funcion que elimina un elemento dado de una lista.
*/
void eliminaX (nodo *inicio, int dato){
	nodo nuevo, aux;
	int BAND=TRUE;	
	nuevo=*inicio;
	while (nuevo->edadmax !=dato && BAND==TRUE){
		if (nuevo->siguiente != NULL){
			aux=nuevo;
			nuevo=nuevo->siguiente;
		} else {
			BAND=FALSE;
		}
	}
	if (BAND==FALSE){
		printf("La hormiga no fue encontrada");
	}else {
		if (*inicio==nuevo){
			*inicio=nuevo->siguiente;
			(*inicio)->anterior= NULL;
		} else {
			aux->siguiente=nuevo->siguiente;
			(nuevo->siguiente)->anterior=aux;
		}
		free(nuevo);
	}	
}


/* Nombre: Funcion buscarrecursivo
   Descripcion:Funcion que busca un elemento en una lista de forma recursiva.
*/
void buscarrecursivo(nodo inicio, int dato){
	if(inicio != NULL){
		if (inicio->edadmax == dato){
		printf("Los datos de la hormiga no fueron encontrados\n");
		}else{
			buscarrecursivo(inicio->siguiente, dato);
		}
	}else{
			printf("La hormiga no se encuentra en la lista\n");
	}
}
/*
Nombre: Funcion main 
Descripción: munu que despliega las funciones que realiza el programa 
*/

main(){
nodo inicio = NULL;
int eOpcion = 0, dato, op;
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
			printf("1. Crear inicio \n2. Crear final \n3. Ver iterativo \n4. Ver recursivo \n5. Insertar al final\n6. insertar antes\n7. Elimina primero\n8. Elimina ultimo\n9. Elimina Elemento\n10. Busca elemento\n11. Recorre iterativo inverso\n12. salir\n");
			printf("Selecione una opci%cn: ", 162);
			scanf("%d", &eOpcion);
			switch (eOpcion){
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
					printf("\n\nIngresa la edad de la hormiga a eliminar (meses): ");
					scanf("%d", &dato);
					eliminaX(&inicio, dato);
					break;
				case 10:
					printf("\n\nIngresa la hormiga a buscar: ");
					scanf("%d", &dato);
					buscarrecursivo(inicio, dato);
					break;
				case 11:
               		recorreiterativoinv(inicio);
               		break;
				default:
					printf("Error en la selecci%cn. \n", 162);
					break;
			}
		} while (eOpcion !=12);
	return 0;	
}
