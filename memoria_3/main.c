#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vector;//direccion de memoria del primer elemento del array
    int i;


    vector = (int*) calloc(5,sizeof(int));// inicializa los elementos del array en cero
    if(vector==NULL)
    {
        printf("No se pudo asignar memoria.\n");
        exit(1);
    }

    for(i=0; i<5; i++)
    {
        printf("%d\n", *(vector+i));// muestro cada elemento del vector
    }
    printf("\n");

    return 0;
}
