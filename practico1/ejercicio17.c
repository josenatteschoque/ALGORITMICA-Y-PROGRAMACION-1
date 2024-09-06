/*Ejercicio 17. Escriba un programa que permita ingresar un número natural N e imprima los N primeros
términos de la serie de Fibonacci. (PE N=10) (ver nota 4 en anexo).
#Serie de Fibonacci: es una sucesión infinita de números naturales como la siguiente:
0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597… La sucesión comienza con dos números
naturales (dependiendo de la referencia, con 0 y 1 en ciertos casos, otras inician con 1 y 1) y a partir de
estos, «cada término es la suma de los dos anteriores», es la relación de recurrencia que la define.*/

#include <stdio.h>
int main()
{
    int num1, resul, x, y;
    printf("ingrese un numero: ");
    scanf("%i",&num1);
    x=0;
    y=1;
    
    for (int a=1; a <= num1; a++)
    {
        printf("%i ",x);
        resul = y+x;
        x = y;
        y = resul;
    }
    
    return 0;
}
