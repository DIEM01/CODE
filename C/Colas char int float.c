
//directivas a l preposeador 
#include <stdio.h>
#include <stdlib.h>
typedef struct nodo {
   int iValor;
  char sValor [20];
   struct nodo *siguiente;// es un aputnaador a un nodo q
} tipoNodo;
typedef tipoNodo *pNodo;


 
void Push(int iValor,char sValor [20], pNodo *ultimo ) {
   pNodo nuevo;
   /* Crear un nodo nuevo */
   
   nuevo = (pNodo)malloc(sizeof(tipoNodo)); /* Añadimos la pila a continuaciÓn del nuevo nodo */
   nuevo->iValor = iValor;
   nuevo->siguiente = *ultimo;
   printf ("%s,",sValor );
   /* Ahora, el comienzo de nuestra pila es en nuevo nodo */
   *ultimo = nuevo;
   
}



int Pop(pNodo *pila) {
   pNodo nodo; /* variable auxiliar para manipular nodo */
   int iValor;  /* variable auxiliar para retorno */
   nodo = *pila;/* Nodo apunta al primer elemento de la pila */
   if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   /* Asignamos a pila toda la pila menos el primer elemento */
   *pila = nodo->siguiente; /* Guardamos el valor de retorno */
   iValor = nodo->iValor;  /* Borrar el nodo */
   free(nodo);
   return iValor;
} 


int main() {
   pNodo pila = NULL;
   Push(10,"Diez",  &pila);
   Push(20,"Veinte",&pila);
   Push(30,"Treinta", &pila);
   printf("%d, ", Pop(&pila));
   printf("%d, ", Pop(&pila));
   Push(40,"Cuarenta", &pila);
   Push(50,"Cicuenta", &pila);
   printf("%d, ", Pop(&pila));
   printf("%d, ", Pop(&pila));
   Push(60,"Sesenta", &pila);
   printf("%d, ", Pop(&pila));
   printf("%d\n", Pop(&pila));
   printf("%d\n", Pop(&pila));
   return 0;
}














