/*Ejercicio 3. Indicá qué es lo que hace la siguiente función recursiva:*/

#include <stdio.h>
//esta funcion recursiva es para saber si el numero es par o impar
int f(int n) 
{
    if (n == 0) 
    {
        return 1;
    } 
    else if (n == 1) 
    {
        return 0;
    } 
    else 
    {
        return f(n - 2);
    }
}

int main()
{
    int num;
    printf("ingrese un numero:");
    scanf("%d", &num);
    int resul = f(num);
    printf("%d", resul);
    return 0;
}

