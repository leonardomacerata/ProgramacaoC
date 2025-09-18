#include <stdio.h>

int numero = 4, resultado;

int main (){

    resultado = numero % 2; // % é um operador de divisão que verifica se resultado da operação. Retona 0 ou 1. 0 se a o resultado da divisão for inteiro. 1 de o resultado for decimal (tiver resto)
    
    printf("O resultado é: %d \n", resultado);

    if (resultado == 0){
        printf("O número é par");
    }

    return 0;

}