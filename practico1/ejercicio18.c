/*Ejercicio 18. Escriba un programa que permita ingresar un número entero N e indique si el número es capicúa.
(ver nota 5 en anexo).
#Número Capicúa: En matemáticas, la palabra capicúa (del catalán cap i cua, ‘cabeza y cola’)1 se refiere
a cualquier número que se lee igual de izquierda a derecha que de derecha a izquierda. Ejemplos: 161,
2992, 3003, 91019, 5005, 292, 2882, 2442, 9102019.*/

#include <stdio.h>
int main()
{
    int num, num1, numeroinvertido = 0;
    int digito;
    printf("ingrese un numero entero: ");
    scanf("%i",&num);
    num1=num;
    while (num > 0)
    {
        digito = num % 10;
        numeroinvertido = numeroinvertido * 10 +digito;
        num = num / 10;
    }
    
    if (num1 == numeroinvertido)
    {
        printf("es capicua");
    }
    else 
    {
        printf("no es capicua");
    }

    return 0;
}
