#include<stdio.h>

#define N 5
#define ROWS 5
#define COLS 4

int main() {
    int SUMA[ROWS]={0};
    int M[ROWS][COLS];
    int i, j;

    //Carga de la matriz
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLS; j++) {
            printf("Posicion FILA:%d - COL:%d: ", i, j);
            scanf("%d",&M[i][j]);
            SUMA[i] = SUMA[i] + M[i][j];
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

    for(i=0; i<ROWS; i++) {
        printf("Los elementos de la fila %d de la matriz suman %d\n", i, SUMA[i]);
    }

    return 0;
}
