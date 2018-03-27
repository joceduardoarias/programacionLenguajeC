#include <stdio.h>
#include <stdlib.h>

//Prototipo de funcion
int sumaValor1Valor2(int a, int b);

int main()
{
    int a;
    int b;
    int suma;
    printf("ingrese valor a: ");
    scanf("%d", &a);
    printf("Ingrese valor b: ");
    scanf("%d", &b);

    suma = sumaValor1Valor2(a,b);
    printf("La suma de a y b es: %d", suma);
    return 0;
}
// desarrollo de funcion
int sumaValor1Valor2(int a, int b)
{
    int retorno;

    retorno = a + b;
    return retorno;
}
