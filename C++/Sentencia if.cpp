#include<iostream>
using namespace std;
int main ()
{
	
	int n1, n2, n3, n4, n5;
	cout << "Digita el numero uno:"<<endl; 
	cin>> n1 ;
	cout << "Digita el numero dos:"<<endl; 
	cin>> n2 ;
	cout << "Digita el numero tres:"<<endl; 
	cin>> n3 ;
	cout << "Digita el numero cuatro:"<<endl; 
	cin>> n4 ;
	cout << "Digita el numero cinco:"<<endl; 
	cin>> n5 ;

	if (n1 >= n2 &&n1 >= n3&& n1 >= n4 && n1 >= n5){
		cout << "EL numero mas grande es: "<< n1<<endl;	
	}
	if (n2 >= n1 &&n2 >= n3&& n2 >= n4 && n2 >= n5){
		cout << "EL numero mas grande es: "<< n2<<endl;
	}
	if (n3 >= n1 &&n3 >= n2&& n3 >= n4 && n3 >= n5){
		cout << "EL numero mas grande es: "<<n3<<endl;
	}
	if (n4 >= n1 &&n4 >= n2&& n4 >= n3 && n4 >= n5){
		cout << "EL numero mas grande es: "<<n4<<endl;
	}
	if (n5 >= n1 &&n5 >= n2&& n5 >= n4 && n5 >= n3){
		cout << "EL numero mas grande es: "<<n5<<endl;
	}
	
	
	return 0; 
}
