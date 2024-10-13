/*Ejercicio 6. Modificá el programa del ejercicio E18TP1 para que llene un arreglo de 10 números de hasta 5
cifras generados aleatoriamente, pero que sólo inserte números capicúa. Implementá para esto una función
que devuelva si un número es capicúa.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función que determina si un número es capicúa
int esCapicua(int num) 
{
    int original = num;
    int reverso = 0;
    int digito;

    while (num > 0) {
        digito = num % 10;
        reverso = reverso * 10 + digito;
        num /= 10;
    }

    return (original == reverso);
}

// Función principal
int main() 
{
    int arreglo[10];
    int contador = 0;
    int numero;

    // Inicializamos la semilla para la generación de números aleatorios
    srand(time(NULL));

    // Llenamos el arreglo con números capicúas
    while (contador < 10) 
    {
        // Generamos un número aleatorio entre 1 y 99999 (números de hasta 5 cifras)
        numero = rand() % 90000 + 10000;  // Aseguramos que tenga 5 cifras

        // Verificamos si el número es capicúa
        if (esCapicua(numero)) 
        {
            arreglo[contador] = numero;
            contador++;
        }
    }

    // Imprimimos el arreglo de números capicúas
    printf("Numeros capicua generados:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arreglo[i]);
    }

    return 0;
}
