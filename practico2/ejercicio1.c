#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero[10];
    int numero_aleatorio, c;

    srand(time(NULL));

    for(int i = 0 ;i < 10; i++)
    {
        do{
            numero_aleatorio = rand() % 11;
            for(c = 0 ;c < i; c++)
            if(numero[c] == numero_aleatorio) break;
        }   while(c < i);
        numero[i] = numero_aleatorio;
        printf("%i ",numero[c]);
    }

    return 0;
}
