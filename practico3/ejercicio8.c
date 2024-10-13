/*Ejercicio 8. Escribí un programa que reciba del usuario una fecha en formato dd/mm/aaaa (dos dígitos para el
día, dos para el mes y cuatro para el año) y almacene cada dato por separado en un registro. Al finalizar, debe
imprimir la fecha en formato dd-mm-aaaa.*/
#include <stdio.h>

struct fecha //declaro una estructura
{
    int dia;
    int mes;
    int anio;
};

int main()
{
    struct fecha fecha1; //llamo ala estructura
    printf("ingrese el dia: ");
    scanf("%d", &fecha1.dia);
    printf("ingrese el mes: ");
    scanf("%d", &fecha1.mes);
    printf("ingrese el anio: ");
    scanf("%d", &fecha1.anio);
    printf("%.2d / %.2d / %.4d ", fecha1.dia, fecha1.mes, fecha1.anio); //imprimo los datos como sugeria el formato
    return 0;
}
