#include <stdio.h>
#include <stdlib.h>
/**Pedir  el precio y el porcentaje de descuento, mostrar:
    1-El descuento en dinero,
    2-El precio con el descuento ,
    3-El IVA
    4-Y solo el precio con descuento más el IVA por id .
*/
int main()
{   // Declarar variables
    float precio;
    float porcentajeDescuento;
    float descuento;
    float resultado;
    float iva;
    float precioFinal;
    // Datos de entrda
    printf("Ingrese el precio");
    scanf("%f", &precio);
    printf("Ingrese el descuento");
    fflush( stdin );
    scanf("%f", &porcentajeDescuento);
    // calculo
    descuento = precio * (porcentajeDescuento / 100);
    resultado = precio - descuento;
    iva = resultado * 0.21; // como voy a pagar con descuento el iva se aplica al precio con el descuento
                            // por eso utilizo resultado y no precio.
    precioFinal = resultado + iva;
    printf("\n 1. El descuento es: %.1f \n 2. Precio con descuento: %.1f \n 3. IVA: %.1f \n 4. Precio final: %.1f\n", descuento, resultado, iva, precioFinal);

    return 0;
}
