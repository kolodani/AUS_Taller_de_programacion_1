#include <stdio.h>

//break & continue

int main() {

   int i;

   for (i=1; i<=10; i++) {

         if (i%2!=0) {
           continue;  //evita el resto del cuerpo del bucle para ese valor de i
         }

         printf("%d ", i);
         //break;   //sale del bucle, va a (*)
   }
   //(*)

   printf("\n");


   return 0;
}
