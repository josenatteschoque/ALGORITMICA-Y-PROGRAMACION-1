/*Ejercicio 2. Modificá el programa del ejercicio E8TP1 para implementar el cálculo de la edad exacta mediante
una función.
int calcularEdad(char[] fechaNacimiento);*/

#include <stdio.h>

int calcular_Edad(int dd, int mm, int aa, int dd1, int mm1, int aa1);
int calcular_Edad(int dd, int mm, int aa, int dd1, int mm1, int aa1)
{
    int edad1 = aa1 - aa;
    if (mm1 < mm || (mm1 == mm && dd1 < dd))
    {
        edad1--;
    }
    return edad1;
}

int main()
{
    int dd, mm, aa, dd1, mm1, aa1;
    int resultado;

    printf("ingrese su fecha de nacimiento:\n");
    scanf("%d %d %d",&dd, &mm, &aa);
    printf("ingrese la fecha actual:\n");
    scanf("%d %d %d",&dd1 ,&mm1,&aa1);
    resultado = calcular_Edad(dd, mm, aa, dd1, mm1, aa1);
    printf("su edad exacta es: %d ",resultado);
    return 0;
}