#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    int edad;
    char sexo[2];
    int contador;
    int acumuladorNotas = 0;
    float promedioNotas;
    int flag = 1;
    int maximo;
    int minimo;
    int edadMinima;
    int flagEdadMinima = 1;
    int contadorVarones = 0;
    char sexoJoven [2];
    int sexoNotaBaja;
    int notaBaja;

    for(contador = 0; contador < 5 ; contador++)
    {
        printf("ingrese la nota");
        scanf("%d", &nota);

        while(nota < 0 || nota >10)
        {
            printf("ingrese la nota");
            scanf("%d", &nota);
        }

        printf("ingrese edada de alumno");
        scanf("%d",&edad);

        while(edad < 1)
        {
            printf("ingrese edada de alumno");
            scanf("%d",&edad);
        }

        printf("Ingrese el sexo");
        scanf("%c",sexo);

        while(sexo != 'f' && sexo != 'm')
        {
            printf("Ingrese el sexo");
            scanf("%c",sexo);
        }

        if(flag)
        {
            flag = 0;
            maximo = nota;
            minimo = nota;
        }
        else
        {
            if(nota > maximo)
            {
                maximo = nota;
            }
            if(nota < minimo)
            {
                minimo = nota;
                sexoNotaBaja = sexo;
            }
        }

        if( sexo == 'm' && edad > 18 && nota >= 6)
        {
            contadorVarones = contadorVarones + 1;
        }

        if(flagEdadMinima)
        {
            flagEdadMinima = 0;
            edadMinima = edad;
        }
        else
        {
            if( edad < edadMinima )
            {
                edadMinima = edad;
                sexoJoven = sexo;
                notaBaja = nota;
            }
        }

        acumuladorNotas = acumuladorNotas + nota;

    }
    promedioNotas = (float)acumuladorNotas / contador;

    printf("\n a. Promedio notas totales: %f", promedioNotas );
    printf("\n b. Nota minima: %d y sexo: %c ", minimo, sexoNotaBaja);
    printf("\n c. La cantidad de varones mayores a 18, que su nota haya sido mayor o igual a 6.",  contadorVarones);
    printf("El sexo es: %c y la nota: %d del más joven",sexoJoven, notaBaja);
    return 0;
}
