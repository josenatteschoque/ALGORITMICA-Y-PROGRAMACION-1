#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arreglo[20];
    int sin_duplicados[20];
    int j = 0;  // Contador para el arreglo sin duplicados

    srand(time(NULL));
    
    // Generar 20 números aleatorios entre 0 y 9
    printf("Los 20 numeros aleatorios son: ");
    for (int a = 0; a < 20; a++)
    {
        arreglo[a] = rand() % 10;
        printf("%i ", arreglo[a]);
    }

    // Eliminar duplicados
    for (int b = 0; b < 20; b++)
    {
        int duplicado = 0;

        // Verificar si el número ya está en el arreglo sin duplicados
        for (int c = 0; c < j; c++)
        {
            if (arreglo[b] == sin_duplicados[c])
            {
                duplicado = 1;
                break;
            }
        }

        // Si no es duplicado, agregarlo al arreglo sin duplicados
        if (!duplicado)
        {
            sin_duplicados[j] = arreglo[b];
            j++;
        }
    }

    // Imprimir el arreglo sin duplicados
    printf("\nLos numeros sin duplicados son los siguientes: ");
    for (int d = 0; d < j; d++)
    {
        printf("%i ", sin_duplicados[d]);
    }
    printf("\n");
    
    return 0;
}