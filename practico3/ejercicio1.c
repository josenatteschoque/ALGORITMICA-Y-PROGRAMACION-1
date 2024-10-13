/*Ejercicio 1. Modificá el ejercicio E11TP1 para que utilice una función que determine si un número dado es
primo (devuelve 1) o no (devuelve 0) (PS) (PE N=10).
int esPrimo(int numero);*/

#include <stdio.h>

int es_primo(int numero);
int es_primo(int numero)
{  
    if (numero < 0)
    {
        printf("por favor ingrese otro numero");
    }
    else
    {
        printf("los numeros primos menores o iguales a %i son: ",numero);
        for (int i = 2; i <= numero; i++)
        {
            int es_primo = 1;

            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    es_primo = 0;
                    break;
                }
            }
            if (es_primo)
            {
                printf("%i es un numero primo \n",i);
            }
        }
    }
    return es_primo;
}

int main()
{
    int numero;
    int resultado = 0;
    printf("ingrese un numero: ");
    scanf("%i",&numero);
    resultado = es_primo(numero);
    return 0;
}