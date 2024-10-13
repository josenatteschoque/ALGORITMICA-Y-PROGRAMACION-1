/*Ejercicio 5. Modificá el programa del ejercicio E20TP1 para que cada operador aritmético esté implementado
en una función específica.*/
#include <stdio.h>

float divicion(float *a, float *b) //funcion para la operacion divicion
{
    float divicion = *a / *b;
    return divicion;
}

float suma(float *a, float *b) //funcion para la operacion suma
{
    float suma = *a + *b;
    return suma;
}

float resta(float *a, float *b) //funcion para la operacion resta
{
    float resta = *a - *b;
    return resta;
}

float multiplicacion(float *a, float *b) //funcion para la operacion multiplicar
{
    float multi = *a * *b;
    return multi;
}

int main() //funcion principal
{
    float num1, num2;
    char operador;
    printf("ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("ingrese el segundo numero: ");
    scanf("%f", &num2);
    printf("ingres el operador aritmetico:");
    scanf(" %c",&operador);
    printf("ingres el operador:");
    switch (operador)
    {
        case '+':
        printf("%2.f", suma(&num1, &num2));
        break;
        case '-':
        printf("%2.f", resta(&num1, &num2));
        break;
        case '*':
        printf("%.2f", multiplicacion(&num1, &num2));
        break;
        case '/':
        printf("%.2f", divicion(&num1, &num2));
        break;
    }
    return 0;
}