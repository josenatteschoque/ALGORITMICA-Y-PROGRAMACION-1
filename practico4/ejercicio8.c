/*Ejercicio 8. Modificá el programa del ejercicio E2TP1 para que use una función que reciba el ingreso por
teclado del usuario y devuelva un arreglo de caracteres que represente el nombre. Intente Implementar 4
versiones de la función:
1. char[] ingresarNombre();
2. char* ingresarNombre();
3. ingresarNombre(char *nombre);
4. ingresarNombre(char nombre[]);
¿Cuál sintaxis no es correcta? ¿Por qué? ¿Qué diferencias puedes indicar sobre cada implementación? (Ver
nota 3 y nota 4 en Anexo).
*/

#include <stdio.h>
#define tamanio 50

void ingresarnombre(char *nombre)
{
    printf("ingrese su nombre: ");
    fgets(nombre, tamanio, stdin);
}

int main()
{
    char nombre[tamanio];
    ingresarnombre(nombre);
    printf("hola %s ", nombre);
    return 0;
}