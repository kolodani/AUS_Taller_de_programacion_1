#include <stdio.h>
/*imprime la tabla Farenheit-Celsius*/

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;          /*limite inferior de la table de temperaturas*/
    upper = 300;        /*limite superior*/
    step = 20;          /*tamano del incremento*/
    
    fahr = lower;
    printf("%s\n", "Fahrenheit\tCelsius");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32);
        fahr = fahr + step;
    }
    
    return 0;
}
