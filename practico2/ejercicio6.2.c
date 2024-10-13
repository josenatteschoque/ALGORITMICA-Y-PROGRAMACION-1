/*Ejercicio 6. Escriba dos programas que cumplan con la consigna del ejercicio 18, uno utilizando un arreglo de
enteros y otro una cadena de caracteres. ¿Cómo se define una cadena de caracteres en lenguaje C?
Implementar utilizando arreglo de enteros cargando cada valor individual y también implementar cargando
una cadena de caracteres char por char y agregar el ‘\0’ . (ver nota 4 en anexo).*/
/*Ejercicio 18. Escriba un programa que permita ingresar un número entero N e indique si el número es capicúa.
(ver nota 5 en anexo).*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char entero[4];
    char alreves[4];

    printf("Ingrese un número: ");
    scanf("%s", entero);

    // Invertir la cadena
    strcpy(alreves, entero);
    strrev(alreves);

    // Comparar la cadena original con la invertida
    if (strcmp(entero, alreves) == 0) 
    {
        printf("Tu numero es capicua\n");
    } 
    else 
    {
        printf("Tu numero no es capicua\n");
    }

    return 0;
}