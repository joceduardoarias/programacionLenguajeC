#include <stdio.h>
#include <stdlib.h>
int escribirTexto(char*);
int leerATexto(char*);
int main()
{
    int r;
    char texto[50];
    /*r= escribirTexto("hola todos");
    if(r)
    {
        printf("Guardo con exito");
    }
    else
    {
        printf("imposible guardar");
    }*/
    r = leerATexto(texto);
    if(r)
    {
        printf(texto);
    }
    else
    {

    }


    return 0;
}
int escribirTexto(char* texto)
{
    FILE* pA; // ESTE PUNTERO APUNTA AL ARCHIVO
    int retorno=0;
    fopen("archivoTXT.txt","w");// DEVUELVE EL PUNTERO A ESE ARCHIVO O SI NO ENCUETRA EL ARCHIVO DEVUELVE NULL
    if(pA !=NULL)
    {
        fprintf(pA,"%s",texto);
        fclose(pA);//CIERRO EL ARCHIVO
        retorno = 1;
    }
    return retorno;
}
int leerATexto(char* texto)
{
    FILE* pA;

    int retorno =0;
    fopen("archivoTXT.txt","r");
    if(pA!=NULL)
    {
        fgets(texto,50,pA);
        fclose(pA);
        retorno =1;
    }
    return retorno;
}
