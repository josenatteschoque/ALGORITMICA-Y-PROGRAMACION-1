/*Ejercicio 2. Escribí un programa que lea el contenido de un archivo indicado en la línea de comandos al
ejecutarlo y lo imprima por pantalla. (Ver nota 2 en Anexo).
2. Argumentos Línea de comandos: Los argumentos en línea de comandos son valores que se pasan a un
programa cuando se ejecuta desde la terminal o consola. En C, estos argumentos se pueden recuperar
en el main utilizando los parámetros argc y argv.
● Argc (Argument Count): Es el número de argumentos pasados al programa, incluyendo el
nombre del programa.
● argv (Argument Vector): Es un arreglo de cadenas que contiene los argumentos pasados al
programa.
Ejemplo de uso:
#include <stdio.h>
int main(int argc, char *argv[]) 
{
    printf("Numero de argumentos: %d\n", argc);
    for (int i = 0; i < argc; i++) 
    {
        printf("Argumento %d: %s\n", i, argv[i]);
    }
    return 0;
} */

#include <stdio.h>

int main(int argc, char *argv[])
{
    // Verificar que se ha pasado el nombre del archivo como argumento
    if (argc < 2)
    {
        printf("Uso: %s <nombre_del_archivo>\n", argv[0]);
        return 1;
    }

    // Abrir el archivo especificado en la línea de comandos
    FILE *archivo = fopen(argv[1], "r");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo %s.\n", argv[1]);
        return 1;
    }

    // Leer y mostrar el contenido del archivo
    char caracter;
    while ((caracter = fgetc(archivo)) != EOF)
    {
        putchar(caracter);
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}