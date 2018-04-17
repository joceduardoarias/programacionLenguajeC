#include <stdio.h>
#include <stdlib.h>

#define TAM 5
void mostrarEmpleados(char [][20],char [], int );
int main()
{
    char nombre[TAM][20];
    int i;
    char sexos[TAM];
    int legajos[TAM];
    float sueldos[TAM];

    for(i=0;i<TAM;i++)
    {
            printf("Ingrese nombres de empleado: ");
            fflush(stdin);
            gets(nombre[i]);
            for(i=0;i<TAM;i++)
            {
                 printf("Ingrese sexo: ");
                 fflush(stdin);
                 scanf("%c", &sexos[i]);
                 break;
            }
            for(i=0;i<TAM;i++)
            {
                 printf("Ingrese legajo: ");
                 scanf("%d", &legajos[i]);
                 break;
            }

    }



    mostrarEmpleados(nombre,sexos,TAM);
    return 0;
}
void mostrarEmpleados(char matriz[][20],char sexo[], int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("\n%s", matriz[i]);
        printf("\nsexo: %c", sexo[i]);
    }
    printf("\n\n");
}
