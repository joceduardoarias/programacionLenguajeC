#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [30];
    int cantidadPaginas;
    int contadorPaginasPar = 0;
    int contadorPaginasImpar = 0;
    int cantidadventas;
    int contadorVentasCero = 0;
    int acumuladorVentas = 0;
    int tema;
    int sumaPaginaProgramacion = 0;
    int respuesta = 1;
    float promedioVentas;
    int contador = 0;

    while(respuesta != 0)
    {   // Entrada
        contador++;
        printf("Ingrese nombre del Libro: ");
        scanf(" %s", nombre);

        printf("\n Elija el tema del libro: ");
        printf("\n\n 1 Robótica ");
        printf(" 2 Programación ");
        printf("\n 3 Patrones ");
        printf(" 4 Base de Datos \n\n");
        scanf(" %d", &tema);

        printf("Ingrese cantidad de paginas del libro");
        scanf(" %d", &cantidadPaginas);

        while( cantidadPaginas <1)
        {
            printf(" Cantidad de paginas debe ser mayor a 0");
            scanf(" %d", &cantidadPaginas);
        }

        printf("Ingrese cantidad de ventas");
        scanf(" %d", &cantidadventas);

        while( cantidadventas < 1)
        {
            printf(" Cantidad de ventas debe ser mayor a 0");
            scanf(" %d", &cantidadventas);
        }

        if(cantidadPaginas%2 == 0)
        {
            contadorPaginasPar++;
        }
        else
        {
            contadorPaginasImpar++;
        }

        if(cantidadventas == 0)
        {
            contadorVentasCero++;
        }

        acumuladorVentas = acumuladorVentas + cantidadventas;

        if(tema == 2)
        {
            sumaPaginaProgramacion = sumaPaginaProgramacion + cantidadPaginas;
        }
        // Salida
        printf(" Si desea continuar precione 1, si desea salir presione 0");
        scanf(" %d", &respuesta);

    }

    promedioVentas = (float) acumuladorVentas / contador;

    printf("\n a. La cantidad de libros con páginas pares: %d", contadorPaginasPar);
    printf("\n b. La cantidad de libros con páginas impares: %d", contadorPaginasImpar);
    printf("\n c. La cantidad de ceros ventas: %d", contadorVentasCero);
    printf("\n d. El promedio de todas las ventas ingresadas: %.1f", promedioVentas);
    printf("\n e. La suma de todas las páginas de los de programación: %d", sumaPaginaProgramacion);
    return 0;
}
