/*Ejercicio 8. Escribí un programa invierta los elementos de un arreglo de enteros utilizando recursividad.*/

#include <stdio.h>
void invertir(int A[], int inicio, int fin);
void imprimir(int A[], int tam);

int main()
{
    int arreglo[] = {1,2,3,4,5,6,7,8,9,10}; //arreglo harcodeado
    int tamanio = sizeof(arreglo) / sizeof(arreglo[0]); //calcula el tamanio del arreglo
    printf("el arreglo original es: ");
    imprimir(arreglo, tamanio);

    invertir(arreglo, 0, tamanio - 1);
    printf("el arreglo invertido es: ");
    imprimir(arreglo, tamanio);
    return 0;

}

//funcion recursiva para invertir un arreglo de enteros 
void invertir(int A[], int inicio, int fin)
{
    int tem;
    if (inicio >= fin)
    {
        return;
    }

    tem = A[inicio];
    A[inicio] = A[fin];
    A[fin] = tem;

    invertir(A, inicio + 1, fin - 1);
}
//funcion para imprimir el arreglo
void imprimir(int A[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf(" %d ", A[i]);
    }
    printf("\n");
}