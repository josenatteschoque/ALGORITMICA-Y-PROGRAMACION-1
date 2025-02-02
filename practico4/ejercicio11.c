/*Ejercicio 11. Modificá el programa del ejercicio E8TP2 para que utilice dos funciones. Ambas deben recibir un
arreglo de cadenas de caracteres que representen fechas y deben devolver la menor fecha del arreglo en un
caso y la mayor en el otro.*/

#include <stdio.h>
#include <string.h>

char* mayor(char fechas[10][11]) 
{
    static char mayor[11];
    strcpy(mayor, fechas[0]);
    for (int i = 1; i < 10; i++) 
    {
        if (strcmp(fechas[i], mayor) > 0) 
        {
            strcpy(mayor, fechas[i]);
        }
    }
    return mayor; // Retorna la mayor fecha
}

char* menor(char fechas[10][11]) 
{
    static char menor[11];
    strcpy(menor, fechas[0]);
    for (int i = 1; i < 10; i++) 
    {
        if (strcmp(fechas[i], menor) < 0) 
        {
            strcpy(menor, fechas[i]);
        }
    }
    return menor; // Retorna la menor fecha
}

int main() {
    char fechas[10][11] = {
        "2006-01-04",
        "2007-09-20",
        "2024-09-10",
        "2022-10-01",
        "2011-11-25",
        "2015-06-08",
        "2020-04-23",
        "1980-05-31",
        "1950-06-17",
        "2009-01-23"
    };

    char* fechaMayor = mayor(fechas);
    char* fechaMenor = menor(fechas);

    printf("Fecha mayor: %s\n", fechaMayor);
    printf("Fecha menor: %s\n", fechaMenor);

    return 0;
}
