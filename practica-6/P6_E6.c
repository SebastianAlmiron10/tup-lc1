/*Crear una función que reciba un caracter y un número, y escriba un “triángulo” formado por ese caracter,
que tenga como anchura inicial la que se ha indicado. Por ejemplo, si la caracter es * y la anchura es 4, debería escribir*/

#include <stdio.h>
#include <stdlib.h>
void piramideInvertida(int anchura, char caracter);
int main() {
    int anchura;
    char caracter;

    printf("Ingrese la anchura de la piramide invertida: ");
    scanf("%d", &anchura);
    printf("Ingrese el caracter de la piramide invertida: ");
    scanf(" %c", &caracter);

    piramideInvertida(anchura, caracter);

    return 0;
}
void piramideInvertida(int anchura, char caracter) {
    int i, j;

    for (i = anchura; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            printf("%c",caracter);
        }

        printf("\n");
    }
}
