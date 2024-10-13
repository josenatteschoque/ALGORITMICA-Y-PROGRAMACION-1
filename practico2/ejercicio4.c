#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arreglo[50];
    int numero_aleatorio, MAX_REPETICIONES = 0, numero_mas_repetido = 0;
    int suma=0;
    float media = 0;
    int conteo[50] = {0};

    srand(time(NULL));
    printf("los 50 numeros aleatorios son: ");
    for (int a = 0; a < 50; a++) //genera 50 numeros aleatorios entre 0 y 10
    {
        numero_aleatorio = rand() % 11;
        arreglo[a] = numero_aleatorio;
        printf("%i ",arreglo[a]);
        conteo[arreglo[a]]++;
        
        suma += arreglo[a]; //suma 50 numeros aleatorios
    }
    for (int b = 0; b < 50; b++)
    {
        if (conteo[b] > MAX_REPETICIONES)
        { 
        MAX_REPETICIONES = conteo[b];
        numero_mas_repetido = b;
        }
    }
    printf("\n");
    if (numero_mas_repetido != -1)
    {
        printf("la moda es %i ",numero_mas_repetido);
    }
    printf("\n");
    //printf("la suma es: %f ",suma);
    //printf("\n");
    media = suma / 50;
    printf("la media es: %f \n ",media);

    float desviacion_estandar;
    float diferencia = 0;
    float suma_diferencia = 0;
    for (int c = 0; c < 50; c++)
    {
        diferencia = abs(arreglo[c] - media);
        suma_diferencia += diferencia;
        desviacion_estandar = suma_diferencia / 50;
    }
    printf("la desviacion estandar es: %f ", desviacion_estandar);
  
    return 0;
}