#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[30];
    float peso;
    int temperatura;
    int contadorTemperaturaPar = 0;
    int respuesta = 1;
    int flagPesoMayor = 1;
    int maximoPeso;
    int temperaturaMayorPeso;
    char *nombrePesoMayor = nombre;
    int cantidadTemperaturabaja;
    int acumuladorPeso = 0;
    int flagPesoMenor = 1;
    int MinimoPeso;
    float promedio;
    int contador = 0;

    while( respuesta != 0)
    {
        printf("Ingrese nombre del animal: ");
        fflush( stdin );
        scanf(" %s", nombre);

        printf("Ingrese peso del animal: ");
        scanf("%f", &peso);

        while(peso < 1 || peso > 1000)
        {
            printf("Peso del animal debe estar entre 1 kg y 1000 kg: ");
            scanf("%f", &peso);
        }

        printf("Ingrese la temperatura del Habitat animal: ");
        scanf("%d", &temperatura);

        while( temperatura < -30 || temperatura > 30)
        {
            printf("La temperatura del Habitat animal de estar entre -30 grados y 30 grados: ");
            scanf("%d", &temperatura);
        }

        if(temperatura%2 == 0)
        {
            contadorTemperaturaPar++;
        }

        if(flagPesoMayor)
        {
            maximoPeso = peso;
            flagPesoMayor = 0;
        }
        else
        {
            if(peso > maximoPeso)
            {
                maximoPeso = peso;
                nombrePesoMayor = nombre;
                temperaturaMayorPeso = temperatura;
            }
        }

        if( temperatura < 0)
        {
            cantidadTemperaturabaja++;
        }

        acumuladorPeso = acumuladorPeso + peso;

        if(flagPesoMenor && temperatura < 0)
        {
            maximoPeso = peso;
            flagPesoMenor = 0;
        }
        else
        {
            if( peso < MinimoPeso )
            {
                MinimoPeso = peso;
            }

            if(peso > maximoPeso)
            {
                maximoPeso = peso;
            }
        }

        contador++;
        // Salida
        printf("Si desea continuar presione 1, de lo contrario presione 0 para salir. ");
        scanf("%d", &respuesta);
    }

    promedio = (float) acumuladorPeso / contador;
    printf("\n a. La cantidad de temperaturas pares: %d", contadorTemperaturaPar);
    printf("\n b. El nombre y temperatura del animal más pesado: \n Nombre: %s  Temperatura: %d", nombrePesoMayor, temperaturaMayorPeso);
    printf("\n c. La cantidad de animales que viven a menos de 0 grados: %d", cantidadTemperaturabaja);
    printf("\n d. El promedio del peso de todos los animales: %.1f", promedio);
    printf("\n e. El peso máximo y el mínimo de todos los animales cuyas temperaturas sean bajo cero: \n Peso maximo: %d Peso minimo: %d",maximoPeso, MinimoPeso);
    return 0;
}
