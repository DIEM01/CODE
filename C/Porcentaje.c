#include <stdio.h >

int main (){
float x, porce;
printf("este progragramam da la informacion de compra\n");

printf ("dame el total de la compra\n");
scanf ("%f", &x);

porce = (x *15)/ 100;




printf ("lo que debes pagar es: %.2f ", x - porce  );
return 0;
}
