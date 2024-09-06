/*Ejercicio 16. Escriba un programa que permita ingresar una letra L e imprima todas la letras del abecedario en
orden alfabético inverso desde z (o Z) hasta L. Tenga en cuenta si el usuario ingresó una letra minúscula o
mayúscula. (ver nota 3 en anexo).
#Char: En el lenguaje C una variable char es similar a una variable int pero con la salvedad que puede
almacenar un valor entero más chico (en el rango de -128 a 127), estos valores enteros positivos de las
variables de tipo char, están relacionadas con la tabla de caracteres ASCII. y pueden realizarse
comparaciones y operaciones aritméticas como si se trataran de un entero (Procurando permanecer en
el rango definido por el tipo).*/

#include <stdio.h>
int main()
{
    char letra;
    printf("ingrese una letra:");
    scanf(" %c",&letra);
    if (letra >= 'A' && letra <= 'Z')
    {
        letra+='a' - 'A';//convierte la letra
    }
    for (char c = 'z'; c >= letra ; c--)
    {
        printf("%c ",c);
    }
    return 0;
}
