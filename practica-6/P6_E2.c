/*Crear una función llamada “signo”, que reciba un número real, y devuelva un número
entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.
*/

#include <stdio.h>
#include <stdlib.h>

float signo(float numero);

int main(){
    float numero, valor;
    printf("ingresar un numero\n");
    scanf("%f",&numero);
    valor = signo(numero);
    printf("%.0f",valor);
}
float signo(float numero){
    if (numero > 0)
    {
        return 1;
    }else if (numero < 0)
    {
        return -1;
    }else{
        return 0;
    }
    
}