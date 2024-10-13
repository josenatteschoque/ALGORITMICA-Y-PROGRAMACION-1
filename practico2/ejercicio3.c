#include <stdio.h>
int main()
{
    int vector1[5] = {1,2,3,4,5};
    int vector2[5] = {6,7,8,9,10};
    int suma[5];
    for (int i = 0; i < 5; i++)
    {
        suma[5] = vector1[i] + vector2[i];
        printf("%i ",suma[5]);
    }
    return 0;
}