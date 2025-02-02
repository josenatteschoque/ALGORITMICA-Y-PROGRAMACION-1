/*Ejercicio 4. Usando recursividad escribí un programa que dado un número entero positivo N imprima en
pantalla una pirámide de altura N “dibujando” cada nivel de la pirámide con los números de 1 hasta N. Por
ejemplo, si el usuario ingresa 5, el programa debe imprimir lo siguiente:
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5*/

#include <stdio.h>
void imprimir(int N, int time)
{
    if (time == 0)
    {
        return;
    }
    printf("%d ", N);
    imprimir(N, time - 1);
}

void recursiva_imprimir(int N, int tan)
{
    if (tan > N)
    {
        return;
    }
    imprimir(tan, tan);
    printf("\n");
    recursiva_imprimir(N, tan + 1);
}


int main()
{
    int numero;
    printf("ingrese un numero entero positivo: ");
    scanf("%d", &numero);   
    recursiva_imprimir(numero, 1);

    return 0;
}