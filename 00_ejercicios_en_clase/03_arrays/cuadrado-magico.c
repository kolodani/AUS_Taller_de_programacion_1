#include<stdio.h>

#define ROWS 3
#define COLS 3

int main() {              // 0  1  2  3  4  5  6  7  8
   int TESTIGO[9] = {0};  //[0, 0, 1, 0, 0, 1, 0, 0, 2]
   int M[ROWS][COLS];
   int i, j;

   //Carga de la matriz
   for(i=0; i<ROWS; i++) {
      for(j=0; j<COLS; j++) {
         printf("Posicion\n");
          //Obligar que se carguen nros 1 a 9
         do {
            printf("(%d,%d)> ", i,j);
            scanf("%d",&M[i][j]);
         } while(M[i][j]<1 || M[i][j]>9);
      }
   }

   //Nros sean todos diferentes o no repitan
   for(i=0; i<ROWS; i++) {
      for(j=0; j<COLS; j++) {
         TESTIGO[ M[i][j] - 1] ++;
         if (TESTIGO[ M[i][j] -1 ] > 1) {
            printf("Numero repetido en posicion (%d, %d)!!!\n", i, j);
            printf("Esto no puede ser un cuadrado magico!!\n");
            return 1;
         }
      }
   }

   //Impresion
   printf("\n");
   for(i=0; i<ROWS; i++) {
      for(j=0; j<COLS; j++) {
         printf("%d ", M[i][j]);
      }
      printf("\n");
   }

   //Tenemos una matriz 3x3 con numeros del 1 al 9 sin repetir
   int suma;

   //Verificamos filas
   for(i=0; i<ROWS; i++) {
      suma=0;
      for(j=0; j<COLS; j++) {
         suma += M[i][j];
      }
      if(suma!=15) {
         printf("Esto no puede ser un cuadrado magico porque la fila %d no suma 15!!!\n", i+1);
         return 1;
      }
   }

   //Verificamos columnas
   for(j=0; j<COLS; j++) {
      suma=0;
      for(i=0; i<ROWS; i++) {
         suma = suma + M[i][j];
      }
      if(suma!=15) {
         printf("Esto no puede ser un cuadrado magico porque la columna %d no suma 15!!!\n", j+1);
         return 1;
      }
   }

   //Verificamos diagonales
   suma=0;
   for(i=0; i<ROWS; i++) {
         suma += M[i][i];
   }
   if(suma!=15) {
      printf("Esto no puede ser un cuadrado magico porque la diagonal principal no suma 15!!!\n");
      return 1;
   }

   suma=0;
   for(i=0; i<ROWS; i++) {
         suma += M[i][2-i];
   }
   if(suma!=15) {
      printf("Esto no puede ser un cuadrado magico porque la diagonal secundaria no suma 15!!!\n");
      return 1;
   }

   printf("ESTO ES UN CUADRADO MAGICO!!!!\n");

   return 0;
}
