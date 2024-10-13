#include <stdio.h>
int main()
{
    char palabra[10][10]= {"hola","adios","skate","auto","bici","avion","barco","moto","jose","joder"};
    
    for (int i = 0; i < 10; i++)
    {
        printf("%s, ",palabra[i]); 
    }
    printf("\n");
    for (int j = 10 ;j >= 0; j--)
    {
        printf("%s ",palabra[j]);
    }
    return 0;
}