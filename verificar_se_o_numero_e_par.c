#include <stdio.h>

int numero = 4, resultado;

resultado = numero % 2; // % é um operador de divisão que verifica se resultado da operação. Retona 0 ou 1. 0 se a o resultado da divisão for inteiro. 1 de o resultado for decimal (tiver resto)

int main (){

    printf("O número é par: %d \n", resultado); // se o resultado for 0, então o número é par

    return 0;

}