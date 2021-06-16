#include<conio.h>
#include <iostream>
#include<math.h>
#include <windows.h>
#include <stdio.h>
using namespace std;




int vec1 [10], indice= 0,cuenta= 0;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 	  
}
void pintamenu(){
	system ("cls");
	gotoxy (1,1);cout <<" ******************************************** ";
		gotoxy (1,2);cout <<" *          menu de pila                * ";
		gotoxy (1,3);cout <<" *                                      * ";
		gotoxy (1,4);cout <<" *       1. Altass de la pila           * ";
		gotoxy (1,5);cout <<" *       2. Bajas de la pila            * ";
		gotoxy (1,6);cout <<" *       3. consultas de la pila        * ";
		gotoxy (1,7);cout <<" *       4. Cambios de la pila          * ";
		gotoxy (1,8);cout <<" *       5. Despliega toda la pila      * ";
		gotoxy (1,9);cout <<" *       0. salir                       * ";
		gotoxy (1,10);cout <<" *************************************** ";
		gotoxy (1,11);cout <<" *       Elige una opcion              * ";
		gotoxy (1,12);cout <<" *************************************** ";

}
void altapila (){
	if (indice > 10){
		gotoxy(70,3);cout <<"Pila llena intente otra opcion";
		getch();	
	}
	else {
	gotoxy(70,3);cout << "Ingrese el valor: ";
	cin >> vec1[indice];
	
		
cuenta = cuenta+1;
		indice = indice +1;
	}
		}
	
int j,h;	
	
	

void despliegapila (){
	gotoxy (65,1);cout <<"pila desplegada ";
	for (int i =0 ; i <10;i++){
	gotoxy(70, 12-i); cout << vec1[i];}
	
	
	

		
		
	getch();
	
	 }

void consultapila (){
	int pos;
	gotoxy (70,3);cout <<"ingrese la posicion a consultar: ";cin >>pos ;
	if (pos > 10){
		gotoxy(70,5);cout << "Posicion fuera de rango intenta otra posicion ";
		getch();
		
	}
	else {
		if (vec1[pos]== 0){
			gotoxy (70,5);cout << "la posicion a consultar esta vacia ";
			getch ();
			
		}
		else {
			gotoxy (70,5);cout << "el valor de la posiciuon :"<< pos << "es : " << vec1 [pos ];
			getch();
			
		}
	}
}
void cambiospila (){
	int pos;
	gotoxy (70,3);cout << "ingrese la posicion a cambiar: ";cin >> pos ;
	if (pos > 9) {
		gotoxy(70,5); cout <<"posicion fuera de rango intenta otra opcion ";
		getch ();
	}
	else {
		if (vec1[pos ]==0){
			gotoxy(70,5);cout <<"la posicion a cambiar esta vacia";
			getch ();
		}
		else {
			gotoxy (70,5);cout << "el valoe de la posicion: "<<pos << "es: " <<vec1[pos];
			gotoxy (70,6);cout << "ingresa el nuevo valor : ";cin >> vec1 [pos];
			gotoxy (70,5);cout << "el valor ha cambiado satisfactoramente ";
			getch ();
			
			
		}
	}	
}
void bajaspila (){
	int pos ;
	char baja ;
	gotoxy (70, 3);cout << "ingrese la posicion a dar de baja: "; cin>> pos ;
	if (pos > 9){
		gotoxy(70,5);cout << "posicion fuera de rango intenta otra posicion ";
		getch ();
		
	}
	else {
		if (vec1 [ pos ]==0){
			gotoxy(70,5);cout << "la posicion a dar de baja esta basia ";
			getch ();		
		}
		else {
			gotoxy(70,5);cout <<"el valor de la posicion :"<< pos << "es: "<< vec1 [pos];
			gotoxy(70,6);cout <<"Dar de baja s/n:";cin >> baja ;
			if (baja =='s'){
				if (pos ==9){
					vec1[9]=0;
					indice =indice -1;
					gotoxy(70,8);cout <<"el valor a sido dado de baja";
					getch();
				}
				else {
					for (int i = pos ;i<10;i++){
						vec1[i]=vec1[i+1];
					}
					vec1[9]=0;
					indice= indice - 1;
					gotoxy(70,8);cout << "el valor a sido dado de baja ";
					getch();
					}
				}
			}
		}	
	}

int main (){
	int opcion = 1;
	do{
		pintamenu();
		gotoxy(33,11);cin >>opcion ;
		switch(opcion)
		{
			case 0: break;
			case 1: altapila();
			break;
			case 2: bajaspila();
			break;
			case 3: consultapila();
			break;
			case 4:cambiospila();
			break;
			case 5: despliegapila();
			break;
			default : gotoxy (5,11); cout << "usted ha ingresado una opcion incorrecta ";
			getch();
			
		}
		
		
		
	}while (opcion > 0 );
}


