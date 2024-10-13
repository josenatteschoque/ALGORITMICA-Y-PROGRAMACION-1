/*Ejercicio 2. Compila y ejecuta los siguientes códigos:
¿Qué valores se imprimen en la consola? ¿A qué conclusión puedes arribar de cada situación?*/

//CODIGO 1 
#include <stdio.h>

void contador() 
{
    static int count = 0;
    count++;
    printf("Contador: %d\n", count);
}
int main() 
{
    contador();
    contador();
    contador();
    return 0;
}

// este imprime los valores 1, 2 y 3.
//en esta situacion usan una variable static lo cual guarda su valor en toda la ejecucion por eso lo usan como contador

//CODIGO 2
#include <stdio.h>

void contador() 
{
    int count = 0;
    count++;
    printf("Contador: %d\n", count);
}
int main() 
{
    contador();
    contador();
    contador();
    return 0;
}

// este imprime el valor 1 tres veces. 
//en esta situacion usan una variable normal por eso solo incrementa solo una vez la variable

//CODIGO 3
#include <stdio.h>

static int count = 0;
void contador() 
{
    count++;
    printf("Contador: %d\n", count);
}
int main() 
{
    contador();
    contador();
    contador();
    return 0;
}

//este imprime los valores 1, 2 y 3.
//en esta situacion usan una variable static y la usan como un contador