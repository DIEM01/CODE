/*****************************************************************************************************************
 				     UNIVERSIDAD NACIONAL AUTONOMA DE MEXICO
                	  FACULTAD DE CONTADURIA Y ADMINISTRACION

                       LICENCIATURA EN INFORMATICA
                           ESTRUCTURA DE DATOS
  Name: datos_personas.c 
  Description: Programa que permite la gestion de personas que seran vacunadas 
  				 2021-2  


******************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

typedef char sCaracter[30];

typedef struct nodo {
    int iEdad; 
    sCaracter sNombre;
	sCaracter sCurp;
	sCaracter sDireccion;
	sCaracter sFecha;
   struct nodo *liga; 
} tipoNodo; 
 
typedef tipoNodo *pNodo; 

/* Nombre: Funcion Leer_registros
   Descripcion:	Funcion que guarda los datos ingresados en un archivo .txt
   Fecha: 24/11/2021		
   Parametros: P Apuntador al primer elemento de la lista (apuntador a una estructura tipoNodo). 
*/
void escribir_registros( pNodo P ){
 	tipoNodo nodo;
 	char opcion;  
 	pNodo Q;
	FILE *arch;
	arch=fopen("elementos.txt","w");
	if(arch != NULL) {
		Q=P;
	 	rewind (arch);
		do {
			printf("%d ", Q->iEdad);
			nodo.iEdad= Q->iEdad;
			strcpy(nodo.sNombre, Q->sNombre );
			strcpy(nodo.sCurp , Q->sCurp );
			strcpy(nodo.sDireccion , Q->sDireccion );
			strcpy(nodo.sFecha , Q->sFecha);
			nodo.liga= NULL;
			fwrite(&nodo,sizeof(tipoNodo),1,arch);
			Q=Q->liga;
		} while (Q != NULL);
		fclose(arch);
	} else {
		fprintf(stderr, "No se pudo abrir el archivo.");
	}
}

/* Nombre: Funcion Leer_registros
   Descripcion:	Funcion que lee los datos ingresados en un archivo .txt
   Fecha: 24/11/2021		
   Parametros: P Apuntador al primer elemento de la lista (apuntador a una estructura tipoNodo). 
*/
void leer_registros (pNodo *P) {
  	tipoNodo nodo;
  	pNodo Q, T;
  	int tamanio=sizeof(tipoNodo);
	FILE *arch;
	arch=fopen("elementos.txt","r");
	if(arch != NULL) {
		rewind (arch);
	    if (fread (&nodo, tamanio, 1, arch) != 0 ){
	    	*P = (pNodo) malloc (sizeof(tipoNodo));
	    	(*P)->iEdad=nodo.iEdad;
	    	strcpy((*P)->sNombre , nodo.sNombre);
	    	strcpy((*P)->sCurp , nodo.sCurp);
			strcpy((*P)->sDireccion , nodo.sDireccion);
			strcpy((*P)->sFecha , nodo.sFecha);
	    	(*P)->liga=NULL;
	    	T=*P;
			printf("La edad es: %d\n", nodo.iEdad);
			printf("El nombre es:%s \n",nodo.sNombre);
			printf("El CURP es: %s \n",nodo.sCurp);
			printf("La dirreccion es: %s \n",nodo.sDireccion);
			printf("La fecha de vacunacion es: %s \n",nodo.sFecha);
		}
	   	while (fread (&nodo, tamanio, 1, arch) != 0 ){
	   	   	Q = (pNodo) malloc (sizeof(tipoNodo));
			Q->iEdad=nodo.iEdad;
			strcpy(Q->sNombre, nodo.sNombre );
			strcpy(Q->sCurp , nodo.sCurp);
			strcpy(Q->sDireccion , nodo.sDireccion);
			strcpy(Q->sFecha , nodo.sFecha);       
			Q->liga= NULL;
	        T->liga=Q;
	        T=Q;
			printf("La edad es: %d\n", nodo.iEdad);
			printf("El nombre es:%s \n",nodo.sNombre);
			printf("El CURP es: %s \n",nodo.sCurp);
			printf("La dirreccion es: %s \n",nodo.sDireccion);
			printf("La fecha de vacunacion es: %s \n",nodo.sFecha);
	   	}
		fclose(arch);	
	} else {
		fprintf(stderr, "No hay archivo de lectura");
	}
}

