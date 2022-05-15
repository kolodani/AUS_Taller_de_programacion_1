#include <stdio.h>

/*
tipo_retorno nombre_funcion (parametros) {
   cuerpo de funcion
}
*/

//f(x)=x+1
int f(int x) {    //x es un parametro de la funcion
   return x+1;
}

//h(x)=3x
int h(int); //Declaración o prototipo de funcion

int main() {

   int y = f(8);    //le paso 8 como argumento
   printf("y vale %d\n", y);

   y = h(8);
   printf("y vale %d\n", y);


   return 0;
}

//Definicion
int h(int x) {
   return 3*x;
}
