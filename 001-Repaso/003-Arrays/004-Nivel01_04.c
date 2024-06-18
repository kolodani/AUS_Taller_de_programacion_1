// Declare un array A de N floats, se realice la carga manual y pida al usuario un float f en el rango (0, 100] y en un nuevo array P establezca los elementos de esta forma. Cada elemento P[i] debe ser de la forma A[i]*f para i=0...N-1.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tama;
    float f;

    printf("Ingrese el tamaño del arreglo:\n");
    printf("> ");
    scanf("%d", &tama);

    float A[tama];
    float P[tama];

    printf("Ahora ingrese valores flotantes entre (0,100] del arreglo de tamaño %d:\n", tama);
    for (int i = 0; i < tama; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%f", &A[i]);
        if (A[i] <= 0 || A[i] > 100)
        {
            printf("Los valores ingresados tienen que ser mayores que 0 y menores o iguales a 100: (0,100].");
            i--;
        }
    }

    printf("Por ultimo, Ingrese un flotante f, para multiplicar el arreglo:\n");
    printf("> ");
    scanf("%f", &f);

    printf("El arreglo P, que cada componente P[i] = A[i] * f, donde i=0...n-1.\n");
    for (int i = 0; i < tama; i++)
    {
        P[i] = A[i] * f;
        printf("%f ", P[i]);
    }
    return 0;
}
