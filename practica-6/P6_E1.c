/*Crear una función que calcule el cubo de un número real (float). El resultado deberá ser otro número real.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcularCubo(float numero);

int main(){
    float numero, resultado;
    printf("ingresar un numero\n");
    scanf("%f",&numero);
    resultado = calcularCubo(numero);
    printf("el cuadrado de ese numero es %.2f",resultado);
    return 0;
}

float calcularCubo(float numero){
    float resultado = pow(numero, 3);
    return resultado;
}