/* Nombre: Funcion creainicio
   Descripcion:	Funcion que crea una lista y agrega los datos 
   Fecha: 24/11/2021		
   Parametros: P Apuntador al primer elemento de la lista (apuntador a una estructura tipoNodo). 
*/
void creainicio(pNodo *P){
	pNodo Q;
	int opc;
	system("cls");
    printf("\n\t\t\tCREA INICIO\n");
    *P = (pNodo) malloc (sizeof(tipoNodo));
    printf("Ingresa la edad: \n");
	scanf("%d", &(*P)->iEdad);
	fflush(stdin);
	printf("Ingresa el nombre: \n");
	gets((*P)->sNombre);	fflush(stdin);
	printf("Ingresa el CURP: \n");
	gets((*P)->sCurp);	fflush(stdin);
	printf("Ingresa la direccion: \n");
	gets((*P)->sDireccion); fflush(stdin);
	printf("Ingresa la fecha de vacunacion: \n");
	gets((*P)->sFecha);
    (*P)->liga=NULL;
    do {
    	Q = (pNodo) malloc (sizeof(tipoNodo));fflush(stdin);
    	printf("Ingresa la edad: \n");
		scanf("%d", &Q->iEdad);
		fflush(stdin);
		printf("Ingresa el nombre: \n");
		gets( Q->sNombre);	fflush(stdin);
		printf("Ingresa el CURP: \n");
		gets( Q->sCurp);	fflush(stdin);
		printf("Ingresa la direccion: \n");
		gets( Q->sDireccion); fflush(stdin);
		printf("Ingresa la fecha de vacunacion: \n");
		gets( Q->sFecha);fflush(stdin);
        Q->liga= *P;
        *P=Q;
        printf("\nDesea agregar otro elemento 0/1\n");
        scanf("%d", &opc);
    } while (opc == 1); 
}
/* Nombre: Funcion recorreiterativo
   Descripcion:Funcion que imprime los elementos de la lista de personas registradas 
   Fecha: 24/11/2021
   Parametros: P Apuntador al primer elemento de la lista (apuntador a una estructura tipoNodo). 
*/
void recorreiterativo (pNodo P){
	pNodo Q;
	int c=1;
	Q=P;
	do {
		printf ("Persona No. %d \n", c);
		printf("El nombre es: %s " ,Q->sNombre);
		printf("El CURP es: %s  ",Q->sCurp);
		printf(" La dirreccion es: %s \n",Q->sDireccion);
		c++;
      	Q=Q->liga;
	} while (Q != NULL);
}
/* Nombre: Funcion insertafinal
   
   Descripcion:Funcion que agrega un elemento a la lista 
   Fecha: 24/11/2021
   Parametros: P Apuntador al primer elemento de la lista (apuntador a una estructura tipoNodo). 
*/
void insertafinal(pNodo P){
	
	system("cls");
    printf("\n\t\t\tINSERTE AL FINAL\n");
	pNodo Q, T;
	T=P;
	while (T->liga != NULL){
		T=T->liga;
	}
    Q = (pNodo) malloc (sizeof(tipoNodo));
    printf("Ingresa la edad: \n");
	scanf("%d", &Q->iEdad);
	fflush(stdin);
	printf("Ingresa el nombre: \n");
	gets(Q->sNombre);	fflush(stdin);
	printf("Ingresa el CURP: \n");
	gets(Q->sCurp);	fflush(stdin);
	printf("Ingresa la direccion: \n");
	gets(Q->sDireccion);
	printf("Ingresa la fecha de vacunacion: \n");
	gets(Q->sFecha);
    Q->liga=NULL;
    T->liga=Q;
}
/* Nombre: Funcion eliminaX
   Descripcion:Funcion que elimina los datos de una persona de la estructura
   Fecha: 24/11/2021
   Parametros: 
		P: Apuntador al primer elemento de la lista (apuntador a una estructura tipoNodo). 
		lt: valor a eliminar
*/

