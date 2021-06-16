#include <iostream> //  necesarios para el cin y cout 
using namespace std; 

int main () 
{
 int numero, unidades, decenas, centenas, millares;
 
 cout<< "Ingrese un numero"<<endl;
 cin>> numero;

 /*Esto se hace para separar el numero,
 tomen como ejemplo el numero 2103, a ese numero
 lo debemos transformar de la manera siguiente: 
 2 - 1 - 0 - 3 donde 3 va a ocupar la unidades, 
 0 las decenas, 1 las centenas y 2 los millares*/

 unidades = numero % 10; numero /= 10;
 decenas = numero % 10; numero /= 10;
 centenas = numero % 10; numero /= 10;
 millares = numero % 10; numero /= 10;


 switch (millares)
 {
  case 1: cout<<"M"; break;
  case 2: cout<<"MM"; break;
  case 3: cout<<"MMM"; break;
  case 4: cout << "V"; break ;
  case 5: cout << "V"; break ;
  case 6: cout << "V"; break ;
  case 7: cout << "V"; break ;
  case 8: cout << "V"; break ;
  case 9: cout << "V"; break ;
            
 }
 


 switch (millares)
 {
  case 1: cout<<"M"; break;
  case 2: cout<<"MM"; break;
  case 3: cout<<"MMM"; break;
 }
 
 switch (centenas)
 {
  case 1: cout<<"C"; break;
  case 2: cout<<"CC"; break;
  case 3: cout<<"CCC"; break;
  case 4: cout<<"CD"; break;
  case 5: cout<<"D"; break;
  case 6: cout<<"DC"; break;
  case 7: cout<<"DCC"; break;
  case 8: cout<<"DCCC"; break;
  case 9: cout<<"CM"; break; 
 }
 
 switch (decenas)
 {
  case 1: cout<<"X"; break;
  case 2: cout<<"XX"; break;
  case 3: cout<<"XXX"; break;
  case 4: cout<<"XL"; break;
  case 5: cout<<"L"; break;
  case 6: cout<<"LX"; break;
  case 7: cout<<"LXX"; break;
  case 8: cout<<"LXXX"; break;
  case 9: cout<<"XC"; break; 
 }
 
 switch (unidades)
 {
  case 1: cout<<"I"; break;
  case 2: cout<<"II"; break;
  case 3: cout<<"III"; break;
  case 4: cout<<"IV"; break;
  case 5: cout<<"V"; break;
  case 6: cout<<"VI"; break;
  case 7: cout<<"VII"; break;
  case 8: cout<<"VIII"; break;
  case 9: cout<<"IX"; break;
 }

 return 0;
}
