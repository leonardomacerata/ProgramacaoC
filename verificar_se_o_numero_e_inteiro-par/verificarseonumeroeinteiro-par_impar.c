#include <stdio.h>

int numero = 4, resultado;

int main (){

    resultado = numero % 2; // % é um operador de divisão que verifica o resultado da operação, retonando 0 ou 1. 0 se o resultado for inteiro. 1 se o resultado for decimal (tiver resto)
    
    printf("O resultado é: %d \n", resultado);

    if (resultado == 0){
        printf("O número é par \n");

    } else {
        printf("O número é ímpar \n");
    }

    return 0;

}