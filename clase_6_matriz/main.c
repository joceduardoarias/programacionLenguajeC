#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarNombres(char[] [20], int);
void mostrarNombre(char []);
int main()
{
    char nombres [5][20]; // esto es un array b
    int i;

    for(i=0;i<5;i++)
    {
        gets(nombres[i]);
        strupr(nombres[i]); // Pasa todas las cadenas ingresadas a mayusculas
    }

    /*for(i=0;i<5;i++)
    {
        printf("\n%s", nombres[i]);

    }
    printf("\n\n");*/
    mostrarNombres(nombres,5);
    return 0;
}

void mostrarNombres(char matriz[] [20], int cantidadFilas)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n%s", matriz[i]);

    }

    printf("\n\n");
}
void mostrarNombre(char [])
{

}


