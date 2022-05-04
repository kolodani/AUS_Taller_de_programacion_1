#include <stdio.h>
#include <stdlib.h> /* srand() y rand() */
#include <time.h>

int main()
{
    int secreto;
    int intento, cant_intentos = 0;

    srand(time(NULL));
    secreto = 1 + rand() % 1000; /* numero al azar entre 1 y 1000 */

    do
    {
        printf("Adivine: ");
        scanf("%d", &intento);
        cant_intentos++;

        if (intento < secreto)
        {
            printf("Piense en un numero mas GRANDE \n");
        }
        else if (intento > secreto)
        {
            printf("Piense en un numero mas CHICO \n");
        }
        else
        {
            printf("ACERTO !!!");
            break;
        }
    } while (intento != secreto);

    printf("necesito %d intentos!\n", cant_intentos);

    return 0;
}