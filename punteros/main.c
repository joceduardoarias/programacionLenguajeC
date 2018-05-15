#include <stdio.h>
#include <stdlib.h>
void notacionVectorial(int vec[], int tam);
void arrayPuntero(int vec[], int tam);
void punteroVectorial(int* vec, int tam);
void arrayAritmeticaPuntero(int* vec, int tam);
int main()
{
    int vec[]={5,3,4,9,7};
    int i;
    /*for(i=0; i<5; i++)
    {
        printf("\ningrese un numero: ");
        scanf("%d", (vec + i)); //acceder a cada posicion del puntero
    }
    for(i=0; i<5; i++)
    {
        printf("%d", *(vec + i) );
    }
    */
    notacionVectorial(vec,5);
    arrayPuntero(vec,5);
    punteroVectorial(vec,5);
    arrayAritmeticaPuntero(&vec,5);
    return 0;
}
void notacionVectorial(int vec[], int tam)
{
    int i;
    printf("notacion vectorial\n");

    for(i=0; i<5; i++)
    {
        printf(" %d", vec[i]);
    }
}
void arrayPuntero(int vec[], int tam)
{
    int i;
    printf("\narray puntero\n");

    for(i=0; i<tam; i++)
    {
        printf(" %d", *(vec + i));
    }
}
void punteroVectorial(int* vec, int tam)
{
    int i;

    printf("\npuntero - array\n");

    for(i=0; i<tam; i++)
    {
        printf(" %d", vec[i]);
    }
}
void arrayAritmeticaPuntero(int* vec, int tam)
{
    int i;

    printf("\npuntero - notacion puntero\n");

    for(i=0; i<tam; i++)
    {
        printf(" %d", *(vec+i));
    }
}
