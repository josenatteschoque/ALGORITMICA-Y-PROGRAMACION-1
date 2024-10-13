/*Ejercicio 9. Utilizando las funciones presentes en time.h obtené el día actual e imprimilo por pantalla con el
formato “Hoy es dd/mm/yyyy”. (Ver nota 2 en Anexo)*/

/*time.h: La biblioteca time (cabecera time.h) en C proporciona varias funciones para trabajar con fechas
y horas. A continuación, algunas de las principales funciones presentes en time.h:
● time(): Devuelve el número de segundos transcurridos desde la época Unix (1 de enero de
1970).
● clock(): Devuelve el número de ticks de reloj transcurridos desde el inicio del programa.
● difftime(): Calcula la diferencia entre dos tiempos.
● mktime(): Convierte una estructura tm en un tiempo calendario.
● gmtime(): Convierte un tiempo en una estructura tm en zona horaria GMT.
● localtime(): Convierte un tiempo en una estructura tm en zona horaria local.
● asctime(): Convierte una estructura tm en una cadena de texto.
● ctime(): Convierte un tiempo en una cadena de texto.
● strftime(): Formatea una estructura tm en una cadena de texto según un formato especificado.
● tzset(): Establece la zona horaria según las variables de entorno.
La estructura tm es una estructura de datos que representa una fecha y hora, y contiene los siguientes
miembros:
● tm_sec: Segundos (0-59)
● tm_min: Minutos (0-59)
● tm_hour: Horas (0-23)
● tm_mday: Día del mes (1-31)
● tm_mon: Mes (0-11)
● tm_year: Año (desde 1900)
● tm_wday: Día de la semana (0-6)
● tm_yday: Día del año (0-365)
● tm_isdst: Indicador de horario de verano
Estas funciones te permiten trabajar con fechas y horas de manera efectiva en tus programas en C.*/

#include <stdio.h>
#include <time.h>
int main()
{
    //estructura para almacenar el tiempo actual
    time_t tiempo_actual;
    struct tm *info_tiempo;

    time(&tiempo_actual); //obtener el tiempo actual

    info_tiempo = localtime(&tiempo_actual); //convertir el tiempo a una estructura tm

    printf("hoy es: %02d/%02d/%02d\n", //imprime la fecha actual en el formato dd/mm/yyyy
    info_tiempo->tm_mday, //dia 
    info_tiempo->tm_mon + 1, //mes (tm_mon empieza desde 0 por eso le sumamos 1)
    info_tiempo->tm_year + 1900); //año (tm_year cuenta desde 1900)
    return 0;
}
