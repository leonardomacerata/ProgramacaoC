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
    printf("Após o pós-incremento - Número 1: %d - Resultado: %d \n", numero1, resultado);






}