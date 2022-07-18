#include <stdio.h>
/*imprime la tabla Celsius-Fahrenheit*/

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;   /*limite inferior de la table de temperaturas*/
    upper = 300; /*limite superior*/
    step = 20;   /*tamano del incremento*/
    
    celsius = lower;
    printf("%s\n", "Fahrenheit\tCelsius");
    while (celsius <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32;
        printf("%3.1f\t\t%6.1f\n", fahr, celsius);
        celsius = celsius + step;
    }

    return 0;
}
