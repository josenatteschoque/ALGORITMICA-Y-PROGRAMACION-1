/*Ejercicio 3. Interpreta los siguientes códigos:
¿Qué valores se imprimen en la consola para cada caso? Explica el motivo.*/

//CODIGO 1
#include <stdio.h>

int main()
{
    int x = 10;
    for (int x = 0; x < 5; x++) 
    {
        printf("%d\n", x);
    }
    printf("%d\n", x);
    return 0;
}

//los valores que se imprimen son 0,1,2,3,4 y 10.
//esto sucede porque dentro del for la variable existe solo ahi haci que imprime solo el indice 
//en cambio fuera del for se imprime la variable ya asignada con el valor 10

//CODIGO 2
#include <stdio.h>

int main() 
{
    int x = 10;
{
    int x = 20;
    printf("%d\n", x);
}
    printf("%d\n", x);
    return 0;
}

//los valores que se imprimen son el 20 y luego el 10.
//esto sucede porque la variable solo existe en el bloque que fue declarada