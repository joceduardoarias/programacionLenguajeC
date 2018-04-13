#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int vec[20]; // este vector solo esta reservando la memoria
   int i;
   int j;
   int aux;

   srand(time(NULL));
   for(i=0;i<20;i++)
   {
        vec[i] = (int)1 + rand () % ((100+1) - 1);
   }
   /*for(i=0;i<20;i++)
   {
        printf("\nEl elemento %3d vale %3d ",i,vec[i]); // aqui se imprime el valor ingresado por el usuario y el indice
   }                                                    // asociado a ese valor
    */
    for(i=0;i<20-1;i++) // este es el algoritmo que sirve para ordenar los valores ingresados por el usuario
    {
        for(j=i+1;j<20;j++)
        {
            if(vec[i]<vec[j]) // solo cambiando el singno de la comparacion podemos ordenar de forma creciente o
            {                 // decreciente.
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
    for(i=0;i<20;i++)
   {
        printf("\nEl elemento %3d vale %3d ",i,vec[i]); // aqui se imprime el indice y el valor de forma decreciente
   }

    return 0;
}
