
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
int main (){
 int i,j,n=11,v,a=10,c=1;
 
 
  for(i=0;i<n;i++){
    for(j=i;j<n;j++)
    {
     gotoxy(10+j,5-i);cout<<"*";}
    n= n-1;}
  /*linea */
  	for (v =1;v<=a;v++){
		c=c+1;
gotoxy (15,c );	cout << "*"; }

getch();
  return 0;}
