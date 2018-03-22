#include <stdio.h>
#include <stdlib.h>
/**
  *(IF)Pedir dos números y mostrar el resultado:
  *Si son iguales los muestro concatenados.
  *Si el primero es mayor, los divido,
  *de lo contrario los sumo.
  *Si la suma es menor a 50 ,además de mostrar el resultado, muestro el mensaje
  *"la suma es xxx y es menor a 50"
*/
int main()
{
    // Declrar variables
    int numeroUno;
    int numeroDos;
    int resultado;
    int suma;
    // Datos de entrada
    printf("Ingrese numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese numero :");
    fflush( stdin );
    scanf("%d", &numeroDos);
    // Secuendia de control
    if(numeroUno == numeroDos)
    {
       resultado = printf("\n %d%d \n", numeroUno, numeroDos);
    }
    else
    {
        if(numeroUno > numeroDos)
        {
            resultado = numeroUno / numeroDos;
        }
        else
        {
            if(numeroUno < numeroDos)
            {
            resultado = numeroUno + numeroDos;
            suma = resultado;
            }
        }
    }
    if(suma < 50)
    {
        printf("La suma es: %d y es menor a 50", suma);
    }
    printf("\n El resultado es: %d \n", resultado);
    return 0;
}
