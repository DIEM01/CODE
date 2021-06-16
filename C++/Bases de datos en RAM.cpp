#include<conio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdio.h>
#include <string>
using namespace std;
void menu();
void altas();
void bajas();
void cambios();
void consulta();
void despliega();
void ordenes();
struct di_dat  {
	string calle, colonia, no_int, no_ext, cp;
};
struct empleado{
	string ap_pat,correo, edad, nombre, ap_mat, numero;
	struct di_dat direc;
}empleados[100];
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 	  
}
int cuenta= 0;
void menu(){
	system ("cls");
     	gotoxy (1,1);cout <<" ********************************************** ";
		gotoxy (1,2);cout <<" *          Menu de datos                     * ";
		gotoxy (1,3);cout <<" ********************************************** ";
		gotoxy (1,4);cout <<" *       1. Altas de la persona               * ";
		gotoxy (1,5);cout <<" *       2. Bajas de la persona               * ";
		gotoxy (1,6);cout <<" *       3. consultas de la persona           * ";
		gotoxy (1,7);cout <<" *       4. Cambios de la persona             * ";
		gotoxy (1,8);cout <<" *       5. Despliega todas las personas      * ";
		gotoxy (1,9);cout <<" *       6. Ordenar datos                     * ";
		gotoxy (1,10);cout <<" *      0. salir                              * ";
	    gotoxy (1,11);cout <<" ********************************************** ";
		gotoxy (1,12);cout <<" *       Elige una opción:                    * ";
		gotoxy (1,13);cout <<" ********************************************** ";
}
void altas (){       
	if (cuenta > 99){
		gotoxy(70,2);cout <<"Lista llena intente otra opción";
		getch();	
	}
	else {	
		gotoxy (67,1);cout <<"****************DATOS DESPLEGADOS****************";
		int c=1 ;
			for  (int i = 1 ; i <= 13; i ++){
				c = c+1 ;
				gotoxy (67,c  );	cout << "*";
				gotoxy (115, c  );	cout << "*";
			}
		gotoxy (67,14 );	cout << "*************************************************";
		fflush(stdin); 
		gotoxy(70,3);cout<<"Digite el nombre: ";
		cin>>empleados[cuenta ].nombre;
		fflush(stdin);
		gotoxy(70,4);cout<<"Digite el apellido paterno: ";
		cin>>empleados[cuenta ].ap_pat;
		fflush(stdin); 
		gotoxy(70,5);cout<<"Digite el apellido materno: ";
		cin>>empleados[cuenta ].ap_mat;
		fflush(stdin);
		gotoxy(70,6);cout<<"Digite el correo: ";
		cin>>empleados[cuenta ].correo;
		fflush(stdin); 
		gotoxy(70,7);cout<<"Digite la edad: ";
		cin>>empleados[cuenta ].edad;
		fflush(stdin); 	
		gotoxy(70,8);cout<<"Digite el teléfono: ";
		cin>>empleados[cuenta ].numero;
		fflush(stdin); 
		gotoxy(70,9);cout<<"Digite su calle: ";
		cin>>empleados[cuenta ].direc.calle;
		fflush(stdin);
		gotoxy(70,10);cout<<"Digite su colonia: ";
		cin>>empleados[cuenta ].direc.colonia;
		fflush(stdin);
		gotoxy(70,11);cout<<"Digite su No. interno: ";
		cin>>empleados[cuenta ].direc.no_int;
		fflush(stdin);
		gotoxy(70,12);cout<<"Digite su No. externo: ";
		cin>>empleados[cuenta ].direc.no_ext;
		fflush(stdin);
		gotoxy(70,13);cout<<"Digite su código postal: ";
		cin>>empleados[cuenta ].direc.cp;
		fflush(stdin);
		cuenta = cuenta +1;
    }
}
void despliega(){     	
	gotoxy (67,1);cout <<"****************DATOS DESPLEGADOS****************";
	int c=1;
	for  (int i = 1 ; i <= 1302; i ++){
	c = c+1 ;
	gotoxy (67,c  );	cout << "*";
	gotoxy (115, c  );	cout << "*"; }
	gotoxy (67,1303 );	cout << "*************************************************";
		int k,h=0,ii=0;
 	for(int i=0;i<100;i= i +1){
    	h=h+1;
    	gotoxy (67,ii+2);cout <<"*"<<endl;
   		gotoxy (67,ii+3);cout <<"************************************************"<<endl;	
		gotoxy (70,ii+4);cout <<"Persona No. "<< h<<endl;
    	gotoxy (70,ii+5);cout<<"Nombre:"<<empleados[i].nombre<<endl;
		gotoxy (70,ii+6);cout<<"Apellido paterno:"<<empleados[i].ap_pat<<endl;
		gotoxy (70,ii+7);cout<<"Apellido materno:"<<empleados[i].ap_mat<<endl;	
		gotoxy (70,ii+8);cout<<"Correo:"<<empleados[i].correo<<endl;
		gotoxy (70,ii+9);cout<<"Edad:"<<empleados[i].edad<<endl;
		gotoxy (70,ii+10);cout<<"Teléfono:"<<empleados[i].numero<<endl;
		gotoxy (70,ii+11);cout<<"Calle:"<<empleados[i].direc.calle<<endl;
		gotoxy (70,ii+12);cout<<"Colonia:"<<empleados[i].direc.colonia<<endl;
		gotoxy (70,ii+13);cout<<"No. interno:"<<empleados[i].direc.no_int<<endl;
		gotoxy (70,ii+14);cout<<"No. externo:"<<empleados[i].direc.no_ext<<endl;
		gotoxy (70,ii+15);cout<<"Código postal:"<<empleados[i].direc.cp<<endl;
		 ii =ii+13;
	} 
		 getch();
}
void consulta (){ 
	gotoxy (67,1);cout <<"****************CONSULTA DE DATOS****************";
	int c=1 ;
	for  (int i = 1 ; i <= 13; i ++){
		c = c+1 ;
		gotoxy (67,c  );	cout << "*";
		gotoxy (115, c  );	cout << "*"; 
	}
	gotoxy (67,15 );	cout << "*************************************************";
	int vec;
	gotoxy (70,2);cout <<"Ingrese la posición a consultar: ";cin >>vec ;
	if (vec > 99){
		gotoxy(70,5);cout << "Posición fuera de rango intenta otra posición ";
		getch();
	}
	else {
		gotoxy (70,3);cout << "Los valores  de la posición: "<<vec ;
		gotoxy (70,4);cout<<"Nombre: "<<empleados[vec].nombre<<endl;
		gotoxy (70,5);cout<<"Apellido paterno: "<<empleados[vec].ap_pat<<endl;
		gotoxy (70,6);cout<<"Apellido materno: "<<empleados[vec].ap_mat<<endl;	
		gotoxy (70,7);cout<<"Correo: "<<empleados[vec].correo<<endl;
		gotoxy(70,8);cout<<"Edad: "<<empleados[vec].edad<<endl;
		gotoxy(70,9);cout<<"Teléfono: "<<empleados[vec].numero<<endl;
		gotoxy (70,10);cout<<"Calle: "<<empleados[vec].direc.calle<<endl;
		gotoxy (70,11);cout<<"Colonia: "<<empleados[vec].direc.colonia<<endl;
		gotoxy (70,12);cout<<"No. interno: "<<empleados[vec].direc.no_int<<endl;
		gotoxy (70,13);cout<<"No. externo: "<<empleados[vec].direc.no_ext<<endl;
		gotoxy (70,14);cout<<"Código postal: "<<empleados[vec].direc.cp<<endl;
		getch ();
	}
}

