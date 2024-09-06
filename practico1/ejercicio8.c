/*Ejercicio 8. Escriba un programa que pregunte la fecha de nacimiento del usuario e imprima por pantalla la
edad exacta. (PS) (PE 03/02/1990)*/

#include<stdio.h>
int main()
{
    int aa, mm, dd, edad, dd1, mm2, aa3, edad2;
    printf("ingrese su fecha de nacimiento:\n");
    scanf("%i",&dd);
    scanf("%i",&mm);
    scanf("%i",&aa);
    printf("ingrese la fecha actual:\n");
    scanf("%i",&dd1);
    scanf("%i",&mm2);
    scanf("%i",&aa3);
    edad=aa3-aa;
    if (mm>mm2 && dd>dd1)
    {
        edad2=edad-1;
        printf("su edad es %i",edad2);
    }
    else 
    {
        printf("su edad es %i",edad);
    }
    return 0;
}
