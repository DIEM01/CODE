#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
using namespace std;

struct info_direccion{
	char direccion[50];
	char ciudad[20];
	int cp;
};

struct empleado{
	char nombre[30];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){
	
	for(int i=0;i<2;i++){
		cout<<"Digite el nombre: ";
		cin.getline(empleados[i].nombre,30,'\n');
		cout<<"Digite su direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,50,'\n');
		cout<<"Digite Ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout<<"Digite su Codigo Postal: ";
		cin>>empleados[i].dir_empleado.cp;
		cout<<"Digite su salario: ";
		cin>>empleados[i].salario;
		fflush(stdin);    
		cout<<"----------------------------------------------\n";
	}
	
	//imprimir datos
	
	for(int i=0;i<2;i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Codigo Postal: "<<empleados[i].dir_empleado.cp<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		fflush(stdin);    
		cout<<"-------------------------------------------------------------\n";
	}
	
	getche();
	return 0;
}
