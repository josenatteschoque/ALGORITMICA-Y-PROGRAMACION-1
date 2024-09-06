#include <stdio.h>
int main()
{
    char letra;
    printf("ingrese una letra:");
    scanf(" %c",&letra);
    if (letra >= 'A' && letra <= 'Z')
    {
        letra+='a' - 'A';//convierte la letra
    }
    for (char c = 'a'; c <= letra ; c++)
    {
        printf("%c ",c);
    }
    return 0;
}