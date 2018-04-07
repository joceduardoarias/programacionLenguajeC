#include <stdio.h>
#include <stdlib.h>
int GetInt(char[]);

int main()
{
    int edad;

    edad = GetInt("Ingrese su i: ");
    printf("Su edad es: %d", edad);
    return 0;
}

int GetInt(char mensaje[])
{
    int retorno;
    printf("%s", mensaje);
    scanf("%d", &retorno);
    return retorno;
}
