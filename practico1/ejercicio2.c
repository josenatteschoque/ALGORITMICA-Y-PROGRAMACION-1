#include <stdio.h>
#define max_length 100

int main()
{
    char nombre[max_length];
    printf("ingrese su nombre:");
    fgets(nombre, max_length, stdin);
    printf("hola %s", nombre);
    return 0;
}