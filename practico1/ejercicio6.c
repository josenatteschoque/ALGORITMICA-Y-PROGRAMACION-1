/*Ejercicio 6. Modifica el ejercicio anterior para que utilice un ciclo do while en lugar de un ciclo while. ¿Cuál es
la diferencia?*/

#include<stdio.h>
int main()
{
    int num, x=1;
    printf("ingrese un numero:");
    scanf("%i",&num);
    do 
    {
        printf("%i ",x);
        x=x+1;
    } while (x<=num);
    return 0;
}
