#include <stdio.h>
#include <stdlib.h>
typedef struct ePersona
{
    int id;
    char nombre[50];
    int status;
} ePersona;
int main()
{
    int i;
    ePersona listaPersona[3] = {{1,"Juan",0},{2,"Jose",1},{3,"Pedro",1}};
    ePersona lectura[3];
    FILE* f;
    // ECRITURA BINARIOS
    f = fopen("miArchivo.dat","wb");
    for(i=0; i<3; i++)
    {
        if(listaPersona[i].status == 1)
        {
            fwrite(&listaPersona[i],sizeof(ePersona),1,f);
        }
    }


    fclose(f);

    //LECTURA BINARIOS
    f= fopen("miArchivo.dat","rb");
    fread(lectura,sizeof(ePersona),3,f);
    fclose(f);
    for(i=0; i<3; i++)
    {
        printf("%d--%s\n",lectura[i].id,lectura[i].nombre);
    }


    return 0;
}
