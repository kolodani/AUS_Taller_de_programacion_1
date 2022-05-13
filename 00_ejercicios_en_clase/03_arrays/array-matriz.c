#include<stdio.h>

#define N 5
#define ROWS 5
#define COLS 4

int main() {
   //int A[N];
   int M[ROWS][COLS];
   int i, j;

   /*
   for (i=0; i<N; i++) {
      printf("Posicion [%d]: ", i);
      scanf("%d", &A[i]);
   }

   printf("Contenido del array\n");
   for(i=0; i<N; i++) {
      printf("%d ", A[i]);
   }
   printf("\n");
*/
   //Carga de la matriz
   for(i=0; i<ROWS; i++) {
      for(j=0; j<COLS; j++) {
         printf("Posicion FILA:%d - COL:%d: ", i, j);
         scanf("%d",&M[i][j]);
      }
   }

   printf("\n");
   for(i=0; i<ROWS; i++) {
      for(j=0; j<COLS; j++) {
         printf("%d ", M[i][j]);
      }
      printf("\n");
   }



   return 0;
}
