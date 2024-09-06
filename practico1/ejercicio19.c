/*Ejercicio 19. Escriba un programa que permita ingresar un número entero N e imprima la cantidad de dígitos
del número. (PS)*/

#include <stdio.h>
int main()
{
    int num; 
    int digitos=0;
    printf("ingrese un numero entero: ");
    scanf("%i",&num);
    if (num==0)
    {
        digitos=1;
    }
    else 
    {
        int absnum = (num < 0) ? -num : num;

        while (absnum > 0)
        {
            absnum /= 10;
            digitos++;
        }
    }
    printf("la cantidad de digitos que tiene son: %i ",digitos);
    return 0;
}
