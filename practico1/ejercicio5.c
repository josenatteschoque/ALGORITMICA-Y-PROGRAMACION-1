/*Ejercicio 5. Escribe un programa que pida al usuario que ingrese un número y luego cuente desde 1 hasta ese
número, mostrando cada número en pantalla. Utiliza una estructura while para lograr esto.*/

#include <stdio.h>
int main()
{ 
    int num, x=1;
    printf("ingrese un numero:");
    scanf("%i",&num);
    while (x<=num)
    {
        printf("%i ",x);
        x=x+1;
    }
    return 0;
}
