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