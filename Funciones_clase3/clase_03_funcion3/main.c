#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Hacer un programa que calcule el área de un círculo cuyo radio es ingresado por el usuario.
 *
 *@return el area del circulo
*/

// prototipo de funciones
float pedirnumero (void);
float calculoAreaCirculo(float);

int main()
{
    float numero;
    float area;

    numero = pedirnumero();
    area = calculoAreaCirculo(numero);

    printf("El area del circulo es: %.2f", area);
    return 0;
}

// Desarrollo de funcion que pide un numero al asuario.

float pedirnumero (void)
{
    float retorno;

    printf("Ingrese numero");
    scanf("%f", &retorno);
    return retorno;
}
 // Desarrollo de funcion que recibe el radio ungresado por usuario
 // y calcula el area de una circulo.
float calculoAreaCirculo(float radio)
{
    float retorno;

    retorno = 3.14 * radio * radio;

    return retorno;

}
