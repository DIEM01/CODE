#include<conio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <stdlib.h>
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
	string calle, colonia, no_int, no_ext, cp; 
};

struct empleado{
	string ap_pat,  correo, edad, nombre, ap_mat,numero, num;
	struct di_dat direc;
}empleados;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 	  
}
 
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
		gotoxy (1,9);cout <<" *       0. salir                             * ";
	    gotoxy (1,10);cout <<" ********************************************** ";
		gotoxy (1,11);cout <<" *       Elige una opción:                    * ";
		gotoxy (1,12);cout <<" ********************************************** ";
}

void altas (){ 
 	ofstream es;
    ifstream ve;
    ve.open("personas.txt", ios::in);
    es.open("personas.txt", ios::app);
    if(es.is_open()&&ve.is_open()){
    	getline (ve, empleados.num);
		while (!ve .eof()){
    		getline (ve,empleados.nombre );
			getline (ve, empleados.ap_pat);
			getline (ve,empleados.ap_mat );
			getline (ve,empleados.correo );
			getline (ve, empleados.edad);
			getline (ve, empleados.numero);
			getline (ve,empleados.direc.calle );
			getline (ve,empleados.direc.colonia );
			getline (ve, empleados.direc.no_int);
			getline (ve,empleados.direc.no_ext );
			getline (ve,empleados.direc.cp );
			getline (ve, empleados.num);
		}	
		if (empleados.num >"99"){
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
			gotoxy (67,15 );cout << "*************************************************";
			gotoxy(70,2);cout<<"El No. de registros llenos son: "<<empleados.num;		fflush(stdin);
			gotoxy(70,3);cout<<"Digite el No. siguiente del No. señalado ";		fflush(stdin);
		    getline(cin,empleados.num);	
			fflush(stdin);
			gotoxy(70,4);cout<<"Digite el nombre: ";
			getline(cin,empleados.nombre);
			fflush(stdin);
			gotoxy(70,5);cout<<"Digite el apellido paterno: ";
		    getline(cin,empleados.ap_pat);
			fflush(stdin); 
			gotoxy(70,6);cout<<"Digite el apellido materno: ";
		    getline(cin,empleados.ap_mat);
			fflush(stdin);
			gotoxy(70,7);cout<<"Digite el correo: ";
	    	getline(cin,empleados.correo);
			fflush(stdin); 
			gotoxy(70,8);cout<<"Digite la edad: ";
	     	getline(cin,empleados.edad);
			fflush(stdin); 	
			gotoxy(70,9);cout<<"Digite el teléfono: ";
	        getline(cin,empleados.numero);
			fflush(stdin); 
			gotoxy(70,10);cout<<"Digite su calle: ";
	    	getline(cin,empleados.direc.calle);
			fflush(stdin);
			gotoxy(70,11);cout<<"Digite su colonia: ";
			getline(cin,empleados.direc.colonia);
			fflush(stdin);
			gotoxy(70,12);cout<<"Digite su No. interno: ";
	        getline(cin,empleados.direc.no_int);
			fflush(stdin);
			gotoxy(70,13);cout<<"Digite su No. externo: ";
		    getline(cin,empleados.direc.no_ext);
			fflush(stdin);
			gotoxy(70,14);cout<<"Digite su código postal: ";
			getline(cin,empleados.direc.cp);
			fflush(stdin);	
		    es<<"\n"<<empleados.num<<"\n"<<empleados.nombre<<"\n"<<empleados.ap_pat<<"\n"<< empleados.ap_mat <<"\n"<<empleados.correo<<"\n"<<empleados.edad<<"\n"<<empleados.numero<<"\n"<<empleados.direc.calle<<"\n" <<empleados.direc.colonia<<"\n"<<empleados.direc.no_int<<"\n"<<empleados.direc.no_ext<<"\n"<<empleados.direc.cp;
   		}
	}							
	else{										
    	error();									
    }
    es.close();
    ve.close();
	getch();
}




