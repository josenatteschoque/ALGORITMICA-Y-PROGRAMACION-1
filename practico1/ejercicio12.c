/*Ejercicio 12. Escriba un programa que permita ingresar un número natural N y otro número natural M, e
imprima el resultado de N multiplicado por M calculándolo como suma sucesivas. (PS) (PE N=5, M=3)*/

#include <stdio.h>
int main()
{
    int num1, num2, resul;
    printf("ingrese un numero natural:");
    scanf("%i",&num1);
    printf("ingrese otro numero natural:");
    scanf("%i",&num2);
    resul=num1;
    if (num1 > 0 && num2 > 0)
    { 
        for (int x=1; x<=num2; x++)
        {
            resul=resul+num1;
        }
        resul=resul-num1;
        printf("%i ",resul);
    }
    else 
    {
        printf("no es un numero natural!");
    } 
    return 0;
}
