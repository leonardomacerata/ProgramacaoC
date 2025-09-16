#include <stdio.h>

int main(){

    int numeronormal = 2147483647; // valor positivo máximo de int. Int tem valor negativo máximo de -2147483648. Tamanho máximo de int 4 bytes.
    long int numerogrande = 2147483648; // duplica o valor máximo de int de 4 para 8 bytes.
    long long int numeromuitogrande = 2147483648; // duplica o valor máximo de int de 4 para 8 bytes, igual ao long.

    printf("Número normal (int): %d", numeronormal);
    printf("Número grande (long int): %ld", numerogrande);
    printf("Número normal (long long int): %lld", numeromuitogrande);


    return 0;
}