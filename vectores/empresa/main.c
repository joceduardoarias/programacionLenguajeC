#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2  // Es mas optimo utilizar define porque utiliza menos memoria
int bucarlibre(int[], int); //donde encuentra un [cero] me devuelve su pocision
void mostrarProductos(int[], char[][50], int[],int[],int );// voy a mostrar los datos guadados en los vectores, matriz y cantidad de elementos
void ordenar(int[], char[][50], int[],int[],int );
int main()
{
    int idProducto [T]={}; // esta inicializado en cero este vector para no mostrar basura
    char descripcion[T][50];//con esta matriz guardo varios nombres
    int stock[T];
    float precioUnitario[T];
    int opcion;
    int posicion;
    int i;
    int j;
    char auxstring[50];
    int auxentero;
    float auxfloat;


    do
    {
        printf("\nMenu de Opciones\n");
        printf("\n1. Cargar ");
        printf("\n2. Mostrar ");
        printf("\n3. Ordenar");
        printf("\n4. salir");
        printf("\nIngrese una opcion");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                /*
                1-pedir posicion
                2-pedir dato
                3-preguntar si quiere cargar otro
                */
                 printf("\nCARGO");

                     //printf("\nIngrese la posicion: ");
                     //scanf("%d",&posicion);
                     posicion = bucarlibre(idProducto, T);// busca un espacio disponible y guarda secuencialmente
                     if(posicion !=-1)
                     {

                         printf("\nIngrese ID: ");
                         scanf("%d", &idProducto[posicion]);
                         printf("\nIngrese descripcion: ");
                         fflush(stdin);
                         gets(descripcion[posicion]);
                         printf("\nIngrese stock: ");
                         scanf("%d", &stock[posicion]);
                         printf("\nIngrese precio unitario: ");
                         scanf("%f", &precioUnitario[posicion]);

                     }
                     else
                     {
                         printf("\nno hay espacio para cargar");
                     }

                break;
            case 2:
                printf("\nMUESTRO \n");
                /*for(i=0;i<T;i++)
                {

                    printf("\n %3d %3s %3d %3.2f \n ", idProducto[i], descripcion[i], stock[i], precioUnitario[i]);
                }*/
                mostrarProductos(idProducto,descripcion,stock,precioUnitario,T);
                break;
            case 3:
                printf("ORDENO\N");
                for(i=0;i<T-1;i++)//con este for se recorre el vector hasta el anteultimo elemento
                {
                    for(j=i+1;j<T;j++)
                    {
                        if(stricmp(descripcion[i],descripcion[j])>0)
                        {
                            strcpy(aux,descripcion[i]);
                            strcpy(descripcion[i],descripcion[j]);
                            strcpy(descripcion[j],auxstring);


                        }
                    }
                }
                break;
            case 4:
                break;
            default:
                printf("\nElegir una opcion valida entre 1,2,3.");
                break;

        }
        system("pause");
        system("cls");
    }while(opcion!=4);
    return 0;
}
int bucarlibre(int id[], int tamVec)
{
    int i;
    int index = -1;
    for(i=0;i<tamVec;i++)
    {
        if(id[i]==0)
        {
            index = i;
            break;
        }
    }

    return index;
}
void mostrarProductos(int id[], char descripcion[][50], int stock[],int precio[],int tamano )
{
    int i;
    for(i=0;i<tamano;i++)
    {

        printf("\n %3d %3s %3d %3.2f \n ", id[i], descripcion[i], stock[i], precio[i]);
    }
}
