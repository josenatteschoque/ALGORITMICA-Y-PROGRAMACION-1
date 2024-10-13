/*Ejercicio 7. Escribe un programa que implemente una función que modifique una variable tipo int del
programa principal, incrementando en una unidad su valor.
void incrementar(int * n);*/

#include <stdio.h>

void incrementar(int *n) //funcion para incrementar el valor en uno
{
    *n += 1; //incremeto en uno el valor 
    printf("el valor dentro de la funcion es: %d\n", *n); //imprimo el valor incrementado dentro de la funcion
}

int main() //funcion principal 
{
    int numero = 10; //declaro una variable inicializada en 10
    printf("el valor antes de la funcion es: %d\n", numero); //imprimo el valor antes de llamar ala funcion 
    incrementar(&numero); //llamo ala funcion que incrementa en valor en uno y lo imprime
    return 0;
}