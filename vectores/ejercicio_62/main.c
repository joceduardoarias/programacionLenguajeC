#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vecA[100];
    int vecB[100];
    int vecC[100];
    int i;
    int valorMenorA;
    int valorMenorB;

    srand(time(NULL));
    for(i=0;i<100;i++)
    {
        vecA[i]=(int)1 + rand () % ((100+1) - 1);
        vecB[i]=(int)1 + rand () % ((100+1) - 1);// Este está entre M menor y N mayor
    }
    for(i=0;i<100;i++)
    {
        printf("\n %i valorAleatorio A: %2d valorAleatorio B: %2d",i, vecA[i], vecB[i]);
    }

    valorMenorA=vecA[0];
    for(i=0;i<100;i++)
    {
        if(vecA[i]<valorMenorA)
        {
            valorMenorA=vecA[i];
            /* otras asignaciones*/
        }

    }
    printf("\n el menor valor en A es: %d\n", vecA[i]);

     valorMenorB=vecB[0];
     for(i=0;i<100;i++)
    {
        if(vecB[i]<valorMenorB)
        {
            valorMenorB=vecB[i];
            /* otras asignaciones */
        }

    }
    printf("\n el menor valor en B es: %d\n", vecB[i]);

    return 0;
}
