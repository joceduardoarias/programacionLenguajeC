#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Crear una función que reciba el radio de un círculo y retorne su área.
 * @param r radio del circulo.
 * @return retorno retorna area del circulo.
*/
// Prototipo de funcion
float CalculoAreaCirculo(void);

int main()
{

    float area;

    area = CalculoAreaCirculo();

    printf("\n El area del cirulo es: %f", area);
    return 0;
}
// desarrollo de funcion
float CalculoAreaCirculo(void)
{
    float radio;
    float retorno;

    printf("ingrese el radio");
    scanf("%f", &radio);

    retorno = 3.14 * radio * radio;

    return retorno;
}