void error(){
    cout<<"No se encontro el archivo de datos ";
}

void despliega(){  
    ifstream im;
    im.open("personas.txt",ios::in);
	if(im.is_open()){
		gotoxy (67,1);cout <<"****************DATOS DESPLEGADOS****************";
		int k,h=0,ii=0,c=1;
		getline (im, empleados.num);
		while (!im.eof()){
            getline (im,empleados.nombre );
			getline (im, empleados.ap_pat);
			getline (im,empleados.ap_mat );
			getline (im,empleados.correo );
			getline (im, empleados.edad);
			getline (im, empleados.numero);
			getline (im,empleados.direc.calle );
			getline (im,empleados.direc.colonia );
			getline (im, empleados.direc.no_int);
			getline (im,empleados.direc.no_ext );
			getline (im,empleados.direc.cp );
			gotoxy (70,ii+4);cout <<"Persona No. "<< empleados.num <<endl;
    		gotoxy (70,ii+5);cout<<"Nombre:"<<empleados.nombre<<endl;
			gotoxy (70,ii+6);cout<<"Apellido paterno:"<<empleados.ap_pat<<endl;
			gotoxy (70,ii+7);cout<<"Apellido materno:"<<empleados.ap_mat<<endl;	
			gotoxy (70,ii+8);cout<<"Correo:"<<empleados.correo<<endl;
			gotoxy (70,ii+9);cout<<"Edad:"<<empleados.edad<<endl;
			gotoxy (70,ii+10);cout<<"Teléfono:"<<empleados.numero<<endl;
			gotoxy (70,ii+11);cout<<"Calle:"<<empleados.direc.calle<<endl;
			gotoxy (70,ii+12);cout<<"Colonia:"<<empleados.direc.colonia<<endl;
			gotoxy (70,ii+13);cout<<"No. interno:"<<empleados.direc.no_int<<endl;
			gotoxy (70,ii+14);cout<<"No. externo:"<<empleados.direc.no_ext<<endl;
			gotoxy (70,ii+15);cout<<"Código postal:"<<empleados.direc.cp<<endl;
			ii =ii+13;
			getline (im, empleados.num);
		}
	}
	else {
		error();
	}
    im.close();
	getch(); 	 
}

void consulta (){ 
	string aux;
    ifstream im;
    im.open("personas.txt",ios::in);
	if(im.is_open()){
	fflush(stdin);
		gotoxy (67,1);cout <<"****************CONSULTA DE DATOS****************";
		int c=1 ;
		for  (int i = 1 ; i <= 13; i ++){
			c = c+1 ;
			gotoxy (67,c  );	cout << "*";
			gotoxy (115, c  );	cout << "*"; 
		}
		gotoxy (67,15 );	cout << "*************************************************"; 
		gotoxy (70,2);cout <<"Ingrese la posición a consultar: ";
		getline (cin, aux);
		fflush(stdin);
		if (aux > "99"){
			gotoxy(70,5);cout << "Posición fuera de rango intenta otra posición ";
			getch();
			fflush(stdin);
		}
		else {
			getline(im, empleados.num);
			while (!im. eof()){
				fflush(stdin);
				im>>empleados.nombre>>empleados.ap_pat>>empleados.ap_mat>>empleados.correo>>empleados.edad>>empleados.numero>>empleados.direc.calle>>empleados.direc.colonia>>empleados.direc.no_int>>empleados.direc.no_ext>>empleados.direc.cp;
        		if (empleados .num== aux ){
					gotoxy (70,3);cout << "Los valores  de la posición: "<< empleados.num ;
					gotoxy (70,4);cout<<"Nombre: "<<empleados.nombre<<endl;
					gotoxy (70,5);cout<<"Apellido paterno: "<<empleados.ap_pat<<endl;
					gotoxy (70,6);cout<<"Apellido materno: "<<empleados.ap_mat<<endl;	
					gotoxy (70,7);cout<<"Correo: "<<empleados.correo<<endl;
					gotoxy(70,8);cout<<"Edad: "<<empleados.edad<<endl;
					gotoxy(70,9);cout<<"Teléfono: "<<empleados.numero<<endl;
					gotoxy (70,10);cout<<"Calle: "<<empleados.direc.calle<<endl;
					gotoxy (70,11);cout<<"Colonia: "<<empleados.direc.colonia<<endl;
					gotoxy (70,12);cout<<"No. interno: "<<empleados.direc.no_int<<endl;
					gotoxy (70,13);cout<<"No. externo: "<<empleados.direc.no_ext<<endl;
					gotoxy (70,14);cout<<"Código postal: "<<empleados.direc.cp<<endl;
					getch ();
				}
					im >>empleados.num ;
					fflush(stdin);
			}
		}
	}
	else {
		error();
	}
    im.close ();
}

