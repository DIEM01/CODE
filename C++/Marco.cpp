#include<iostream>
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
  int main ()
{	int i,j,k,l,m, alt= 0, bas=0, cuenta = 1, cuenta2 = 1, cuenta3 = 1, cuenta4 = 1;
	cout << "Digite la atura del marco"<< endl ;
	cin >> alt;
	cout << "Digite la base del marco"<< endl ;
	cin >> bas;
 system("cls");
	for (i = 1 ; i <= alt ; i ++){
		cuenta  = cuenta +1 ;
gotoxy (2,cuenta );	cout << "*";
								 }
		for (j = 1 ; j <= bas ; j ++){
		cuenta2  = cuenta2 +1 ;
gotoxy (cuenta2,1 );cout << "*";
									 }
	for (k = 1 ; k <= alt; k ++){
		cuenta3  = cuenta3 +1 ;
gotoxy (cuenta2,cuenta3 );cout << "*";
								}
	for (l = 1 ; l <= bas; l ++){
		cuenta4  = cuenta4 +1 ;
gotoxy (cuenta4,cuenta3 );cout << "*";
								}
return 0 ;	
}
