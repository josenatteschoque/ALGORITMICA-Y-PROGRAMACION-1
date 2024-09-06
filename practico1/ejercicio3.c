#include <stdio.h>
int main()
{
    int aa, edad;
    printf("ingrese su año de nacimiento:");
    scanf("%i",&aa);
    edad=2024-aa;
    printf("su edad aproximada es %i",edad);
    return 0;
}