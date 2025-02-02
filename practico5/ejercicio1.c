/*Ejercicio 1. Escribí un programa que, utilizando una función recursiva, permita saber si una cadena de
caracteres constituye un palíndromo.*/

#include <stdio.h>
#include <string.h>
#define tamanio 50

void palindromo(char *cadena) 
{
    char original = cadena[tamanio];
    int inicio = 0;
    int fin = strlen(cadena) - 1;
    
    while (inicio < fin) 
    {
        // Intercambiar los caracteres en las posiciones 'inicio' y 'fin'
        char temp = cadena[inicio];
        cadena[inicio] = cadena[fin];
        cadena[fin] = temp;
        
        // Mover los índices hacia el centro
        inicio++;
        fin--;
    }

    if(original != cadena)
    {
        printf("la palabra %s no es un palindromo", cadena);
    }
    else 
    {
        printf("la palabra %s es un palindormo", cadena);   
    }
}

int main()
{
    char palabra[tamanio];
    printf("ingrese una palabra: ");
    fgets(palabra, 50, stdin);
    palindromo(palabra);
    return 0;
}

