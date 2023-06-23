/*Crear una función que reciba un número cualquiera y que devuelva como resultado la suma de sus dígitos.*/

#include <stdio.h>
#include <stdlib.h>

int sumarDigitos(int numero);
int main(){

    int numero, suma;
    printf("ingresar un numero para recibir la suma de sus digitos\n");
    scanf("%d",&numero);
    suma = sumarDigitos(numero);
    printf("el resultado es: %d",suma);

}
int sumarDigitos(int numero) {
    int suma = 0; 
    while (numero != 0) {
        int digito = numero % 10;
        suma = suma + digito;
        numero = numero / 10;
    } 
    return suma;
}