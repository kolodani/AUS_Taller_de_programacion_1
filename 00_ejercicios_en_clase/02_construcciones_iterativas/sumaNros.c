#include <stdio.h>

// 1    al 100
/* 1+100 = 101
   2+99 = 101
   3+98 = 101
   50+51= 101
   5050
*/
//Queremos mostrar la suma de los enteros del 1 al 100

int main() {
   int i = 1;
   int suma = 0;

   while (i<=100) {
      suma = suma + i;
      i++;
      printf(" > suma=%d - i=%d \n", suma, i);
   }

   printf("La suma de los primeros 100 enteros positivos es: %d\n", suma);


   return 0;
}
