#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/** Un programa que al ingresar una nota:
  *Si está entre las 0 y las 3 mostrar: "la próxima se puede",
  *si es desde las 4 a las 6: "raspando", de lo contrario informar que aprobó.
  *Informar si la nota no es válida.
  *Si es aprobó y la nota es mayor a 8 se debe agregar el mensaje: "muy bien".
  *Si es nota para “raspando” y la nota es menor a 5 se debe agregar el mensaje: "debes preocuparte más".
  *Aclaración: hacer un switch y dentro toda la lógica incluyendo los if y con una sola ventana alert.
*/

int main()
{
    // Declarar variables
    int nota;
    // Datos de entrada
    printf("Ingrese la nota: ");
    scanf("%d", &nota);
    // Sentencias de control
    switch(nota)
    {
        case 0:
        case 1:
        case 2:
        case 3:
            prinf("La proxima se puede");
        break;

        case 4:
        case 5:
        case 6:
            printf("Raspando");
            if(nota < 5)
            {
                printf("debes preocuparte más")
            }
        break;
        case 7:
        case 8:
        case 9:
        case 10:
               printf("Aprobo");
               if(nota > 8)
               {
                    printf("Aprobo muy bien");
               }

        break;
        default:

            printf("nota invalida");
        break;
    }

    return 0;
}
