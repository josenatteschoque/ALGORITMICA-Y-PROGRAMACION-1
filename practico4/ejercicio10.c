/*Ejercicio 10. Modificá el programa del ejercicio E3TP2 para implementar una función que reciba dos arreglos
de números enteros de dimensión 5 y devuelvan otro arreglo del mismo tamaño.*/

#include <stdio.h>
#define tamanio 5

void suma(int a[tamanio], int b[tamanio], int resul[tamanio])
{
    for (int i = 0; i < 5; i++)
    {
        resul[i] = a[i] + b[i];
    }

}

int main()
{
    int vector1[tamanio];
    int vector2[tamanio];
    int resultado[tamanio];
    for (int i = 0; i < 5; i++) 
    {
        printf("ingrese un numero para el arreglo: ");
        scanf("%d", &vector1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("ingrese un numero para el otro arreglo: ");
        scanf("%d", &vector2[i]);
    }
    
    printf("el primer arreglo es:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vector1[i]);
    }
    printf("\nel segun arreglo es:");
    for (int i = 0;i < 5; i++)
    {
        printf("%d ", vector2[i]);
    } 

    suma(vector1, vector2, resultado);

    printf("\nel otro arreglo es: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", resultado[i]);
    }
    return 0;
}