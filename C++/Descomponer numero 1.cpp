#include<iostream>
using namespace std;
int main ()
{
	int num1, uni, dec , cen  ;
	cout << "Digite el numero que quiere descomposicion "<< endl ;
	cin >> num1;

	uni = num1 % 10;

num1 = num1 /10;
	cout << "las unidades del numero digitado son : "<<uni  << endl ; 

return 0 ; 
}
