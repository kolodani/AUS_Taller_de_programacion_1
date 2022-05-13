#include <stdio.h>

//Queremos mostrar los enteros del 1 al 100

int main() {
   int i = 1;  //inicializar la variable

   printf("Lista de los numeros del 1 al 100 - WHILE\n");
   while (i<=100) {
      printf("%d ", i);
       i = i + 1;    //cambio de la variable involucrada en la condicion     i+=1;    i++;  ++i;
   }

   /*
   inicializo
   while(condicion) {
       //cuerpo
      cambio_variable
   }
    */

   printf("\n\nLista de los numeros del 1 al 100 - FOR\n");
    //   (1)   (2)    (4)
   for (i=1; i<=100; i++) {
         //(3)
         printf("%d ", i);
   }

   printf("\n\nLista de los numeros del 1 al 100 - FOR - desmembrado\n");
   i=1;
   for ( ; i<=100; ) {
      printf("%d ", i);
      i++;
   }

   printf("\n\nLista de los numeros del 100 al 1 - FOR\n");
   for (i=100; i>=1; i--) {
         printf("%d ", i);
   }

   return 0;
}
