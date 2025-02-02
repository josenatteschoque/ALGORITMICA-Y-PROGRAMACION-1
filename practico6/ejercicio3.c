/*Ejercicio 3. Modificá el programa del ejercicio anterior para que, luego de generar aleatoriamente los 10.000
números, los ordene mediante el método de burbujeo y luego ejecute la búsqueda de forma binaria.
Nuevamente, imprimí al terminar el tiempo en milisegundos que llevó realizar las 10 búsquedas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanio 10000

void generar_arreglo(int A[tamanio]);
void ordenar_burbuja(int A[tamanio], int tam);
void imprimir_arreglo(int A[tamanio], int tam);
int busqueda_binaria(int arreglo[tamanio], int tam, int valor_buscado);

int main()
{
    int arreglo[tamanio];
    generar_arreglo(arreglo);

    //toma el tiempo inicial
    clock_t inicio = clock();

    ordenar_burbuja(arreglo, 10000);
    int buscar[10] = {34, 56, 2, 89, 1100, 245, 6785, 2001, 7633, 2013};

    for (int i = 0; i < 10; i++)
    {
        int resultado = busqueda_binaria(arreglo, 10000, buscar[i]);
        if (resultado != -1)
        {
            printf("el numero %d si esta en el arreglo.\n", buscar[i]);
        }
        else
        {
            printf("el numero %d no esta en el arreglo.\n", buscar[i]);
        }
    }

    clock_t fin = clock();
    double tiempo_total = (double) (fin - inicio) / CLOCKS_PER_SEC * 1000;
    printf("\nel tiempo total es: %2.f ms\n", tiempo_total);

    return 0;
}

void generar_arreglo(int A[tamanio])
{
    srand(time(NULL));
    for(int i = 0; i < tamanio; i++)
    {
        A[i] = rand() % 10000 +1;
    }
}

void ordenar_burbuja(int A[tamanio], int tam)
{
    int tem;
    for (int i = 0; i < tam -1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (A[j] > A[j +1])
            {
                tem = A[j];
                A[j] = A[j + 1];
                A[j +1] = tem;
            }
        }
    }
    imprimir_arreglo(A, 10000);
}

void imprimir_arreglo(int A[tamanio], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf(" %d ", A[i]);
    }
}

int busqueda_binaria(int arreglo[tamanio], int tam, int valor_buscado) 
{
    int izquierda = 0;
    int derecha = tam - 1;

    while (izquierda <= derecha) 
    {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (arreglo[medio] == valor_buscado) 
        {
            return medio;  // Encontrado
        }
        if (arreglo[medio] < valor_buscado)
        {
            izquierda = medio + 1;  // Buscar en la mitad derecha
        } 
        else 
        {
            derecha = medio - 1;  // Buscar en la mitad izquierda
        }
    }
    return -1;  // No encontrado
}