void cambios (){  
	ifstream leer;
	string aux;
	ofstream auxili ;
	bool encontrado= false ;
    leer.open("personas.txt",ios::in);
    auxili.open("auxiliar.txt", ios::out);
   if(leer.is_open()&& auxili.is_open()){
   		fflush(stdin);
		gotoxy (67,1);cout <<"*****************BAJAS DE DATOS******************";
		int c=1 ;
		for  (int i = 1 ; i <= 14; i ++){
			c = c+1 ;
			gotoxy (67,c  );	cout << "*";
			gotoxy (115, c  );	cout << "*"; 
		}
		gotoxy (67,16);	cout << "*************************************************";
		char baja ;
		gotoxy (70, 2);cout << "Ingrese la posición a cambiar: "; getline (cin, aux) ;
		if (aux > "99"){
			gotoxy(70,5);cout << "Posición fuera de rango intenta otra posición ";
			getch ();
		}
		else {
		getline(leer, empleados.num);
			while (!leer. eof()){
				getline (leer,empleados.nombre );
				getline (leer,empleados.ap_pat);
				getline (leer,empleados.ap_mat );
				getline (leer,empleados.correo );
				getline (leer,empleados.edad);
				getline (leer,empleados.numero);
				getline (leer,empleados.direc.calle );
				getline (leer,empleados.direc.colonia );
				getline (leer,empleados.direc.no_int);
				getline (leer,empleados.direc.no_ext );
				getline (leer,empleados.direc.cp );
				if (empleados.num==aux){
        			encontrado = true ;
					gotoxy (70,3);cout << "Los valores  de la posición: "<< empleados.num<<endl ;
					gotoxy (70,4);cout<<"Nombre: "<<empleados  .nombre<<endl;
					gotoxy (70,5);cout<<"Apellido paterno: "<<empleados.ap_pat<<endl;
					gotoxy (70,6);cout<<"Apellido materno: "<<empleados.ap_mat<<endl;	
					gotoxy (70,7);cout<<"Correo: "<<empleados.correo<<endl;
					gotoxy(70,8);cout<<"Edad: "<<empleados.edad<<endl;
					gotoxy(70,9);cout<<"Teléfono: "<<empleados.numero<<endl;
					gotoxy (70,10);cout<<"Calle: "<<empleados.direc.calle<<endl;
					gotoxy (70,11);cout<<"Colonia: "<<empleados.direc.colonia<<endl;
					gotoxy (70,12);cout<<"No. interno: "<<empleados.direc.no_int<<endl;
					gotoxy (70,13);cout<<"No. externo: "<<empleados.direc.no_ext<<endl;
					gotoxy (70,14);cout<<"Código postal: "<<empleados.direc.cp<<endl;
					gotoxy(70,15);cout <<"cambiar s/n:";cin >> baja ;
					if (baja =='s'){
						gotoxy (1,17);cout <<" ********************************************** ";
						gotoxy (1,18);cout <<" *          Menu de cambios                   * ";
						gotoxy (1,19);cout <<" ********************************************** ";
						gotoxy (1,20);cout <<" *       1. Cambios de nombre                 * ";
						gotoxy (1,21);cout <<" *       2. Cambios de apellido paterno       * ";
						gotoxy (1,22);cout <<" *       3. Cambios de apellido materno       * ";
						gotoxy (1,23);cout <<" *       4. Cambios de correo                 * ";
						gotoxy (1,24);cout <<" *       5. Cambios de edad                   * ";
						gotoxy (1,25);cout <<" *       6. Cambios de telefono               * ";
						gotoxy (1,26);cout <<" *       7. Cambios de calle                  * ";
						gotoxy (1,27);cout <<" *       8. Cambios de colonia                * ";
						gotoxy (1,28);cout <<" *       9. Cambios de No.interno             * ";
						gotoxy (1,29);cout <<" *       10. Cambios de No.exterior           * ";
						gotoxy (1,30);cout <<" *       11. Cambios de Codigo postal         * ";
						gotoxy (1,31);cout <<" *       12. Cambios de total de datos        * ";
						gotoxy (1,32);cout <<" *       0. salir                             * ";
	 				    gotoxy (1,33);cout <<" ********************************************** ";
						gotoxy (1,34);cout <<" *       Elige una opción:                    * ";
						gotoxy (1,35);cout <<" ********************************************** ";
						int opcion;	do{
							gotoxy(32,34);cout <<"    ";
							gotoxy(32,34);cin >>opcion ;
							switch(opcion)	{
								case 0: break;
								case 1: 	gotoxy(70,17);cout<<"Digite el nombre: ";cin>>empleados.nombre;fflush(stdin); break;
								case 2: 	gotoxy(70,18);cout<<"Digite el apellido paterno: ";cin>>empleados.ap_pat;fflush(stdin);  break;
								case 3: 	gotoxy(70,19);cout<<"Digite el apellido materno: ";cin>>empleados.ap_mat;fflush(stdin);	break;
								case 4: 	gotoxy(70,20);cout<<"Digite el correo: ";cin>>empleados.correo;fflush(stdin);break;
								case 5:		gotoxy(70,21);cout<<"Digite la edad: ";cin>>empleados.edad;fflush(stdin);break;
								case 6: 	gotoxy(70,22);cout<<"Digite el teléfono: ";cin>>empleados.numero;fflush(stdin); break;
								case 7: 	gotoxy(70,23);cout<<"Digite su calle: ";cin>>empleados.direc.calle;fflush(stdin); break;
								case 8: 	gotoxy(70,24);cout<<"Digite su colonia: ";cin>>empleados.direc.colonia;fflush(stdin); break;
								case 9: 	gotoxy(70,25);cout<<"Digite su No. interno: ";cin>>empleados.direc.no_int;fflush(stdin); break;
								case 10: 	gotoxy(70,26);cout<<"Digite su No. externo: ";cin>>empleados.direc.no_ext;fflush(stdin); break;
								case 11: 	gotoxy(70,27);cout<<"Digite su código postal: ";cin>>empleados.direc.cp;fflush(stdin);break;
								case 12:  
									gotoxy(70,17);cout<<"Digite el nombre: ";
									cin>>empleados.nombre;
									fflush(stdin); 
									gotoxy(70,18);cout<<"Digite el apellido paterno: ";
									cin>>empleados.ap_pat;
									fflush(stdin); 
									gotoxy(70,19);cout<<"Digite el apellido materno: ";
									cin>>empleados.ap_mat;
									fflush(stdin);
									gotoxy(70,20);cout<<"Digite el correo: ";
									cin>>empleados.correo;
									fflush(stdin);
									gotoxy(70,21);cout<<"Digite la edad: ";
									cin>>empleados.edad;
									fflush(stdin); 
									gotoxy(70,22);cout<<"Digite el teléfono: ";
									cin>>empleados.numero;
									fflush(stdin); 
									gotoxy(70,23);cout<<"Digite su calle: ";
									cin>>empleados.direc.calle;
									fflush(stdin);
									gotoxy(70,24);cout<<"Digite su colonia: ";
									cin>>empleados.direc.colonia;
									fflush(stdin);
									gotoxy(70,25);cout<<"Digite su No. interno: ";
									cin>>empleados.direc.no_int;
									fflush(stdin);
									gotoxy(70,26);cout<<"Digite su No. externo: ";
									cin>>empleados.direc.no_ext;
									fflush(stdin);
									gotoxy(70,27);cout<<"Digite su código postal: ";
									cin>>empleados.direc.cp;
									fflush(stdin);break;			
								default : gotoxy (5,12); cout << "Usted ingresó una opcion incorrecta ";
								getch();	
							}	
						}while (opcion > 0 );
						auxili<<empleados.num<<"\n"<<empleados.nombre<<"\n"<<empleados.ap_pat<<"\n"<< empleados.ap_mat<<"\n"<<empleados.correo<<"\n"<<empleados.edad<<"\n"<<empleados.numero<<"\n"<<empleados.direc.calle<<"\n" <<empleados.direc.colonia<<"\n"<<empleados.direc.no_int<<"\n"<<empleados.direc.no_ext<<"\n"<<empleados.direc.cp<<"\n";
						gotoxy (70,28);cout << "El valor cambió satisfactoramente ";
						getch();
					}
					else {
						gotoxy(70,16);cout <<"El usuario no ha sido cambiado ";
						auxili<<empleados.num<<"\n"<<empleados.nombre<<"\n"<<empleados.ap_pat<<"\n"<< empleados.ap_mat <<"\n"<<empleados.correo<<"\n"<<empleados.edad<<"\n"<<empleados.numero<<"\n"<<empleados.direc.calle<<"\n" <<empleados.direc.colonia<<"\n"<<empleados.direc.no_int<<"\n"<<empleados.direc.no_ext<<"\n"<<empleados.direc.cp<<"\n";		
						getch ();
					}
				}
				else {
					auxili<<empleados  .num<<"\n"<<empleados.nombre<<"\n"<<empleados.ap_pat<<"\n"<< empleados.ap_mat <<"\n"<<empleados.correo<<"\n"<<empleados.edad<<"\n"<<empleados.numero<<"\n"<<empleados.direc.calle<<"\n" <<empleados.direc.colonia<<"\n"<<empleados.direc.no_int<<"\n"<<empleados.direc.no_ext<<"\n"<<empleados.direc.cp<<"\n";
				}	
				getline (leer,empleados.num);
   			}
			if (encontrado ==false ){
				cout<< "No hay registros de este No.";
	        }
		}
   }
	else {
		error (); 
	}
	leer.close ();
	auxili.close();
	remove ("personas.txt");
	rename("auxiliar.txt","personas.txt");
    getch();
}

