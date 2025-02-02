/*Ejercicio 7. Escribí un programa con una función recursiva que descomponga un número entero positivo N
dado como producto de números primos.*/

#include <stdio.h>

void descomponer(int N, int divisor);

int main()
{
    int num;
    printf("ingrese un numero entero positivo: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("los factores primos de %d son:", num);
        descomponer(num, 2);
        printf("\n");
    }
    else
    {
        printf("por favor ingrese un numero entero positivo\n");
    }
    return 0;
}

void descomponer(int N, int divisor)
{
    // Caso base: si N es 1, la descomposición ha terminado
    if (N  ==  1)
    {
        return;    
    }

    // Si N es divisible por el divisor actual, imprime el divisor y reduce N
    if (N % divisor == 0)
    {
        printf("%d ", divisor);
        descomponer(N / divisor, divisor); // Llama a la función con N reducido
    }
    else
    {
        // Si no es divisible, prueba con el siguiente número
        descomponer(N, divisor + 1);
    }
}