/*
Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N, luego determine si son:
- iguales: cuando cada componente ubicada en misma posición coincide.
- similares frente a suma: cuando no tienen las mismas componentes pero la suma de los elementos coincide
- diferentes: cuando no coinciden ni en las componentes ni en la suma
*/

#include <stdio.h>
#define L 10

int main()
{
    // declaracion de variables
    int i;
    int igualdad = 0, sumaM = 0, sumaN = 0;
    int M[L], N[L];
    // declaracion de arrays
    printf("Ingrese los 10 valores enteros en el rango [0, 50] para el array M: \n");
    for (i = 0; i < L; i++)
    {
        printf("ingrese el valor %d al arreglo M: \n", i + 1);
        printf("> ");
        scanf("%d", &M[i]);
        if (M[i] < 0 || M[i] > 50)
        {
            printf("El valor ingresado no esta en el rango [0, 50]\n");
            i--;
        }
    }
    printf("Ingrese los 10 valores enteros en el rango [0, 50] para el array N: \n");
    for (i = 0; i < L; i++)
    {
        printf("ingrese el valor %d al arreglo N: \n", i + 1);
        printf("> ");
        scanf("%d", &N[i]);
        if (N[i] < 0 || N[i] > 50)
        {
            printf("El valor ingresado no esta en el rango [0, 50]\n");
            i--;
        }
    }
    // muestro los valores de los arrays
    printf("El array M es: \n");
    printf("[ ");
    for (i = 0; i < L; i++)
    {
        printf("%d ", M[i]);
    }
    printf("]\n");
    printf("El array N es: \n");
    printf("[ ");
    for (i = 0; i < L; i++)
    {
        printf("%d ", N[i]);
    }
    printf("]\n");
    //igualdad de arrays
    for (i = 0; i < L; i++)
    {
        if (M[i] == N[i])
        {
            igualdad++;
        }
    }
    //similares frente a suma
    for (i = 0; i < L; i++)
    {
        sumaM = sumaM + M[i];
        sumaN = sumaN + N[i];
    }
    // salida por pantalla
    if (igualdad == L)
    {
        printf("Los arrays son iguales\n");
    }
    else if (sumaM == sumaN && igualdad != L)
    {
        printf("Los arrays son similares frente a suma\n");
    }
    else if (igualdad != L && sumaM != sumaN)
    {
        printf("Los arrays son diferentes\n");
    }
    return 0;
}
