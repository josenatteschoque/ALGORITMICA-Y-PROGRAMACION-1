#include <stdio.h>
int main()
{
    int num, num1, numeroinvertido = 0;
    int digito;
    printf("ingrese un numero entero: ");
    scanf("%i",&num);
    num1=num;
    while (num > 0)
    {
        digito = num % 10;
        numeroinvertido = numeroinvertido * 10 +digito;
        num = num / 10;
    }
    
    if (num1 == numeroinvertido)
    {
        printf("es capicua");
    }
    else 
    {
        printf("no es capicua");
    }

    return 0;
}