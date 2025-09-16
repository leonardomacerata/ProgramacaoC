#include <stdio.h>

int main(){

    int numeronormal = 2147483647; // MAIOR valor de int = 2.147.483.647. MENOR valor de int = -2.147.483.648. Tamanho = 32 bits (4 bytes)
    long int numerogrande = 9223372036854775807; // MAIOR valor de long int = 9.223.372.036.854.775.807. MENOR valor de long int = -9.223.372.036.854.775.808. Tamanho = 64 bits (8 bytes). Em alguns sistemas, long int tem 32 bits (4 bytes) igual a int.
    long long int numeromuitogrande = 9223372036854775807; // Igual ao long int, porém é 64 bits para qualquer sistema. Long pode ser 32 ou 64 bits dependendo do sistema.

    printf("Número normal (int): %d \n", numeronormal);
    printf("Número grande (long int): %ld \n", numerogrande);
    printf("Número muito grande (long long int): %lld \n", numeromuitogrande);


    return 0;
}