#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero[10];
    int i;

    for(i=1;i<=10;i++)
    {
    numero[i] = i;
    }

   for(i=1;i<=10;i++)
   {
        printf("\n %d \n", numero[i]);
   }
      return 0;
}