void bajas (){  
	ifstream leer;
	string aux;
	ofstream auxili ;
	bool encontrado= false ;
    leer.open("personas.txt",ios::in);
    auxili.open("auxiliar.txt", ios::out);
   if(leer.is_open()&& auxili.is_open()){
   	fflush(stdin);
		gotoxy (67,1);cout <<"*****************BAJAS DE DATOS******************";
		int c=1 ;
		for  (int i = 1 ; i <= 14; i ++){
			c = c+1 ;
			gotoxy (67,c  );	cout << "*";
			gotoxy (115, c  );	cout << "*"; 
		}
		gotoxy (67,16);	cout << "*************************************************";
		char baja ;
		gotoxy (70, 2);cout << "Ingrese la posición a dar de baja: "; getline (cin, aux) ;
		if (aux> "99"){
			gotoxy(70,5);cout << "Posición fuera de rango intenta otra posición ";
			getch ();
		}
		else {
			getline(leer, empleados.num);
			while (!leer. eof()){
				getline (leer,empleados.nombre );
				getline (leer, empleados.ap_pat);
				getline (leer,empleados.ap_mat );
				getline (leer,empleados.correo );
				getline (leer, empleados.edad);
				getline (leer, empleados.numero);
				getline (leer,empleados.direc.calle );
				getline (leer,empleados.direc.colonia );
				getline (leer, empleados.direc.no_int);
				getline (leer,empleados.direc.no_ext );
				getline (leer,empleados.direc.cp );
				if (empleados.num== aux){
        			encontrado = true ;
					gotoxy (70,3);cout << "Los valores  de la posición: "<< empleados.num<<endl ;
					gotoxy (70,4);cout<<"Nombre: "<<empleados.nombre<<endl;
					gotoxy (70,5);cout<<"Apellido paterno: "<<empleados.ap_pat<<endl;
					gotoxy (70,6);cout<<"Apellido materno: "<<empleados.ap_mat<<endl;	
					gotoxy (70,7);cout<<"Correo: "<<empleados.correo<<endl;
					gotoxy(70,8);cout<<"Edad: "<<empleados.edad<<endl;
					gotoxy(70,9);cout<<"Teléfono: "<<empleados.numero<<endl;
					gotoxy (70,10);cout<<"Calle: "<<empleados.direc.calle<<endl;
					gotoxy (70,11);cout<<"Colonia: "<<empleados.direc.colonia<<endl;
					gotoxy (70,12);cout<<"No. interno: "<<empleados.direc.no_int<<endl;
					gotoxy (70,13);cout<<"No. externo: "<<empleados.direc.no_ext<<endl;
					gotoxy (70,14);cout<<"Código postal: "<<empleados.direc.cp<<endl;
					gotoxy(70,15);cout <<"Dar de baja s/n:";cin >> baja ;
					if (baja =='s'){
						gotoxy(70,16);cout <<"El usuario ha sido dado de baja"; 
						getch();
					}
					else {
						gotoxy(70,16);cout <<"El usuario no ha sido dado de baja";
						auxili<<empleados  .num<<"\n"<<empleados.nombre<<"\n"<<empleados.ap_pat<<"\n"<< empleados.ap_mat <<"\n"<<empleados.correo<<"\n"<<empleados.edad<<"\n"<<empleados.numero<<"\n"<<empleados.direc.calle<<"\n" <<empleados.direc.colonia<<"\n"<<empleados  .direc.no_int<<"\n"<<empleados.direc.no_ext<<"\n"<<empleados.direc.cp<<"\n";		
						getch ();
					}
				}
				else {
					auxili<<empleados.num<<"\n"<<empleados.nombre<<"\n"<<empleados.ap_pat<<"\n"<< empleados.ap_mat <<"\n"<<empleados.correo<<"\n"<<empleados.edad<<"\n"<<empleados.numero<<"\n"<<empleados.direc.calle<<"\n" <<empleados.direc.colonia<<"\n"<<empleados.direc.no_int<<"\n"<<empleados.direc.no_ext<<"\n"<<empleados.direc.cp<<"\n";
				}		
				getline (leer,empleados.num);
			}
			if (encontrado ==false ){
				cout<< "No hay registros de este No.";
			}
   		}
   }
	else {
		error (); 
	}
	leer.close ();
	auxili.close();
	remove ("personas.txt");
	rename("auxiliar.txt","personas.txt");
    getch();
}

int main (){
	system ("color 8F") ;setlocale(LC_ALL,"spanish"); 
	int opcion ;
	do{
		menu();
		gotoxy(33,11);cin >>opcion ;
		switch(opcion)
		{
			case 0: break;
			case 1: altas(); break;
			case 2: bajas(); break;
			case 3: consulta();	break;
			case 4:cambios(); break;
			case 5: despliega(); break;
			default : gotoxy (5,11); cout << "Usted ingresó una opcion incorrecta ";
			getch();	
		}	
	}while (opcion > 0 );
}
