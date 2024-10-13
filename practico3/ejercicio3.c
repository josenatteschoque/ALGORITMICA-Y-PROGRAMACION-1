/*Ejercicio 3. Modificá la resolución del ejercicio 2 del TP Nº 1 (E2TP1) para implementar una función que reciba
un arreglo de caracteres como parámetro (nombre) e imprima por pantalla el mensaje “¡Hola nombre!”.
void imprimir(char[] nombre);*/
#include <stdio.h>
#define MAX 100

void imprimir(char nombre[MAX])  //Función para leer e imprimir el nombre
{
    printf("Ingrese su nombre: ");
    fgets(nombre, MAX, stdin);  // Leer el nombre
}

int main()
{
    char nombre[MAX];  // Declarar el arreglo de caracteres para el nombre
    imprimir(nombre);  // Llamar a la función, pasándole el arreglo
    printf("Hola %s", nombre);  // Imprimir el nombre ingresado
    return 0;
}