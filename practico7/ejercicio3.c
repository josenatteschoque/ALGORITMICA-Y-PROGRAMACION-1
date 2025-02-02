/*Ejercicio 3. Escribí un programa que al ejecutarse verifique si existe un archivo llamado “pidfile”. Si el archivo
existe, el programa debe finalizar con el mensaje “El programa ya se encuentra en ejecución”. Si el archivo no
existe, debe crearlo, guardar el PID del programa y esperar a que el usuario ingrese cualquier tecla para luego
borrar el archivo y finalizar. (Ver nota 3 en Anexo).
3. pidfile y getpid(): Un pidfile (archivo de ID de proceso) es un archivo que contiene el ID de proceso
(PID) de un proceso en ejecución. El pidfile se utiliza para Identificar y monitorear el proceso en
ejecución y su ID único. Los pidfiles suelen ubicarse en directorios del SO en sistemas Linux y Unix. La
función getpid() en C, devuelve el ID de proceso (PID) del proceso que la llama, y puede utilizarse para
crear un archivo pidfile.*/

#include <stdio.h>

int main()
{
    FILE *archivo = fopen("pidfile","r");
    if (archivo == NULL)
    {
        printf("el programa ya se encuentra en ejecucion.");
    }
}

//incompleto