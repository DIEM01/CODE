#include<iostream>
using namespace std;
int main ()
{
	int num1, num2, suma, resta, multi, divi, res;
	cout << "Digita el valor numero uno:"<<endl; 
	cin>> num1 ;
	cout << "Digita el valor numero dos:"<< endl;
	cin >>num2; 
	suma = num1 + num2;
	resta= num1 - num2;
	multi= num1 * num2;
	divi = num1 / num2;
	res =  num1 % num2;
	cout <<" El resultado de la suma es: "<<suma<< endl; 
	cout <<" El resultado de la resta es: "<<resta<< endl; 
	cout <<" El resultado de la multiplicacion es: "<<multi<< endl; 
	cout <<" El resultado de la division es: "<<divi<< endl; 
	cout <<" El resultado del residuo es: "<<res<< endl; 
	
	return 0;
}


