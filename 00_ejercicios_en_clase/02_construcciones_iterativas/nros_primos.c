#include <stdio.h>
#define N 100

int main() {

   int i;
   unsigned short int ndiv = 0;  //para contar cant de divisores
   int div;  //divisores posibles de un nro

   for(i=2; i<=N; i++) { //i va de 1 .. 100
      //inicializar variables
      div=1;
      ndiv=0;

      //chequeo de divisores de i
      while(div <= i) {
         if(i%div == 0) {
            ndiv++;
         }
         div++;
      } //while-end

      printf("El numero %d tiene tantos %d divisores.", i, ndiv);

      if (ndiv==2) {
         printf(" Y es un numero primo...");
      }
      printf("\n");

   } //for-end

   return 0;
}
