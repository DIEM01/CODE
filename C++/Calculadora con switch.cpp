#include <iostream >
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
  }
  int main (){
  	setlocale(LC_ALL, "");
	gotoxy (1,1);	cout << "*********************************************************";
	gotoxy (1,2);	cout << "*          Para realizar una suma preciona 1            *";
	gotoxy (1,3); 	cout << "*          Para realizar una resta preciona 2           *";
	gotoxy (1,4);	cout << "*          Para realizar una multiplicacion preciona 3  *";
	gotoxy (1,5);	cout << "*          Para realizar una divicion preciona 4        *";
	gotoxy (1,6);	cout << "*********************************************************"<<endl;
	int opera ;
	float res, num1 , num2;
	cout << " Digite el numero de la operación que desea realizar"<<endl;
	cin >> opera ;
	cout << "Digite el primer numero "<<endl;
	cin >> num1 ;
	cout << "Digite el segundo numero "<<endl;
	cin>> num2;
	
	switch (opera )
	{ case 1 : cout <<"El resultado de la suma es : ";
		res = num1 +  num2;
		cout<< res<<endl;break;
	  case 2 : cout <<" El resultado de la resta es : ";
	  	res = num1 -  num2;
		cout<< res ;break;
	  case 3 : cout <<" El resultado de la multiplicacion es : "; 
	  	res = num1 *  num2;
		cout<< res ;break;
	  case 4 : if (num2 == 0)
	                { cout <<" La división entre cero no esta definida";
	                }
	            else {cout <<"El resultado de la división es : ";
	            	  	res = num1 /  num2;
						cout<< res ;break;
	           		 }
				break;
	  default :  cout <<" Opción no valida "<<endl;                      
	}   
	return 0;
	}
