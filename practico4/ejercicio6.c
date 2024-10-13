/*Ejercicio 6. Modifica el ejercicio anterior, para presentar en pantalla el valor de ‘p’, y las direcciónes de
memoria de: ‘a’, ‘a[0]’, ‘a[1]’, ‘a[2]’, ‘a[3]’, ‘a[4]’. ¿qué conclusión puedes hacer al respecto del resultado?. (Ver
nota 2 en Anexo).

2) Especificador de formato %p: En C, el especificador de formato %p se utiliza en la función printf para
imprimir la dirección de memoria de un puntero como un valor hexadecimal. Cuando se utiliza %p, la
función printf espera un argumento de tipo puntero (como int*, char*, etc.) y lo imprime en formato
hexadecimal, mostrando la dirección de memoria a la que apunta el puntero. El formato %p es similar
a %x o %X, pero está específicamente diseñado para imprimir direcciones de memoria, por lo que es el
más adecuado para este propósito. Aquí hay un ejemplo:
int x = 10;
int* ptr = &x;
printf("Dirección de memoria de x: %p\n", ptr);
En este ejemplo, se declara una variable x y un puntero ptr que apunta a x. Luego, se utiliza %p para
imprimir la dirección de memoria de x en formato hexadecimal. El output sería algo como:
Dirección de memoria de x: 0x7ffd60c3e8fc
La dirección de memoria real puede variar cada vez que se ejecuta el programa*/

#include <stdio.h>

int main()
{
    int arreglo[5] = {1,2,3,4,5};
    int* puntero;

    for (int i = 0; i < 5; i++)
    {
        puntero = &arreglo[i];
        printf("el valor es: %i \n", *puntero);
        printf("direccion de memoria del arreglo es: %p\n", puntero);
    }
    return 0;
}
//respecto al resultado las direcciones solo cambian un poco nose diferencian de los demas elementos del conjunto