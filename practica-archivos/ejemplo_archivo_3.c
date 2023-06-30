#include <stdio.h>
#include <stdlib.h>

void main(){

    FILE *archivo;

    char texto[100];

    archivo = fopen("ejemplo_1.txt", "r");

    if (archivo != NULL)
    {
        printf("el contenido del archivo es : \n");
        while (feof(archivo) == 0)
        {
           fgets(texto, 100, archivo);
           printf("%s \n", texto);
        }

        fclose (archivo);

        system("pause");
    }else{
        printf("archivo no encontrado");
    }
}