#include <stdio.h>
#include <string.h>

int main()
{
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
        "2009-01-23"};

    char mayor[11];
    char menor[11];
    strcpy(mayor,fechas[0]);
    strcpy(menor,fechas[0]);

    for (int i = 1;i < 10; i++)
    {
        if (strcmp(fechas[i], mayor) > 0)
        {
            strcpy(mayor, fechas[i]);
        }

        if (strcmp(fechas[i], menor) < 0)
        {
            strcpy(menor, fechas[i]);
        }
    }

    printf("fecha mayor: %s\n", mayor);
    printf("fecha menor: %s\n", menor);
    return 0;
}