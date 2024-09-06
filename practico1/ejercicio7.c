/*Ejercicio 7. Modifica el ejercicio anterior para que utilice un ciclo for. ¿Cuál es la diferencia?*/

#include<stdio.h>
int main()
{
    int num;
    printf("ingrese un numero:");
    scanf("%i",&num);
    for (int x=1; x<=num;x++)
    {
        printf("%i ",x);
    }
    return 0;
}