void eliminaX (pNodo *P, sCaracter lt){
	pNodo Q, T;
	int BAND=TRUE;	

	Q=*P;
	
	while (strcmp(Q->sCurp,lt) && BAND==TRUE){
		if (Q->liga != NULL){
			T=Q;
			Q=Q->liga;
		} else {
			BAND=FALSE;
		}
	}
	
	if (BAND==FALSE){
		printf("El elemento no fue encontrado");
	}else {
		if (*P==Q){
			*P=Q->liga;
		} else {
			T->liga=Q->liga;
		}
		free(Q);
	}	
}
/* Nombre: Funcion buscarrecursivo
   Descripcion:Funcion que busca los datos de las persoans de forma recursiva
   Fecha: 24/11/2021
   Parametros: 
		P: Apuntador al primer elemento de la lista (apuntador a una estructura tipoNodo). 
		lt: valor a buscar
*/
void buscarrecursivo(pNodo P, sCaracter lt){
	if(P != NULL){
		sCaracter H;
		strcpy(H, P->sCurp);
		if (strcmp(H,lt) != 0){
			buscarrecursivo(P->liga, lt);
			}else{
			printf("El elemento fue encontrado\n");
			printf("La edad es: %d \n",P->iEdad);	
			printf("El nombre es:%s \n",P->sNombre);
			printf("El CURP es: %s \n",P->sCurp);
			printf("La dirreccion es: %s \n",P->sDireccion);
			printf("La fecha de vacunacion es: %s \n",P->sFecha);// va a mostrar los datos de una persona 
		
		}
	}else{
		printf("El elemento no se encuentra en la lista\n");
	}
}
/* Nombre: Funcion Ordenamiento_Burbuja
   
   Descripcion:Funcion que ordena los elementos de la lista 
   Fecha: 24/11/2021
   Parametros: 
		P: Apuntador al primer elemento de la lista (apuntador a una estructura tipoNodo). 
		
*/
void Ordenamiento_Burbuja(pNodo P){
	pNodo aux, aux2;
	int temp;
	if(P != NULL){
		aux = P;
		while(aux != NULL){
			aux2 = aux->liga;
			while(aux2 != NULL){
				if(aux->iEdad >= aux2->iEdad){
					temp = aux->iEdad;
					aux->iEdad = aux2->iEdad;
					aux2->iEdad= temp;	
				}
				aux2 = aux2->liga;
			}
			aux = aux->liga;
		}	
	}else{	
		printf("La lista esta vacia.\n");
	}
}

main(){
	pNodo P = NULL;
	int opcion, X;
	sCaracter lt;
	int prim;	
	do{
		fflush(stdin);
		printf("\t*******\n%cComo deseas ingresar?\n\t*******\n",168);
		printf("\n 1) Administrador");
		printf("\n 2) Usuario");
		printf("\n 3) Salir");
		printf("\n Selecione una opci%cn: ", 162);
		scanf("%d", &prim);
		switch (prim){
			case 1: 
				do{
	    			system ("cls");
					printf ("\n\t\t\tLISTA\n");
	    			printf ("\n 1) Crear una lista de personas");
	    			printf ("\n 2) Muestra la lista de las personas");
	    			printf ("\n 3) Agrega una persona a la lista");
	    			printf ("\n 4) Elimina una persona de la lista");
	    			printf ("\n 5) Busca una persona en la lista");
					printf ("\n 6) Ordenar las personas");
	    			printf ("\n 7) Guardar los datos");
					printf ("\n 8) Cargar los datos");
	    			printf ("\n 0) Regresa al menu principal");
	    			printf ("\n Seleccione una opcion: ");
					scanf ("%d", &opcion);
					switch (opcion){
						case 1:
							creainicio(&P);
							break;
					
						case 2:
							recorreiterativo(P);
							printf("\n");
		        		   	break;
				
						case 3:
							insertafinal(P);
							break;
					
						case 4:
							printf("\n\nIngresa el elemento a eliminar: ");
							fflush(stdin);
							scanf("%s", &lt);
							eliminaX(&P, lt);
							break;
						case 5:
							printf("\n\nIngresa el elemento a buscar: ");
							fflush(stdin);
							scanf("%s", &lt);
							buscarrecursivo(P, lt);
							break;
						case 6:
							Ordenamiento_Burbuja(P);
							printf("Las personas estan ordenadas:\n");
		     				break;
						case 7:
							printf("\n\nGuardar datos de la lista. ");
							escribir_registros( P );
							break;
						case 8:
							printf("\n\nCargar datos de la lista. ");
							printf("\n\nLos elementos de la lista se reemplazar�n. ");
							leer_registros( &P );
							break;
						case 0:
							break;
						default:
							printf ("\n Opcion no valida. Intenta de nuevo.\n\n");
							break;
					}
						system("pause");
				} while (opcion);
				break;
			case 2: 
				printf ("Ingresa tu CURP");fflush(stdin);
				scanf("%s", &lt);fflush(stdin);
				buscarrecursivo(P, lt);fflush(stdin);
				break;		
			default:
				printf("Error en la selecci%cn. \n", 162);
				break;	
		}
	} while (prim !=3);
	return 0;

}