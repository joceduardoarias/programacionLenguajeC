#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int calcularMaimo(int vec[]);
int main()
{
    int vec[20];
    int i;
    int vecMayor;

    srand(time(NULL));                                                        // posicion de memoria en el vector.
    for(i=0;i<20;i++)   // Aqui inicializo el indice con que voy a a asociar
    {                   // cada valor del vector con una posicion desde 0 hasta 19.
       vec[i] = (int)1 + rand () % ((100+1) - 1);//printf("\ningrese valor vec[%d]",i);
                        //scanf("%d",&vec[i]);
    }

    vecMayor = calcularMaimo(vec);
    /*vecMayor=vec[0];    // Esta asignacion de forma arbitraria dice que el valor del vector en esa posicion es el mayor
    for(i=0;i<20;i++)   // sin ser esto cierto pero apartir de esta asignacion con el if comparamos este valor con los demas
    {                   // hasta que halle el valor mayor.
        if(vec[i]>vecMayor) // Este if hace la comparacion hasta que halla vector con el valor mayor
        {
            vecMayor = vec[i];
        }
        printf("\n El elemento %3d vale %3d",i,vec[i]);
    }*/
    printf("\nEl elemento %3d es el valor mayor es: vec[%d]\n",i,vecMayor);

    return 0;
}
// desarrollo de funcion
int calcularMaimo(int vec[])
{
    int i;
    int vecMayor;
    vecMayor=vec[0];    // Esta asignacion de forma arbitraria dice que el valor del vector en esa posicion es el mayor
    for(i=0;i<20;i++)   // sin ser esto cierto pero apartir de esta asignacion con el if comparamos este valor con los demas
    {                   // hasta que halle el valor mayor.
        if(vec[i]>vecMayor) // Este if hace la comparacion hasta que halla vector con el valor mayor
        {
            vecMayor = vec[i];
        }
        //printf("\n El elemento %3d vale %3d",i,vec[i]);
    }
    return vecMayor;
}
