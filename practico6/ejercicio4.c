/*Ejercicio 4. Modificá el programa del ejercicio anterior para que en vez de 10.000 genere 100.000 números.
Luego realizá las 10 búsquedas de forma secuencial primero, y binaria después. Observá cómo varía el tiempo
de ejecución en cada caso.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanio 100000

void generar_arreglo(int A[tamanio]);
int busqueda_secuencial(int A[tamanio], int tam, int valor_buscado);
void ordenar_burbuja(int A[tamanio], int tam);
int busqueda_binaria(int A[tamanio], int tam, int valor_buscado);

int main()
{
    int arreglo[tamanio];
    generar_arreglo(arreglo);
    int buscar[10] = {23, 56, 142, 789, 1009, 9832, 1023, 8965, 562, 1};

    clock_t inicio = clock();

    for(int i = 0; i < 10; i++)
    {
        int resul = busqueda_secuencial(arreglo, 100000, buscar[i]);
        if (resul != -1)
        {
            printf("el numero %d si esta en el arreglo.\n", buscar[i]);
        }
        else
        {
            printf("el numero %d no esta en el arreglo.\n", buscar[i]);
        }

    }
    clock_t fin = clock();
    double tiempo_total_secuencial = (double) (fin - inicio) / CLOCKS_PER_SEC * 1000;
    printf("\nel tiempo total para realizar la busqueda secuencial fue de: %.2f ms\n", tiempo_total_secuencial);

    ordenar_burbuja(arreglo, 100000);
    clock_t principio = clock();
    for (int i = 0; i < 10; i++)
    {
        int busquedad = busqueda_binaria(arreglo, 100000, buscar[i]);
        if (busquedad != -1)
        {
            printf("el numero %d si esta en el arreglo.\n", buscar[i]);
        }
        else
        {
            printf("el numero %d no esta en el arreglo.\n", buscar[i]);
        }
    }
    clock_t final = clock();
    double tiempo_total_binaria = (double) (final - principio) / CLOCKS_PER_SEC * 1000;
    printf("\nel tiempo total para realizar la busquedad binaria fue de: %.2f ms\n", tiempo_total_binaria);

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

int busqueda_secuencial(int A[tamanio], int tam, int valor_buscado)
{
    for (int i = 0; i < tam; i++)
    {
        if (A[i] == valor_buscado)
        {
           return i;
        }
    }
    return -1;
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
}

int busqueda_binaria(int A[tamanio], int tam, int valor_buscado)
{
    int izquierda = 0;
    int derecha = tam -1;
    while(izquierda <= derecha)
    {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (A[medio] == valor_buscado)
        {
            return medio;
        }
        if(A[medio] < valor_buscado)
        {
            izquierda = medio +1;
        }
        else
        {
            derecha = medio -1;
        }
    }
    return -1;
}