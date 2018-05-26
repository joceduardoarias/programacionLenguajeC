#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int a;
    char b[50];
}eDato;
int set_a(eDato*, int);
int set_a_char(eDato*, char*);
int main()
{
    eDato dato;
    eDato* d;
    d= &dato;
    set_a(d,1800);
    set_a_char(d,"hola");
    printf("%d--%s", d->a,d->b);
    return 0;
}
int set_a(eDato* dato, int valor)
{
    int retorno = 0;
    if(dato!=NULL &&  valor>1500)
    {
        dato->a = valor;
        retorno =1;
    }
    return retorno;
}
int set_a_char(eDato* dato, char* cadena)
{
    int retorno = 0;
    if(dato!=NULL)
    {
        strcpy(dato->b,cadena);
        retorno =1;
    }
    return retorno;
}
