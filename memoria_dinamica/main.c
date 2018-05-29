#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* x;
    x = (int*) malloc(sizeof(int));
    if(x==NULL)
    {
        printf("No se encontro memoria.\n");
        exit(1);// sirve para terminar el programa una vez no encontro memoria.
    }

    printf("ingrese un numero: ");
    scanf("%d", x);// no lleva & pues x es una direccion de memoria.
    printf("El numero ingresado es %d\n", *x);

    free(x); // libero el espacio que reserve para x
    return 0;
}
