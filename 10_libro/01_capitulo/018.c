#include <stdio.h>

//prototipos
int menu();
void cartel();
int convertir_a_fahrenheit();
int convertir_a_celsius();

int main()
{
    // variables
    int respuesta;
    // codigo
    respuesta = menu();
    
    if (respuesta == 1)
    {
        cartel();
        convertir_a_fahrenheit();
    }
    else if (respuesta == 2)
    {
        cartel();
        convertir_a_celsius();
    }
    else
    {
        printf("Ingrese una opcion valida\n");
    }
    
    return 0;
}

int menu()
{
    int respuesta;
    printf("Ingrese que conversor quiere usar: \n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("> ");
    scanf("%d", &respuesta);
}
void cartel()
{
    printf("Ingrese la temperatura a convertir: \n");
    printf("> ");
}

int convertir_a_fahrenheit()
{
    float temperatura;
    scanf("%f", &temperatura);
    printf("%.1f en Celsius es %.1f en Fahrenheit\n", temperatura, temperatura * 9.0 / 5.0 + 32.0);
}

int convertir_a_celsius()
{
    float temperatura;
    scanf("%f", &temperatura);
    printf("%.1f en Fahrenheit es %.1f en Celsius\n", temperatura, (temperatura - 32.0) * 5.0 / 9.0);
}