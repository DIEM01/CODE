#include<iostream>
#include<conio.h>
using namespace std;

int main() {
   int aux, form;
   int a[20];
   cout << "Para ordenar los numeros de forma acendente presiona 1 "<<endl;
   cout<< "Para ordenar los numeros de forma decendente presiona 2 "<<endl;
 cin>> form;
if (form == 1){
   for(int x = 0; x < 20; x++) {
      cout << "Ingresa el numero " << x << " de la serie: ";
      cin >> a[x];}
   for(int z = 1; z < 20; ++z) {
      for(int v = 0; v < (20 - z); v++) {
         if(a[v] > a[v+1]){
            aux = a[v];
            a[v] = a[v + 1];
            a[v + 1] = aux;
            }}}
   cout << "Numeros " << endl;
   for(int w = 0; w < 20; w++) {
      cout  << a[w] << endl;
   }} 
if(form == 2){
	for(int x = 0; x < 20; x++) {
      cout << "Ingresa el numero " << x << " de la serie: ";
      cin >> a[x];}
	for(int z = 1; z < 20; ++z) {
      for(int v = 0; v < (20 - z); v++) {
         if(a[v] < a[v+1]){
            aux = a[v];
            a[v] = a[v + 1];
            a[v +1] = aux;
            }}}
   cout << "Numeros" << endl;
   for(int w = 0; w < 20; w++) {
      cout << a[w] << endl;
}}
   return 0;
}
