/*Ejercicio 1. Escribí un programa que, a partir de un arreglo hardcodeado de 10 números enteros, indique si el
mismo se encuentra ordenado o no. Investigá cuál es el mejor algoritmo para determinar si un arreglo está o
no en orden.*/

#include <stdio.h>

void imprimir(int a[], int tan);
int estaOrdenado(int a[], int tan);

int main()
{
    int arreglo[] = {4, 3, 7, 1, 9, 7, 0, 8, 6, 2};
    int tamanio = 10; //sizeof(arreglo) / sizeof(arreglo[0]); no es necesario ya que sabemos el tamanio del arreglo

    printf("Arreglo es: ");
    imprimir(arreglo, tamanio);

    if (estaOrdenado(arreglo, tamanio)) 
    {
        printf("El arreglo está ordenado.\n");
    }
    else 
    {
        printf("El arreglo no esta ordenado.\n");
    }

    return 0;
}

void imprimir(int a[], int tan)
{
    for (int i = 0; i < tan; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int estaOrdenado(int a[], int tan)
{
    for (int i = 0; i < tan - 1; i++) 
    {
        if (a[i] > a[i + 1])
        {
            return 0; // No está ordenado
        }
    }
    return 1; // Está ordenado
}
/*Para esto, puedes usar un enfoque de tiempo lineal 𝑂(𝑛) en el que se recorren los elementos consecutivos del arreglo
y se verifica si están en orden ascendente o no.
Si encuentras un par de elementos donde el anterior es mayor que el siguiente, entonces el arreglo no está ordenado.*/