#include<conio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;
void menu();
void altas();
void bajas();
void cambios();
void consulta();
void despliega();
void ordenes();
void error();
struct di_dat  {
	string calle; 
	string colonia;
	string no_int; 
	string no_ext;
	string cp;
};
struct empleado{
	string ap_pat;
	string correo;
	string edad;
	string nombre;
	string ap_mat;
	string numero;
	string num ;
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
int cuenta =0; 
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
 	ofstream escritura;
    ifstream verificador;
    verificador.open("personas.txt", ios::in);
    escritura.open("personas.txt", ios::app);
    if(escritura.is_open()&&verificador.is_open()){
		while (!verificador .eof()){
    		verificador >>empleados [cuenta].num >>empleados[cuenta ].nombre>>empleados[cuenta ].ap_pat>>empleados[cuenta ].ap_mat>>    empleados[cuenta ].correo>>empleados[cuenta ].edad>>empleados[cuenta ].numero>>empleados[cuenta ].direc.calle>>empleados[cuenta].direc.colonia>>empleados[cuenta ].direc.no_int>>empleados[cuenta].direc.no_ext>>empleados[cuenta ].direc.cp;
		}
		if (empleados[cuenta].num >"99"){
			gotoxy(70, 2);cout <<"Lista llena intente otra opción";
			getch();	
		}
		else {	
			gotoxy (67, 1);cout <<"****************DATOS DESPLEGADOS****************";
			int cv=1;
				for  (int i = 1 ; i <= 14; i ++){
					cv = cv+1 ;
					gotoxy (67, cv);	cout << "*";
					gotoxy (115, cv);	cout << "*";
				}
			gotoxy (67,15 );	cout << "*************************************************";
			gotoxy(70,2);cout<<"El No. de registros llenos son: "<<empleados[cuenta].num ;
			gotoxy(70,3);cout<<"Digite el No. siguiente  ";
		    getline(cin,empleados[cuenta].num);
			gotoxy(70,4);cout<<"Digite el nombre: ";
			getline(cin,empleados[cuenta].nombre);
			fflush(stdin);
			gotoxy(70,5);cout<<"Digite el apellido paterno: ";
		    getline(cin,empleados[cuenta].ap_pat);
			fflush(stdin); 
			gotoxy(70,6);cout<<"Digite el apellido materno: ";
		    getline(cin,empleados[cuenta].ap_mat);
			fflush(stdin);
			gotoxy(70,7);cout<<"Digite el correo: ";
	    	getline(cin,empleados[cuenta].correo);
			fflush(stdin); 
			gotoxy(70,8);cout<<"Digite la edad: ";
	     	getline(cin,empleados[cuenta].edad);
			fflush(stdin); 	
			gotoxy(70,9);cout<<"Digite el teléfono: ";
	        getline(cin,empleados[cuenta].numero);
			fflush(stdin); 
			gotoxy(70,10);cout<<"Digite su calle: ";
	    	getline(cin,empleados[cuenta].direc.calle);
			fflush(stdin);
			gotoxy(70,11);cout<<"Digite su colonia: ";
			getline(cin,empleados[cuenta].direc.colonia);
			fflush(stdin);
			gotoxy(70,12);cout<<"Digite su No. interno: ";
	        getline(cin,empleados[cuenta].direc.no_int);
			fflush(stdin);
			gotoxy(70,13);cout<<"Digite su No. externo: ";
		    getline(cin,empleados[cuenta].direc.no_ext);
			fflush(stdin);
			gotoxy(70,14);cout<<"Digite su código postal: ";
			 getline(cin,empleados[cuenta].direc.cp);
			fflush(stdin);	
		    escritura<<empleados[cuenta ].num<<"\n"<<empleados[cuenta].nombre<<"\n"<<empleados[cuenta].ap_pat<<"\n"<< empleados[cuenta].ap_mat <<"\n"<<empleados[cuenta].correo<<"\n"<<empleados[cuenta].edad<<"\n"<<empleados[cuenta].numero<<"\n"<<empleados[cuenta].direc.calle<<"\n" <<empleados[cuenta].direc.colonia<<"\n"<<empleados[cuenta].direc.no_int<<"\n"<<empleados[cuenta].direc.no_ext<<"\n"<<empleados[cuenta].direc.cp<<"\n";
			cuenta = cuenta +1 ;
   		}
	}							
	else{										
    	error();									
    }
    escritura.close();
    verificador.close();
	getch();
}


void error(){
    cout<<"No se encontro el archivo de datos ";
}

