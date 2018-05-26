#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[50] = "trabajo practico";
    FILE* f;

    f= fopen("miHTML.html","w");

    fprintf(f,"<html><body><h1>%s</h1></body></html>",texto);
    fclose(f);
    return 0;
}
