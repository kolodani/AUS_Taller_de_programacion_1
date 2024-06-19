// Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N, luego determine si son:
// - iguales:cuando cada componente ubicada en misma posición coincide.
// - similares frente a suma:cuando no tienen las mismas componentes pero la suma de los elementos coincide
// - diferentes:cuando no coinciden ni en las componentes ni en la suma

#include <stdio.h>

#define D 10

int main(int argc, char const *argv[])
{
    int M[D], N[D];
    int iguales = 0;
    int sumaM = 0;
    int sumaN = 0;

    printf("Ingrese los valores del arreglo M.\n");
    for (int i = 0; i < D; i++)
    {
        printf("M[%d]: ", i + 1);
        scanf("%d", &M[i]);
        if (M[i] < 0 || M[i] > 50)
        {
            printf("Ingrese valores entre 0 y 50.\n");
            i--;
        }
    }

    printf("Ingrese los valores del arreglo N.\n");
    for (int i = 0; i < D; i++)
    {
        printf("N[%d]: ", i + 1);
        scanf("%d", &N[i]);
        if (N[i] < 0 || N[i] > 50)
        {
            printf("Ingrese valores entre 0 y 50.\n");
            i--;
        }
    }

    for (int i = 0; i < D; i++)
    {
        if (M[i] == N[i])
        {
            iguales++;
        }
        sumaM = sumaM + M[i];
        sumaN = sumaN + N[i];
    }

    if (iguales == D)
    {
        printf("Los arreglos M y N son iguales.\n");
    }
    else if (sumaM == sumaN)
    {
        printf("La suma de los arreglos M y N son iguales.\n");
    }
    else
    {
        printf("Los arreglos M y N son totalmente distintos.\n");
    }

    return 0;
}
