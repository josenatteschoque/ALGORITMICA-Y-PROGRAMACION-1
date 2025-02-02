/*Ejercicio 2. Escribí un programa que calcule la potencia N-ésima de un número entero positivo M mediante
una función recursiva.*/

#include <stdio.h>

int potencia_recursiva(int base, int exponente)
{
    int resul = base;
    if (exponente == 0)
    {
        return 1;
    }
    else 
    {
        return resul * potencia_recursiva(base, exponente - 1);
    }

}

int main()
{
    int base, expon;
    printf("ingrese la base: ");
    scanf("%d", &base);
    printf("ingrese el exponente: ");
    scanf("%d", &expon);
    printf("el resultado es: %d ", potencia_recursiva(base, expon));

    return 0;
}