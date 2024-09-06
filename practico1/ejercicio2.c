/*Ejercicio 2. Escriba un programa que imprima en la terminal la cadena de texto “¿Cuál es tu nombre?”,
permita el ingreso mediante el teclado de una cadena almacenándola en una variable nombre y luego
imprima en la terminal el mensaje “Hola nombre”.*/
#include <stdio.h>
#define max_length 100

int main()
{
    char nombre[max_length];
    printf("ingrese su nombre:");
    fgets(nombre, max_length, stdin);
    printf("hola %s", nombre);
    return 0;
}
