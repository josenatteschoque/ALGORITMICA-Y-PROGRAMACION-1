#include <stdio.h>
int main()
{
    int num, x=1, resul;
    resul=1;
    printf("ingrese un numero natural:");
    scanf("%i",&num);
    while (num>=x)
    {
        resul=resul*x;
        x=x+1;
        printf("%i ",resul);
    }

     return 0;
}