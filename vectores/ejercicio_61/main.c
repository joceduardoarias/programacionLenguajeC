#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vec[30]; // inicializacion del vector
    int i;
    int gastoMayor; // Variable donde se va a guardar el valor mayor grabado en el vector

    for(i=0;i<30;i++)
    {
        vec[i] = (int)1 + rand () % ((100+1) - 1);//Cargar datos al vector y asociarlos a un indice
    }
    for(i=0;i<30;i++)
    {
        printf("\n elemento %2d valor [%d] ", i,vec[i]);
    }
    gastoMayor = 0; // algoritmo para calcular valor mayor cargado al vector
    for(i=0;i<30;i++)
    {
        if(vec[i] > gastoMayor)
        {
            gastoMayor = vec[i];
        }
    }
    printf("\n El mayor del gasto: %d", gastoMayor);

    return 0;
}
