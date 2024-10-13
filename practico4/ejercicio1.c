/*Ejercicio 1. Interpreta el siguiente código (PE):
¿Qué valores se imprimen en la consola?*/
//se imprime el valor 20 ya que se le pasa como parametro ala funcion, 
//luego el 10 ya que esta declara como una variable global

#include <stdio.h>

int x = 10;

void funcion(int x) 
{
    printf("%d\n", x);
}
int main() 
{
    funcion(20);
    printf("%d\n", x);
    return 0;
}
