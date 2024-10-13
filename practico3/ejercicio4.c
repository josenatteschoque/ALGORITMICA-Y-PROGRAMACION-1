/*Ejercicio 4. Modificá el programa del ejercicio E13TP1 para implementar dos funciones, una para calcular el
producto de dos números como sumas sucesivas y otra para calcular la potencia entre dos números N y M
como productos sucesivos. (PE N=5, M=3)
int producto(int factor1, int factor2);
int potencia(int base, int exponente);*/

#include <stdio.h>

//funcion para calcular el producto mediantes sumas sucesivas
int producto(int *factor1, int *factor2)
{
    int producto = *factor1;
    for (int i = 1; i <= *factor2; i++)
    {
        producto += *factor1;
    }    
    producto -= *factor1;
    return producto;
}

//funcion para calcular la potencia mediante sumas sucesivas 
int potencia(int *base, int *exponente)
{
    // Inicializar el resultado en 1 (para el caso de M = 0)
    int resultado = 1;

    // Calcular N elevado a M usando sumas sucesivas
    for (int i = 0; i < *exponente; i++)
    {
        int temp = 0;
        // Multiplicamos N por resultado usando sumas sucesivas
        for (int x = 0; x < *base; x++) 
        {
            temp += resultado;
        }
        resultado = temp;
    }
    return resultado;
}

int main()
{
    int num1, num2;
    printf("ingrese un numero:");
    scanf("%d",&num1);
    printf("ingrese otro numero:");
    scanf("%d",&num2);
    printf("el producto es: %d", producto(&num1, &num2)); //llama ala funcion le pasa los valores y imprime el resultado 
    printf("\n");
    printf("la potencia es: %d", potencia(&num1, &num2)); //llama ala funcion le pasa los valores y imprime el resultado

    return 0;
}