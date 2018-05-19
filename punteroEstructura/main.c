#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
int idTipo;
char descripcion[20];
}eTipo;

typedef struct{

int id;
char nombre[20];
int edad;
eTipo tipo;
int estado;

}eMascota;

void modificarEdad(eMascota* x, int edad);
void mostrarMascotas(eMascota*, int);
void mostrarMascota(eMascota*);
int cargarMascota(eMascota*);

int main()
{
    int cargaOk;
  eMascota unaMascota;
  eMascota nuevaMascota;
  eMascota grupo[5] = {{1111, "Bobby", 3, {1, "Ave"}, 1}, {2222, "Rocky", 2, {2, "Perro"}, 1}, {3333, "Igor", 1, {3, "Reptil"}, 1}};

   // grupo[3].estado = 0;

   (*(grupo + 3)).estado = 0;

   (grupo + 4)->estado = 0;

//(*grupo).edad = 4;

    mostrarMascotas(grupo, 5);

   cargaOk =  cargarMascota(NULL);

   if(cargaOk)
    *(grupo + 3) = nuevaMascota;
    else
    printf("Hubo un error en la carga\n");


     mostrarMascotas(grupo, 5);



    return 0;
}


void modificarEdad(eMascota* x, int edad){

//(*x).edad = edad;

x->edad = edad;

strcpy(x->tipo.descripcion, "Ave");

}

void mostrarMascotas(eMascota* vec, int tam){

if(vec != NULL){
    for(int i=0; i < tam; i++){

    if( (vec + i)->estado == 1){
        mostrarMascota(vec + i);
    }
}
}

}

void mostrarMascota(eMascota* unaMascota){

 printf("%d  %s  %d  %s\n", unaMascota->id, unaMascota->nombre, unaMascota->edad, unaMascota->tipo.descripcion);

}

int cargarMascota(eMascota* x){

int ok= 0;

if(x != NULL){
printf("Ingrese id: ");
scanf("%d", &x->id);

printf("Ingrese Nombre: ");
fflush(stdin);
gets( x->nombre);

printf("Ingrese edad: ");
scanf("%d", &x->edad);

x->estado = 1;

x->tipo.idTipo = 4;
strcpy(x->tipo.descripcion, "Gato");

ok = 1;
}

return ok;
}
