#include <stdio.h>
int main()
{
    int num1, resul, x, y;
    printf("ingrese un numero: ");
    scanf("%i",&num1);
    x=0;
    y=1;
    
    for (int a=1; a <= num1; a++)
    {
        printf("%i ",x);
        resul = y+x;
        x = y;
        y = resul;
    }
    
    return 0;
}