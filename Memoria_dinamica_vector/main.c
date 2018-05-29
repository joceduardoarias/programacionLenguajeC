#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vector;//direccion de memoria del primer elemento del array
    int i;
    int* aux;

    vector = (int*) malloc(sizeof(int)*5);// estoy buscando espacio para un array de 5 enteros
    if(vector==NULL)
    {
        printf("No se pudo asignar memoria.\n");
        exit(1);
    }

    for(i=0; i<5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", vector + i); //accedo a cada elemento del vector
    }

    for(i=0; i<5; i++)
    {
        printf("%d\n", *(vector+i));// muestro cada elemento del vector
    }
    printf("\n");

    aux =(int*) realloc(vector,10*sizeof(int)); // utilizo una auxiliar para no perder los datos guardados en el vector
    if(aux != NULL)
    {
        vector = aux;
        printf("se agrando el array con exito.\n");
    }
    else
    {
        printf("No se puede agrandar el array\n");
    }
    for(i=5; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", vector + i); //accedo a cada elemento del vector
    }

    for(i=5; i<10; i++)
    {
        printf("%d\n", *(vector+i));// muestro cada elemento del vector
    }
    printf("\n");

    //REDICIR TANAÑO DEL VECTOR

    vector = (int*) realloc(vector,
                            56*sizeof(int));


    for(i=0; i<10; i++)
    {
        printf("%d\n", *(vector+i));// muestro cada elemento del vector
    }
    printf("\n");

    return 0;
}
