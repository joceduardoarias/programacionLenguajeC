#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Crear una funicion que permita ingresar un numero y lo retorne.
 * @param numero ingresado por el usuario.
*/

// Prototipo de funcion
int pedirnumero (void);

int main()
{
    int numero;

    numero = pedirnumero();
    printf("\n El numro es: %d", numero);
    return 0;
}

// Desarrollo de funcion
int pedirnumero(void)
{
    int retorno;

    printf("Ingrese numero: ");
    scanf("%d", &retorno);

    return retorno;
}
