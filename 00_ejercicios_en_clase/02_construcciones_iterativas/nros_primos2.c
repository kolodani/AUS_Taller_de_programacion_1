#include <stdio.h>
#include <math.h>
#define N 100

int main() {

   int i;
   unsigned short int ndiv = 0;  //para contar cant de divisores
   int div;  //divisores posibles de un nro
   int sqrt_i;

   for(i=2; i<=N; i++) { //i va de 2 .. 100
      //inicializar variables
      div=1;
      ndiv=0;

      //chequeo de divisores de i
      sqrt_i = sqrt(i);  //square root
      while(div <= sqrt_i && ndiv <= 1) {  //dentro de la cond usamos el resultado de sqrt no re-calculamos
         if(i%div == 0) {
            ndiv++;
         }
         div++;
      } //while-end

      if (ndiv==1) {
         printf("El numero %d es PRIMO.\n", i);
      }

   } //for-end

   return 0;
}
