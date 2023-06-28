#include <stdio.h>
#include <stdlib.h>

void main(){

    FILE *fp;

    char texto[100];

    fp = fopen("ejemplo_1.txt", "r");

    fscanf(fp, "%s", texto);

    printf("La primera palabra del archivo es : \n");

    printf("%s \n", texto);

    fclose (fp);

    system("pause");
}