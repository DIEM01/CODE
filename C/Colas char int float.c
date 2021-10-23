
#include <stdio.h>
#include <stdlib.h>
typedef struct nodo {
   int iValor;
  char sValor [20];
   struct nodo *siguiente;
} tipoNodo;
typedef tipoNodo *pNodo;


 
void Push(int iValor,char sValor [20], pNodo *ultimo ) {
   pNodo nuevo;

   
   nuevo = (pNodo)malloc(sizeof(tipoNodo)); 
   nuevo->iValor = iValor;
   nuevo->siguiente = *ultimo;
   printf ("%s,",sValor );
 
   *ultimo = nuevo;
   
}



int Pop(pNodo *pila) {
   pNodo nodo; 
   int iValor;
   nodo = *pila;
   if(!nodo) return 0;
   
   *pila = nodo->siguiente; 
   iValor = nodo->iValor; 
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














