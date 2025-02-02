/*Ejercicio 1. Escribí un programa que lea el contenido de su archivo fuente (.c) y lo imprima por pantalla.(Ver
nota 1 en Anexo).
1. Archivo de código fuente *.c: Un archivo de código fuente *.c es un archivo de texto plano, sin formato
codificado en caracteres ASCII.*/

#include <stdio.h>

int main() 
{
    FILE *archivo;
    char caracter;

    // Abrir el archivo en modo lectura
    archivo = fopen(__FILE__, "r");

    if (archivo == NULL) 
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    // Leer el archivo caracter por caracter hasta el final
    while ((caracter = fgetc(archivo)) != EOF) 
    {
        putchar(caracter); // Imprimir cada caracter en pantalla
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}
