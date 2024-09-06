/*Ejercicio 9. Escriba un programa que pregunte la fecha de nacimiento del usuario e imprima por pantalla la
estación del año (en el hemisferio austral) en que cumple años.*/

#include<stdio.h>
int main()
{
    int dd, mm, aa;
    printf("ingrese su fecha de nacimiento:");
    scanf("%i",&dd);
    scanf("%i",&mm);
    scanf("%i",&aa);
    if (mm>8 || mm<1)
    {
        printf("la estacion del anio es primavera");
    }
    else 
    {
        if (mm>11 || mm<3)
        {
            printf("la estacion del anio es verano");
        }
        else 
        {
            if (mm>2 || mm<6)
            {
                printf("la estacion del anio es otoño");
            }
            else 
            {
                if (mm>5 || mm<7)
                {
                    printf("la estacion del anio es invierno");
                }
            }
        }
    }
    return 0;
}
