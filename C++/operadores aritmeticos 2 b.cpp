#include<iostream>
using namespace std;
int main ()
{
	int num1, uni, dec , cen  ;
	cout << "Digite el numero que quiere descomposicion "<< endl ;
	cin >> num1;

	uni = num1 % 10;
	dec = num1 % 100;
	cen = num1 % 1000;

	cout << "las unidades del numero digitado son : "<<uni  << endl ; 
	cout << "las decenas del numero digitado son : "<< dec << endl ; 
	cout << "las centenas del numero digitado son : "<< cen << endl ; 
return 0 ; 
}
