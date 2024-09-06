/*Ejercicio 20. Escriba un programa que permita ingresar dos números enteros N y M, y operador aritmético
(“+”, “-”, “*”, “/”) e imprima el resultado de la operación indicada tomando N y M como operandos.*/

#include <stdio.h>
int main()
{
    float a, b, suma, resta, mult;
    float divi;
    char op;
    printf("ingrese un numero: ");
    scanf("%f",&a);
    printf("ingrese otro numero: ");
    scanf("%f",&b);
    printf("ingrese el operador aritmetico: ");
    scanf(" %c",&op);
    switch (op)
    {
        case '+': 
        suma=a+b;
        printf("%f",suma);
        break;

        case '-':
        resta=a-b;
        printf("%f",resta);
        break;

        case '*':
        mult=a*b;
        printf("%f",mult);
        break;

        case '%':
        divi=a/b;
        printf("%f",divi);
        break;
        default :
        printf("error!");
        break;
    }
    return 0;
}
