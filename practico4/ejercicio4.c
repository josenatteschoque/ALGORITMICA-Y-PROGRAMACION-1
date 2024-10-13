/*Ejercicio 4. Declara un puntero a entero y asigna la dirección de memoria de una variable entera a ese
puntero. Luego, imprime el valor de la variable utilizando el puntero. (Ver nota 1 en Anexo).

1) Operadores de referencia:
● Operador ‘*’: Operador de indirección (puntero) ‘*p’ accede al valor almacenado en la
dirección de memoria apuntada por ‘p’.
● Operador ‘&’: Operador de dirección (referencia): ‘&a’ obtiene la dirección de memoria de la
variable ‘a’.*/

#include <stdio.h>
int main() //funcion principal
{
    int *puntero; //declaro un puntero 
    int valor = 10; //declaro un entero con el valor 10
    puntero = &valor; //le asigno al puntero la direccion de la variable valor 
    printf("el valor es: %d", *puntero); //imprimo el valor usando un puntero
    return 0;
}