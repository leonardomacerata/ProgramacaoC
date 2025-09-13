#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes do incremento: %d \n", numero1);

    numero1++; //numero1 +1
    printf("Após o incremento: %d \n", numero1);

    numero1--; //numero1 -1
    printf("Após o decremento: %d \n", numero1);

    resultado = numero1++;
    printf("Após o pós-incremento - Número 1: %d - Resultado: %d \n", numero1, resultado); //Pós incremento é a quantidade que foi adicionada ao resultado, neste caso 1

    resultado = ++numero1;
    printf("Após o pré-incremento - Número 1: %d - Resultado: %d \n", numero1, resultado); //Pré incremento é o valor antes do incremento, neste caso 3

    resultado = numero1--;
    printf("Após o pós-decremento - Número 1: %d - Resultado: %d \n", numero1, resultado); //Pós decremento é a quantidade que foi subtraída do resultado, neste caso 2

    resultado = --numero1;
    printf("Após o pré-decremento - Número 1: %d - Resultado: %d \n", numero1, resultado); //Pré decremento é o valor antes do decremento, neste caso 1




}