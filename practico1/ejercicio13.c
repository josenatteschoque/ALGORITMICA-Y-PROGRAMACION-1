/*Ejercicio 13. Escriba un programa que permita ingresar un número natural N y otro número natural M, e
imprima el resultado de N elevado a la M calculándolo como suma sucesivas. (PS) (PE N=5, M=3)*/

#include <stdio.h>

int main() 
{
    int num1, num2;
    printf("Ingrese un numero natural: ");
    scanf("%i",&num1);
    printf("Ingrese otro numero natural: ");
    scanf("%i",&num2);
    if (num1 <= 0 || num2 < 0) 
    {
        printf("Por favor, ingrese numeros naturales validos.\n");
        return 1;
    }
    // Inicializar el resultado en 1 (para el caso de M = 0)
    int resultado = 1;

    // Calcular N elevado a M usando sumas sucesivas
    for (int i = 0; i < num2; i++)
     {
        int temp = 0;
        // Multiplicamos N por resultado usando sumas sucesivas
        for (int x = 0; x < num1; x++) 
        {
            temp += resultado;
        }
        resultado = temp;
    }
    printf("%d elevado a %d es:%d", num1, num2, resultado);
    return 0;
}
