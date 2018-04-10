#include <stdio.h>
#include <stdlib.h>
void mostrarVector(int [], int);
int calcularMaximo(int [], int);
void ordenarVeactor(int[], int);
int main()
{
    int vec[] = {1,6,5,8,7};
    int tam = 5;
    int maximo;
    mostrarVector(vec,tam);
    maximo = calcularMaximo(vec, tam);
    //ordenarVeactor(vec,tam);
    printf("\n numero mayor: %d", maximo);
    return 0;
}
void mostrarVector(int vec [], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        vec[tam]= i; // se asocia un indice a cada casillero de memoria
    }
    for(i=0;i<tam;i++)
    {
        printf("%d", vec[i]);
    }
}

int calcularMaximo(int vec[], int tam)
{
    int i;
    int maximo;
    int flag = 0;
    for(i=0;i<tam;i++)
    {
        if(maximo < vec[i] || flag == 0)
        {
            maximo = vec[i];
            flag = -1;
        }
    }
    return maximo;
}


void ordenarVeactor(int vec[], int tam)
{
    int i;
    int j;
    int aux;
    for(i=0; i < tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vec[i] < vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}

