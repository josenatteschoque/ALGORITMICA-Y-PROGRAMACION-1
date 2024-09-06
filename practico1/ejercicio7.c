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