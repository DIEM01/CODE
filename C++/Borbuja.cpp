#include<conio.h>
#include <iostream>
#include<math.h>
#include <windows.h>
using namespace std;
int main (){
	
int A [6]={55, 86, 32, 12, 82, 43}, num,i,j,aux;

num = A[6];
i = 0;
while (i < num)
      j = i;
      while (j < num)
              if (A[i] > A[j])
                      aux = A[i];
                      A[i] = A[j];
                      A[j] = aux;
              j = j + 1;
      i = i + 1;

	return 0;// prueba 2
}
