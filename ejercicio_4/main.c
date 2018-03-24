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
    float resultado;
    // Datos de entrada
    printf("Ingrese numero: ");
    scanf("%d", &numeroUno);
    printf("Ingrese numero :");
    fflush( stdin );
    scanf("%d", &numeroDos);
    // Secuendia de control
    if(numeroUno == numeroDos)
    {
       printf("\n %d%d \n", numeroUno, numeroDos);
    }
    else
    {
        if(numeroUno > numeroDos)
        {   //  if (numeroDos != 0) asi validamos que la division se pueda realizar
            resultado = (float)numeroUno / numeroDos; // asi estoy casteando numeroUno y numeroDos son enteros con float
        }                                             // antes de la operacion de la derecha hace que el resultado sea un dato float.
        else
        {
            resultado = numeroUno + numeroDos;

            if(resultado < 50)
            {
              printf("La suma es: %d y es menor a 50", resultado);
            }
        }
    }

    printf("\n El resultado es: %d \n", resultado);
    return 0;
}
