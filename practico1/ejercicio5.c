#include <stdio.h>
int main()
{ 
    int num, x=1;
    printf("ingrese un numero:");
    scanf("%i",&num);
    while (x<=num)
    {
        printf("%i ",x);
        x=x+1;
    }
    return 0;
}