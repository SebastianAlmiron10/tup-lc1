#include <stdio.h>
#include <stdlib.h>

void main(){

    FILE *fp;

    char texto1[100] = "Texto dentro del fichero";
    char texto2[100] = "Otro texto dentro del fichero";

    fp = fopen("ejemplo_2.txt", "w+");

    fprintf(fp, texto1);
    fprintf(fp, "%s", "\n");

    fclose(fp);

    system("pause");

}