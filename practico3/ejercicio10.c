/*Ejercicio 10. Utilizando lo realizado en los ejercicios anteriores realizá un programa que reciba del usuario
nombre, apellido y fecha de nacimiento (dd/mm/aaaa), calcule la edad y guarde todos los datos en un
registro. Luego debe imprimir todos los datos en una sola cadena con el siguiente formato: “La persona
nombre apellido nació el día dd-mm-aaaa y tiene n años de edad”. Utilizá al menos una función para
completar la estructura, otra para calcular la edad (obteniendo la fecha actual con lo realizado en el ejercicio
anterior) y otra para imprimir por pantalla la cadena.
struct Fecha {
int dia;
int mes;
int anio;
};
struct Persona {
char nombre[50];
char apellido[50];
struct Fecha fechaNacimiento;
int edad;
};*/
#include <stdio.h>
#include <time.h>
#include <string.h>

int calcular_edad(int *mm, int *aa)
{
    int mes, edad1, edad2, anio;
    time_t tiempo_actual;
    struct tm *info_tiempo;
    time(&tiempo_actual);
    info_tiempo = localtime(&tiempo_actual);
    mes = info_tiempo->tm_mon + 1;
    anio = info_tiempo->tm_year + 1900;
    edad1 = anio - *aa;
    if (*mm > mes)
    {
        edad2 = edad1;
        return edad2;
    }
    else 
    {
       edad2 = edad1 - 1;
       return edad1;
    }
}

struct persona
{
    char nombre[50];
    char apellido[50];
};
struct fecha_nacimiento
{
    int dia;
    int mes;
    int anio;
};

int main()
{
    struct persona per;
    struct fecha_nacimiento edad;
    printf("ingrese su nombre: ");
    fgets(per.nombre, 50, stdin);

    if(per.nombre[strlen(per.nombre) -1]=='\n') //esto checkea si en el arreglo esta el salto de linea
    {
        per.nombre[strlen(per.nombre) -1] = '\0'; //esto borra el salto de linea 
    }
    printf("ingrese su apellido: ");
    fgets(per.apellido, 50, stdin);

    if(per.apellido[strlen(per.apellido) -1] =='\n') //esto checkea si en el arreglo esta el salto de linea
    {
        per.apellido[strlen(per.apellido) -1] = '\0'; //esto borra el salto de linea 
    }
    printf("ingrese su fecha de nacimiento en el formato dd/mm/aaaa:\n");
    scanf("%d %d %d", &edad.dia, &edad.mes, &edad.anio);
    printf("la persona %s %s nacio el  %d/%d/%d y tiene %d anios de edad", per.nombre, per.apellido, edad.dia ,edad.mes ,edad.anio ,calcular_edad(&edad.mes, &edad.anio));

    return 0;
}
