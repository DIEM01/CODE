#include<iostream>
using namespace std;
int main ()
{
	int edad, c;
	char nom[ 20];
	cout<< "Digite su edad"<<endl;
	cin >>edad;
	cout<< "Digite su nombre"<< endl;
	cin >>nom;
	if (edad >= 1 && edad <= 12 ){
	 c = 1;	}
	else if (edad >= 13 && edad <= 18){
		c= 2;
	}
	else if (edad >= 19 && edad <= 45){
		c= 3;
	}
		else {
		
		c= 4;
	}
	

	switch (c){
		case 1: cout <<"Infante "; break;
		case 2: cout <<"Adolecente "; break;
		case 3: cout <<"Maduro"; break;
		case 4: cout <<"Tercera edad "; break;
		default: cout << "no esta en rango "; break;

}
}