void cambios (){    // cambios a los datos  		
	gotoxy (67,1);cout <<"**************CAMBIOS EN LOS DATOS**************";
	int c=1 ;
	for  (int i = 1 ; i <= 13; i ++){
		c = c+1 ;
		gotoxy (67,c  );	cout << "*";
		gotoxy (115, c  );	cout << "*";
	}
	gotoxy (67,15 );	cout << "*************************************************";
	int vec;
	gotoxy (70,2);cout << "Ingrese la posición a cambiar: ";cin >> vec ;
	if (vec > 99) {
		gotoxy(70,5); cout <<"Posición fuera de rango intenta otra opción ";
		getch ();
	}
	else {
			gotoxy (70,3);cout << "los valores  de la posición: "<<vec ;
			gotoxy (70,4);cout<<"Nombre: "<<empleados[vec].nombre<<endl;
			gotoxy (70,5);cout<<"Apellido paterno: "<<empleados[vec].ap_pat<<endl;
			gotoxy (70,6);cout<<"Apellido materno: "<<empleados[vec].ap_mat<<endl;	
			gotoxy (70,7);cout<<"Correo: "<<empleados[vec].correo<<endl;
			gotoxy (70,8);cout<<"Edad: "<<empleados[vec].edad<<endl;
			gotoxy (70,9);cout<<"Teléfono: "<<empleados[vec].numero<<endl;
			gotoxy (70,10);cout<<"Calle: "<<empleados[vec].direc.calle<<endl;
			gotoxy (70,11);cout<<"Colonia: "<<empleados[vec].direc.colonia<<endl;
			gotoxy (70,12);cout<<"No. interno: "<<empleados[vec].direc.no_int<<endl;
			gotoxy (70,13);cout<<"No. externo: "<<empleados[vec].direc.no_ext<<endl;
			gotoxy (70,14);cout<<"Código postal: "<<empleados[vec].direc.cp<<endl;
			getch();
	int d=1 ;
	for  (int i = 1 ; i <= 28; i ++){
		d = d+1 ;
		gotoxy (67, d);cout << "*";
		gotoxy (115, d);cout << "*"; 
	}
			gotoxy (67,29 );cout << "*************************************************";
			gotoxy (70,16);cout << "Ingresa los  nuevos valores: ";
			fflush(stdin); 
			gotoxy(70,17);cout<<"Digite el nombre: ";
			cin>>empleados[vec].nombre;
			fflush(stdin); 
			gotoxy(70,18);cout<<"Digite el apellido paterno: ";
			cin>>empleados[vec].ap_pat;
			fflush(stdin); 
			gotoxy(70,19);cout<<"Digite el apellido materno: ";
			cin>>empleados[vec].ap_mat;
			fflush(stdin);
			gotoxy(70,20);cout<<"Digite el correo: ";
			cin>>empleados[vec].correo;
			fflush(stdin);
			gotoxy(70,21);cout<<"Digite la edad: ";
			cin>>empleados[vec].edad;
			fflush(stdin); 
			gotoxy(70,22);cout<<"Digite el teléfono: ";
			cin>>empleados[vec ].numero;
			fflush(stdin); 
			gotoxy(70,23);cout<<"Digite su calle: ";
			cin>>empleados[vec].direc.calle;
			fflush(stdin);
			gotoxy(70,24);cout<<"Digite su colonia: ";
			cin>>empleados[vec].direc.colonia;
			fflush(stdin);
			gotoxy(70,25);cout<<"Digite su No. interno: ";
			cin>>empleados[vec ].direc.no_int;
			fflush(stdin);
			gotoxy(70,26);cout<<"Digite su No. externo: ";
			cin>>empleados[vec ].direc.no_ext;
			fflush(stdin);
			gotoxy(70,27);cout<<"Digite su código postal: ";
			cin>>empleados[vec].direc.cp;
			fflush(stdin);
			gotoxy (70,28);cout << "El valor cambió satisfactoramente ";
			getch ();
	}	
}
void bajas (){  	
	gotoxy (67,1);cout <<"*****************BAJAS DE DATOS******************";
	int c=1 ;
	for  (int i = 1 ; i <= 14; i ++){
		c = c+1 ;
		gotoxy (67,c  );	cout << "*";
		gotoxy (115, c  );	cout << "*"; 
	}
	gotoxy (67,16);	cout << "*************************************************";
	int vec ;
	char baja ;
	gotoxy (70, 2);cout << "Ingrese la posición a dar de baja: "; cin>> vec ;
	if (vec > 99){
		gotoxy(70,5);cout << "Posición fuera de rango intenta otra posición ";
		getch ();
	}
	else {
		if (vec!= 0){
			gotoxy(70,3);cout <<"Los  valores de la posición :"<< vec;
			gotoxy (70,4);cout<<"Nombre: "<<empleados[vec].nombre<<endl;
			gotoxy (70,5);cout<<"Apellido paterno: "<<empleados[vec].ap_pat<<endl;
			gotoxy (70,6);cout<<"Apellido materno: "<<empleados[vec].ap_mat<<endl;	
			gotoxy (70,7);cout<<"Correo: "<<empleados[vec].correo<<endl;
			gotoxy(70,8);cout<<"Edad: "<<empleados[vec].edad<<endl;
			gotoxy(70,9);cout<<"Teléfono: "<<empleados[vec].numero<<endl;
			gotoxy (70,10);cout<<"Calle: "<<empleados[vec].direc.calle<<endl;
			gotoxy (70,11);cout<<"Colonia: "<<empleados[vec].direc.colonia<<endl;
			gotoxy (70,12);cout<<"No. interno: "<<empleados[vec].direc.no_int<<endl;
			gotoxy (70,13);cout<<"No. externo: "<<empleados[vec].direc.no_ext<<endl;
			gotoxy (70,14);cout<<"Código postal: "<<empleados[vec].direc.cp<<endl;
			getch();
			gotoxy(70,15);cout <<"Dar de baja s/n:";cin >> baja ;
			char x;
			if (baja =='s'){
				empleados[vec].nombre='0' ;
				empleados[vec].ap_pat= '0';
				empleados[vec].ap_mat='0';
				empleados[vec].correo='0' ;
				empleados[vec].edad= '0' ;
				empleados[vec].numero='0' ;
				empleados[vec].direc.calle='0' ;
				empleados[vec].direc.colonia='0' ;
				empleados[vec].direc.no_int = '0' ;
				empleados[vec].direc.no_ext ='0' ;
				empleados[vec].direc.cp='0' ;
			}
			else if (baja =='n'){
				getch();
			}	
	
		}
	}
}
void ordenes(){
empleado aux ;
int vec = 0;
int i ;
int j ;
for ( i = 0; i < 100; i++) {
    for ( j = 0; j < 99 ; j++) {
        if(empleados[j].ap_pat> empleados[j+1].ap_pat){
            aux = empleados[j];
            empleados[j] = empleados[j+1]; 
            empleados[j+1]=aux; 
    	}
    }
}
	gotoxy (67,1);cout <<"****************DATOS DESPLEGADOS****************";
	int c=1;
	for  (int i = 1 ; i <= 1302; i ++){
		c = c+1 ;
		gotoxy (67,c  );	cout << "*";
		gotoxy (115, c  );	cout << "*";
	}
	gotoxy (67,1303 );	cout << "*************************************************";
	int h=0;
	int ii=0;
 	for(int i=0;i<100;i= i +1){
    	h=h+1;
    	gotoxy (67,ii+2);cout <<"*"<<endl;
    	gotoxy (67,ii+3);cout <<"************************************************"<<endl;	
		gotoxy (70,ii+4);cout <<"Persona No. "<< h<<endl;
    	gotoxy (70,ii+5);cout<<"Nombre:"<<empleados[i].nombre<<endl;
		gotoxy (70,ii+6);cout<<"Apellido paterno:"<<empleados[i].ap_pat<<endl;
		gotoxy (70,ii+7);cout<<"Apellido materno:"<<empleados[i].ap_mat<<endl;	
		gotoxy (70,ii+8);cout<<"Correo:"<<empleados[i].correo<<endl;
		gotoxy (70,ii+9);cout<<"Edad:"<<empleados[i].edad<<endl;
		gotoxy (70,ii+10);cout<<"Teléfono:"<<empleados[i].numero<<endl;
		gotoxy (70,ii+11);cout<<"Calle:"<<empleados[i].direc.calle<<endl;
		gotoxy (70,ii+12);cout<<"Colonia:"<<empleados[i].direc.colonia<<endl;
		gotoxy (70,ii+13);cout<<"No. interno:"<<empleados[i].direc.no_int<<endl;
		gotoxy (70,ii+14);cout<<"No. externo:"<<empleados[i].direc.no_ext<<endl;
		gotoxy (70,ii+15);cout<<"Código postal:"<<empleados[i].direc.cp<<endl;	 
	 	ii =ii+13;
	} 
		 getch();
}
int main (){
	system ("color 8F") ;setlocale(LC_ALL,"spanish"); 
	int opcion ;
	do{
		menu();
		gotoxy(33,12);cin >>opcion ;
		switch(opcion)
		{
			case 0: break;
			case 1: altas(); break;
			case 2: bajas(); break;
			case 3: consulta();	break;
			case 4:cambios(); break;
			case 5: despliega(); break;
			case 6: ordenes() ;break ;
			default : gotoxy (5,12); cout << "Usted ingresó una opcion incorrecta ";
			getch();	
		}	
	}while (opcion > 0 );
}
