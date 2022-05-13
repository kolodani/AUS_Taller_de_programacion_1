#include <stdio.h>

#define ANYO 2022
#define POSITIVO(X) (X>0)?1:0

int main() {
   printf("HOLA %d\n", ANYO);

   if(POSITIVO(ANYO)>0) {
      printf("Este es un anyo positivo!!!");
   }

   return 0;
}
