/*Ejercicio 9. Modificá el programa del ejercicio E1TP2 para que implemente una función que reciba el arreglo
de números enteros y un número entero y determine si el número dado está o no en el arreglo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funcion para determinar si un elemento esta en el arreglo
int determinante(int arreglo[10], int num)
{
    for (int i = 0; i < 10 ; i++)
    {
        if (arreglo[i] == num )
        {
            return 1;
        }
    }
    return 0;
} 

//funcion principal
int main()
{
    int numero[10];
    int numero_aleatorio, c;

    srand(time(NULL));

    printf("el arreglo es:");
    //esto realiza un arreglo de 10 numero aleatorios si repetir
    for(int i = 0 ;i < 10; i++)
    {
        do{
            numero_aleatorio = rand() % 11;
            for(c = 0 ;c < i; c++)
            if(numero[c] == numero_aleatorio) break;
        }   while(c < i);
        numero[i] = numero_aleatorio;
        printf("%i ",numero[c]);
    }
    numero_aleatorio = numero_aleatorio;

    //esto verifica si el elemento esta en el arreglo si o no
    if (determinante( numero, numero_aleatorio ))
    {
        printf("\nel elemento %d si esta en el arreglo", numero_aleatorio);
    }
    else 
    {
        printf("\nel elemento %d no esta en el arreglo", numero_aleatorio);
    }
    
    return 0;
}
