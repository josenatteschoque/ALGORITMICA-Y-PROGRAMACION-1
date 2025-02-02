/*Ejercicio 2. Escribí un programa que genere un arreglo de 1000 números enteros aleatorios entre 1 y 10.000. A
continuación el programa debe buscar de manera secuencial 10 números predefinidos (hardcodeados),
indicando por cada número si se encuentra en el arreglo. Al finalizar el programa debe indicar cuánto tiempo
(en milisegundos) llevó la búsqueda de los 10 números.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 1000

void generar_arreglo(int arreglo[TAM]);
int buscar_elemento(int arreglo[TAM], int tamanio, int valor_buscado);

int main()
{
    int arreglo[TAM];
    generar_arreglo(arreglo);

    int buscar[10] = {4, 56, 78, 93, 23, 1, 78 ,54, 89, 2000};

    // Tomar el tiempo inicial
    clock_t inicio = clock();

    for (int i = 0; i < 10; i++) 
    {
        int resultado = buscar_elemento(arreglo, TAM, buscar[i]);
        if (resultado != -1) 
        {
            printf("El numero %d si esta en el arreglo.\n", buscar[i]);
        } 
        else 
        {
            printf("El numero %d no esta en el arreglo.\n", buscar[i]);
        }
    }

    // Tomar el tiempo final y calcular la duración
    clock_t fin = clock();
    double tiempo_total = (double)(fin - inicio) / CLOCKS_PER_SEC * 1000; // Milisegundos
    printf("\nTiempo total de busqueda: %.2f ms\n", tiempo_total);

    return 0;
}

// Función para generar un arreglo de 1000 números enteros aleatorios entre 1 y 10.000
void generar_arreglo(int arreglo[TAM]) 
{
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) 
    {
        arreglo[i] = rand() % 10000 + 1;
    }
}

// Función para buscar un elemento específico en el arreglo
int buscar_elemento(int arreglo[TAM], int tamanio, int valor_buscado) 
{
    for (int i = 0; i < tamanio; i++) 
    {
        if (arreglo[i] == valor_buscado) 
        {
            return i;  // Retorna el índice donde se encontró el elemento
        }
    }
    return -1;  // Retorna -1 si no se encuentra el elemento
}
