#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas1 []= {10,7,2,2,4};
    int notas2 []= {9,5,4,7,5};
    float promedios[5];
    int i;

    for(i=0;i<5;i++)
    {
       promedios[5]= (float)notas1[i] + notas2[i] / 5;
    }
    printf("\n promedio: %f", promedios[i]);
    return 0;
}
