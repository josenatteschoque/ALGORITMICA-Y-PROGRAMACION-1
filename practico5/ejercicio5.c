/*Ejercicio 5. Escribí un programa que, usando una función recursiva, lea una cadena de caracteres que
contenga paréntesis izquierdos y derechos, e indique si los mismos están balanceados (es decir, si cada
paréntesis izquierdo tiene su correspondiente paréntesis derecho).*/

#include <stdio.h>

int balanceados(char A[], int indice, int contador);

int main()
{
    char palabra[] = "(holaaa))";
    if (balanceados(palabra, 0, 0))
    {
        printf("los parentesis estan balanceados.");
    }
    else
    {
        printf("los parentesis no esta balanceados.");
    }
    return 0;
}

int balanceados(char A[], int indice, int contador)
{
    if (A[indice] == '\0')
    {
        return contador == 0;
    }

    if (A[indice] == '(')
    {
        contador++;
    }
    else if(A[indice] == ')')
    {
        contador--;
    }

    return balanceados(A, indice + 1, contador);
}