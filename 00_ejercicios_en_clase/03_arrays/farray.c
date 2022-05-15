#include <stdio.h>
#define N 10
#define TRUE 1
#define FALSE 0

int global=0;

//Declaraciones
void carga_array(int[]);
void mostrar_array(int[]);
int mayor(int[], int); //retorna TRUE si el entero supera a todos los elementos del array, FALSE caso contrario
void divide10(int[]);

int main() {
   int A[N];
   int nro;

   //cargo un array
   carga_array(A);

   //mostrar el array
   mostrar_array(A);

   //pido un numero
   printf("Ingrese un numero: ");
   scanf("%d", &nro);

   //veo si ese nro es mas grande que todos los elementos del array
   if(mayor(A, nro)==TRUE) {
      printf("%d rocks!!!\n", nro);
   } else {
      printf("Uno mas del monton.....\n");
   }

   //a todo elemento del array multiplo de 10 lo lo divido por 10
   divide10(A);
   //mostrar el array
   mostrar_array(A);

   //a los numeros pares le sumo 1
   //mostrar el array

   printf("\n\nGLOBAL--->%d",global);
   printf("\n tamaño de void--->%d\n", sizeof(void));
   return 0;
}


void carga_array(int X[]) {
   int i;
   for(i=0; i<N; i++) {
      printf("Ingrese [%d]: ", i);
      scanf("%d", &X[i]);
   }
}

void mostrar_array(int A[]) {
   int i;
   printf("{ ");
   for(i=0; i<N; i++) {
      printf("%d ", A[i]);
   }
   printf("}\n");
   global++;
}

int mayor(int E[], int n) {
   int i;
   for(i=0; i<N; i++) {
      if(E[i] >= n) {
         return FALSE;
      }
   }
   return TRUE;
}

void divide10(int A[]) {
   int i;
   for(i=0; i<N; i++) {
      if(A[i]%10==0) {
         A[i]=A[i]/10;
      }
   }
}
