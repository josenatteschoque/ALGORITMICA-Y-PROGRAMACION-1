#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero[10];
    int numero_aleatorio, c;
    int conteo[11] = {0};

    srand(time(NULL));

    for (int p = 0;p < 10; p++)
    {

        for(int i = 0 ;i < 10; i++)
        {
            do{
                 numero_aleatorio = rand() % 11;
                 for(c = 0 ;c < i; c++)
                 if(numero[c] == numero_aleatorio) break;
            }while(c < i);
            numero[i] = numero_aleatorio;
            printf("%i ",numero[c]);
            numero[i] = numero_aleatorio;
            conteo[numero_aleatorio]++;
        }
        printf("\n");  
    }
     for (int j = 0; j < 11; j++)
        {
            printf("el numero %i esta repetivo %i veses \n ", j, conteo[j]);
        }

    return 0;
}