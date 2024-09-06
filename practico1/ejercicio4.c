/*Ejercicio 4. Escriba un programa que pida al usuario que ingrese su edad y, si la edad es 18 o más, muestre el
mensaje "Eres mayor de edad", de lo contrario, muestre "No eres mayor de edad". Utiliza una estructura
if-then-else para lograr esto.*/

#include <stdio.h>
int main()
{
    int edad;
    printf("ingrese su edad:");
    scanf("%i",&edad);
    if (edad >= 18)
    {
        printf("eres mayor de edad!");
    }
    else 
    {
        printf("no eres mayor de edad!");
    }
    return 0;
}
