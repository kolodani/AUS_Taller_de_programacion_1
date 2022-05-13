#include <stdio.h>

//varianza es la suma de las diferencias al cuadradado (x-PROM)

/*int nros[10];
  0  1  2  3  4  5   6   7  8  9
[ 4 ,  ,  ,  ,  ,  , 33 ,  ,  ,  ]

nros[6]=33;
nros[0]=4;
nros[10]=300; NO!!!
*/

int main() {

   int i;
   int nros[10];
   int suma=0;
   float prom=0;

   for(i=0; i<10; i++) {
       printf("Ingrese el nro %d: ", i+1);
       scanf("%d", &nros[i]);
       suma += nros[i];
   }

   prom = suma/10.0;

   printf("La suma es %d. El promedio es %f\n", suma, prom);

   //Calculo la varianza
   float varianza;
   float sumavar=0;
   for(i=0; i<10; i++) {
       sumavar += (nros[i]-prom)*(nros[i]-prom);
   }

   varianza = sumavar / 10;
   printf("La varianza es %2.f\n", varianza);

   return 0;
}
