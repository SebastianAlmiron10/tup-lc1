/*Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un número primo o 0 en caso contrario.*/

#include <stdlib.h>
#include <stdio.h>

int esPrimo(int numero);
int main(){
    int numero, valor;
    printf("ingresar un numero: ");
    scanf("%i",&numero);

    valor = esPrimo(numero);
    printf("%i",valor);

    return 0;
}
int esPrimo(int numero){
     int i;
    if (numero <= 1) {
        return 0;
    }
    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    } 
    return 1;
}