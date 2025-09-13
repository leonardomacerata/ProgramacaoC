
#include <stdio.h>

int main(){
    /*
    Atribuição Simples (=)
    Atribuição com Soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */

    int numero1 = 10, numero2, resultado;
    
    resultado = 10;

    //resultado = resultado + 20
    resultado += 20;
    printf("Resultado Atribuição com Soma: %d \n", resultado);

    //resultado = resultado - numero1
    resultado -= numero1;
    printf("Resultado Atribuição com Subtração: %d \n", resultado);

    //resultado = resultado * 5
    resultado *= 5;
    printf("Resultado Atribuição com Multiplicação: %d \n", resultado);

    //resultado = resultado / 2
    resultado /= 2;
    printf("Resultado Atribuição com Divisão: %d \n", resultado);
    
}