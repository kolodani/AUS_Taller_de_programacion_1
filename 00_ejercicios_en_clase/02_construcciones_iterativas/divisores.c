#include <stdio.h>

int main() {
   int n, i;
   int divisores=0;

   printf("Ingrese un entero positivo:\n");
   do {
      printf("-> ");
      scanf("%d", &n);
   } while(n<=0);

   /*   1    2 */ /*4*/
   for(i=1; i<=n; i++) {
      /*3*/
      if(n%i == 0) {
         printf("--> %d es un divisor de %d\n", i, n);
         divisores++;
      }
   }
   printf("Los divisores de n son en total %d\n", divisores);

   return 0;
}
