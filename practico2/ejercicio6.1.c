/*Ejercicio 6. Escriba dos programas que cumplan con la consigna del ejercicio 18, uno utilizando un arreglo de
enteros y otro una cadena de caracteres. ¿Cómo se define una cadena de caracteres en lenguaje C?
Implementar utilizando arreglo de enteros cargando cada valor individual y también implementar cargando
una cadena de caracteres char por char y agregar el ‘\0’ . (ver nota 4 en anexo). */

#include <stdio.h>

int main() 
{
    int N, temp, numDigitos = 0;
    int digitos[20]; // Arreglo para almacenar los dígitos (máximo 20 dígitos)

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número entero: ");
    scanf("%d", &N);

    temp = N; // Copiar el número para manipularlo sin perder el original

    // Extraer los dígitos del número y almacenarlos en el arreglo
    while (temp > 0) 
    {
        digitos[numDigitos] = temp % 10; // Obtener el último dígito
        temp /= 10; // Reducir el número quitando el último dígito
        numDigitos++;
    }
    // Verificar si el número es capicúa
    int esCapicua = 1; // Bandera que indica si es capicúa (1 = sí, 0 = no)

    // Comparar los dígitos desde los extremos hacia el centro
    for (int i = 0; i < numDigitos / 2; i++) 
    {
        if (digitos[i] != digitos[numDigitos - i - 1]) 
        {
            esCapicua = 0; // Si los dígitos no coinciden, no es capicúa
            break;
        }
    }
    // Mostrar el resultado
    if (esCapicua) 
    {
        printf("El numero %d es capicúa.\n", N);
    } 
    else 
    {
        printf("El numero %d no es capicúa.\n", N);
    }

    return 0;
}
