/*Ejercicio 11. Escribí un programa que permita mantener un catálogo de productos con la siguiente estructura:
struct Producto {
char codigo[10];
char nombre[50];
int stock;
float precio;
};*/
#include <stdio.h>
#include <string.h>

struct producto
{ 
    char codigo[50];
    char nombre[50];
    int stock;
    float precio;
};

int main()
{
    struct producto catalogo[5];
    for (int i = 0; i < 5; i++)
    {
        printf("ingrese el codigo del articulo:");
        scanf("%s", catalogo[i].codigo);
        getchar();

        printf("ingrese el nombre del producto:");
        fgets(catalogo[i].nombre, 50, stdin);
        catalogo[i].nombre[strcspn(catalogo[i].nombre, "\n")] = '\0';  

        printf("ingrese el precio del producto:");
        scanf("%f", &catalogo[i].precio);

        printf("ingrese el stock del producto:");
        scanf("%d", &catalogo[i].stock);
    }
    printf("el catalogo es:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("codigo: %s\n", catalogo[i].codigo);
        printf("el nombre: %s\n", catalogo[i].nombre);
        printf("el precio es: %.2f\n", catalogo[i].precio);
        printf("stock: %d\n", catalogo[i].stock);
        printf("\n");
    }
    return 0;
}