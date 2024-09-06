#include <stdio.h>
int main()
{
    int num, y, x, resul;
    printf("ingrese un numero natural:");
    scanf("%i",&num);
    x=2;
    y=1;
    resul = x+y;
    if (num > 0)
    {
        for (int i=1; i<=num; i++)
        {
            printf("%i ",resul);
            resul = resul+2;
        }
    }
    else
    {
        printf("no es un numero natural!!!");
    }
    return 0;
}