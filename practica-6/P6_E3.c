/*Crear una función que devuelva la primera letra de una cadena de texto.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char primerLetra(char *palabra);

int main(){
    char palabra[100], letra;
    printf("ingresar una palabra: ");
    scanf("%s",&palabra);
    letra = primerLetra(palabra);
    printf("la primera letra de esta palabra es: %c", letra);
    return 0;
}

char primerLetra(char *palabra){
    char letra = palabra[0];
    return letra;
}
