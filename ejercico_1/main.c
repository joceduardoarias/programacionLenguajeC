#include <stdio.h>
#include <stdlib.h>
/*Realizar el algoritmo que pida la base y la altura de un triángulo equilátero,
  informar la superficie y el perímetro */
int main()
{
    int altura; // dato de entrada
    int base;   // dato de entrada
    int perimetro; // dato de salida
    int area;  // dato de salida

    printf("Ingrese la altura: ");
    scanf("%d", &altura);
    printf("Ingrese la base: ");
    scanf("%d", &base);

    perimetro = base * 3;
    area = (base * altura)/2;

    printf("El perimetro del triangulo es : %d \n El area de triangulo es: %d", perimetro, area);
    return 0;
}
