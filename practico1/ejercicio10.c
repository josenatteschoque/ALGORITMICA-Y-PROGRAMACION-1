/*Ejercicio 10. Escriba un programa que permita ingresar un número natural N e imprima el factorial de N, es
decir N!. (PS) (PE N=5). (ver nota 1 en anexo).
#Factorial: El factorial de un entero positivo n, el factorial de n o n factorial se define en principio como
el producto de todos los números enteros positivos desde 1 (es decir, los números naturales) hasta n.
Por ejemplo: 5!=1×2×3×4×5=120.*/

#include <stdio.h>
int main()
{
    int num, x=1, resul;
    resul=1;
    printf("ingrese un numero natural:");
    scanf("%i",&num);
    while (num>=x)
    {
        resul=resul*x;
        x=x+1;
        printf("%i ",resul);
    }

     return 0;
}