void despliega(){  
    ifstream mostrar;
    mostrar.open("personas.txt",ios::in);
	if(mostrar.is_open()){
		gotoxy (67,1);cout <<"****************DATOS DESPLEGADOS****************";
		int c=1;
        for  (int i = 1 ; i <= 1302; i ++){
			c = c+1 ;
			gotoxy (67,c  );	cout << "*";
			gotoxy (115, c  );	cout << "*"; 
        }
		 	gotoxy (67,1303 );	cout << "*************************************************";
			int k,h=0,ii=0;
 		for(int i=0;i<100;i= i +1){
    		h=h+1;
            mostrar>>empleados [i].num >>empleados[i ].nombre>>empleados[i ].ap_pat>>empleados[i ].ap_mat>> empleados[i ].correo>>empleados[i].edad>>empleados[i].numero>>empleados[i ].direc.calle>>empleados[i].direc.colonia>>empleados[i ].direc.no_int>>empleados[i].direc.no_ext>>empleados[i ].direc.cp;
	    	gotoxy (67,ii+2);cout <<"*"<<endl;
   			gotoxy (67,ii+3);cout <<"************************************************"<<endl;	
			gotoxy (70,ii+4);cout <<"Persona No. "<< empleados[i].num <<endl;
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
	}
	else {
		error();
	}
    mostrar.close();
	getch(); 	 
}

void consulta (){ 

    ifstream mostrar;
    mostrar.open("personas.txt",ios::in);
	if(mostrar.is_open()){
		gotoxy (67,1);cout <<"****************CONSULTA DE DATOS****************";
		int c=1 ;
		for  (int i = 1 ; i <= 13; i ++){
			c = c+1 ;
			gotoxy (67,c  );	cout << "*";
			gotoxy (115, c  );	cout << "*"; 
		}
		gotoxy (67,15 );	cout << "*************************************************"; 
		string vec;
		gotoxy (70,2);cout <<"Ingrese la posición a consultar: ";
		getline (cin, vec);
		
		if (vec > "99"){
			gotoxy(70,5);cout << "Posición fuera de rango intenta otra posición ";
			getch();
		}
		else {
			while (!mostrar. eof()){
				mostrar>>empleados['vec'].nombre>>empleados['vec'  ].ap_pat>>empleados['vec'  ].ap_mat>>    empleados['vec'   ].correo>>empleados['vec'  ].edad>>empleados['vec'  ].numero>>empleados['vec' ].direc.calle>>empleados['vec' ].direc.colonia>>empleados['vec'   ].direc.no_int>>empleados['vec'  ].direc.no_ext>>empleados['vec'  ].direc.cp;
        		if (empleados ['vec' ].num== vec ){
        	
					gotoxy (70,3);cout << "Los valores  de la posición: "<< empleados [vec].num ;
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
					mostrar >> empleados [vec].num ;
			}
		}
	}
	else {
		error();
	}
    mostrar.close ();
}


/////////////////hasta auqii todo esta bien 










/*
void cambios (){    
	ifstream mostrar;
    ofstream escritura;
    ifstream verificador;
    string auxCodigo;
    verificador.open("personas.txt",ios::in);
    escritura.open("personas.txt",ios::app);
   if(escritura.is_open()&&verificador.is_open()){
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
			getline(mostrar,empleados[vec].nombre);
        	getline(mostrar,empleados[vec].ap_pat);
        	getline(mostrar,empleados[vec].ap_mat);
        	getline(mostrar,empleados[vec].correo);
  			getline(mostrar,empleados[vec].edad);
       		getline(mostrar,empleados[vec].numero);
        	getline(mostrar,empleados[vec].direc.calle);
        	getline(mostrar,empleados[vec].direc.colonia);
    		getline(mostrar,empleados[vec].direc.no_int);
        	getline(mostrar,empleados[vec].direc.no_ext);
        	getline(mostrar,empleados[vec].direc.cp);
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
			
			escritura<<empleados[vec ].nombre<<"\n"<<empleados[vec ].ap_pat<<"\n"<< empleados[vec ].ap_mat <<"\n"<<    empleados[vec].correo<<"\n"<<empleados[vec ].edad
			<<"\n"<<empleados[vec].numero<<"\n"<<empleados[vec ].direc.calle<<"\n" <<empleados[vec].direc.colonia<<"\n"<<empleados[vec ].direc.no_int<<"\n"
            <<empleados[vec ].direc.no_ext<<"\n"<<empleados[vec ].direc.cp<<"\n";
			gotoxy (70,28);cout << "El valor cambió satisfactoramente ";
			getch ();
		}
   }
	else {
		error();
	}	
	escritura.close();
    verificador.close();
	getch();
	
}

*/








///////////////////
void bajas (){  
	ifstream lectura;
	ofstream auxiliar ;
	bool encontrado= false ;
    lectura.open("personas.txt",ios::in);
    auxiliar.open("auxiliar.txt", ios::out);
   if(lectura.is_open()&& auxiliar.is_open()){
   	fflush(stdin);
		gotoxy (67,1);cout <<"*****************BAJAS DE DATOS******************";
		int c=1 ;
		for  (int i = 1 ; i <= 14; i ++){
			c = c+1 ;
			gotoxy (67,c  );	cout << "*";
			gotoxy (115, c  );	cout << "*"; 
		}
		gotoxy (67,16);	cout << "*************************************************";
		
		string vec ;
		char baja ;
		gotoxy (70, 2);cout << "Ingrese la posición a dar de baja: "; getline (cin, vec) ;
		lectura>> empleados [vec].num;
		
		if (vec > 99){
			gotoxy(70,5);cout << "Posición fuera de rango intenta otra posición ";
			getch ();
		}
		else {// quitar los vecse cuenta?
			while (!lectura. eof()){
				lectura>>empleados[vec ].nombre>>empleados[vec  ].ap_pat>>empleados[vec  ].ap_mat>>    empleados[vec  ].correo>>empleados[vec ].edad>>empleados[vec ].numero>>empleados[vec ].direc.calle>>empleados[vec ].direc.colonia>>empleados[vec  ].direc.no_int>>empleados[vec ].direc.no_ext>>empleados[vec  ].direc.cp;
        		if (empleados [vec].num== vec ){
        			encontrado = true ;
        		
					gotoxy (70,3);cout << "Los valores  de la posición: "<< empleados [vec].num<<endl ;
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
					
					
			
					gotoxy(70,15);cout <<"Dar de baja s/n:";cin >> baja ;
					if (baja =='s'){
						
						gotoxy(70,16);cout <<"El usuario ha sido dado de baja"; 
						getch();
					}
					else {
						gotoxy(70,16);cout <<"El usuario no ha sido dado de baja";
						auxiliar<<empleados[vec].num<<"\n"<<empleados[vec].nombre<<"\n"<<empleados[vec].ap_pat<<"\n"<< empleados[vec].ap_mat <<"\n"<<empleados[vec].correo<<"\n"<<empleados[vec].edad<<"\n"<<empleados[vec].numero<<"\n"<<empleados[vec].direc.calle<<"\n" <<empleados[vec].direc.colonia<<"\n"<<empleados[vec].direc.no_int<<"\n"<<empleados[vec].direc.no_ext<<"\n"<<empleados[vec].direc.cp<<"\n";		
				 
					getch ();
						}
				
				}
				else {
				
					auxiliar<<empleados[vec].num<<"\n"<<empleados[vec].nombre<<"\n"<<empleados[vec].ap_pat<<"\n"<< empleados[vec].ap_mat <<"\n"<<empleados[vec].correo<<"\n"<<empleados[vec].edad<<"\n"<<empleados[vec].numero<<"\n"<<empleados[vec].direc.calle<<"\n" <<empleados[vec].direc.colonia<<"\n"<<empleados[vec].direc.no_int<<"\n"<<empleados[vec].direc.no_ext<<"\n"<<empleados[vec].direc.cp<<"\n";
				}		
				lectura >> empleados [vec].num ;
			}
			if (encontrado ==false ){
				cout<< "No hay registros de este No.";
			}
   		}
   }
	else {
		error (); 
	}
	lectura.close ();
	auxiliar.close();
	remove ("auxiliar.txt");
	rename("auxiliar.txt","personas.txt");
    getch();
}











/*
void ordenes(){
	 ifstream mostrar;
	 ofstream escritura;
     ifstream verificador;
     string auxCodigo;
     verificador.open("personas.txt",ios::in);
     escritura.open("personas.txt",ios::app);
   	if(escritura.is_open()&&verificador.is_open()){
	
	
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
    	
    		getline(mostrar,empleados[i].nombre);
       		getline(mostrar,empleados[i].ap_pat);
        	getline(mostrar,empleados[i].ap_mat);
        	getline(mostrar,empleados[i].correo);
    		getline(mostrar,empleados[i].edad);
        	getline(mostrar,empleados[i].numero);
        	getline(mostrar,empleados[i].direc.calle);
        	getline(mostrar,empleados[i].direc.colonia);
    		getline(mostrar,empleados[i].direc.no_int);
        	getline(mostrar,empleados[i].direc.no_ext);
       		getline(mostrar,empleados[i].direc.cp);
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
		else {
			error();
		}
	
	escritura.close();
    verificador.close();
    mostrar.close ();
    getch();
}

*/


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
		//	case 4:cambios(); break;
			case 5: despliega(); break;
		//	case 6: ordenes() ;break ;*
			default : gotoxy (5,12); cout << "Usted ingresó una opcion incorrecta ";
			getch();	
		}	
	}while (opcion > 0 );
}
