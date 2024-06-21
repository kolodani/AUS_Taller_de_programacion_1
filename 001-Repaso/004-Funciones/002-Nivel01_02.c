// Reciba una temperatura expresada en grados Celsius y conviértala en Farenheit mediante una función.
// Crear además la función que realice la acción inversa.

#include <stdio.h>

double toFarenheit(double);
double toCelcius(double);
double ingreso();

int main(int argc, char const *argv[])
{
    int respuesta;
    double temperatura, conversion;

    printf("Convertidor de temperaturas: Celsius a Farenheit y Farenheit a Celsius.\n");
    printf("1) Celsius a Farenheit\n");
    printf("2) Farenheit a Celsius\n");
    printf("> ");
    scanf("%d", &respuesta);

    switch (respuesta)
    {
    case 1:
        temperatura = ingreso();
        conversion = toFarenheit(temperatura);
        printf("Convertiste %f grados Celsius a %f grados Farenheit", temperatura, conversion);
        break;

    case 2:
        temperatura = ingreso();
        conversion = toCelcius(temperatura);
        printf("Convertiste %f grados Farenheit a %f grados Celsius", temperatura, conversion);
        break;

    default:
        printf("Opcion invalida, fin del programa");
        break;
    }


    return 0;
}

double ingreso(){
    double temperatura;
    printf("Ingrese un valor de temperatura:\n");
    printf("> ");
    scanf("%lf", &temperatura);
    return temperatura;
}

double toFarenheit(double temp){
    temp = (temp * (9.0/5.0)) + 32;
    return temp;
}

double toCelcius(double temp){
    temp = (temp - 32) * (5.0/9.0);
    return temp;
}