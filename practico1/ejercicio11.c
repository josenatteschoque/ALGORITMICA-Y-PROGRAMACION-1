/*Ejercicio 11. Escriba un programa que permita ingresar un número natural N e imprima los números primos
menores o iguales a N. (PS) (PE N=10). (ver nota 2 en anexo).
#Número Primo: En matemáticas, un número primo es un número natural mayor que 1 que tiene
únicamente dos divisores positivos distintos: él mismo y el 1. Por ejemplo: 2, 3, 5, 7, 11, 13, 17, 19, 23,
29, 31, 37, 41, 43, 47, 53…*/

#include <stdio.h>
int main()
{
    int num, y, x, resul;
    printf("ingrese un numero natural:");
    scanf("%i",&num);
    x=2;
    y=1;
    resul = x+y;
    if (num > 0)
    {
        for (int i=1; i<=num; i++)
        {
            printf("%i ",resul);
            resul = resul+2;
        }
    }
    else
    {
        printf("no es un numero natural!!!");
    }
    return 0;
}
