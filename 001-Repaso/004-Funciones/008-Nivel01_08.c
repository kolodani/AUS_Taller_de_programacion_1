// Crear una función que recibe un entero positivo menor o igual a a 10 e
// imprima por pantalla una pirámide similar a esta.
// Ejemplo para 5. Tip : tener en cuenta los espacios y antes de programar pensar en el algoritmo.
//     1
//    121
//   12321
//  1234321
// 123454321

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;
    int bucle = 1;
    do
    {
        printf("Ingresa un entero [1, 9] y tendras una piramide de numeros:\n");
        printf("> ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 9);

    int espacios = numero - 1;

    while (numero > 0)
    {
        for (int i = 0; i < espacios; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= bucle; i++)
        {
            printf("%d", i);
        }
        for (int i = bucle; i >= 2; i--)
        {
            printf("%d", i - 1);
        }
        bucle++;
        espacios--;
        numero--;
        printf("\n");
    }

    return 0;
}
