#include <stdio.h>

int main(){

    // long, short e unsigned

    int numeronormal = 2147483647; // MAIOR valor de int = 2.147.483.647. MENOR valor de int = -2.147.483.648. Tamanho = 32 bits (4 bytes)
    long int numerogrande = 9223372036854775807; // MAIOR valor de long int = 9.223.372.036.854.775.807. MENOR valor de long int = -9.223.372.036.854.775.808. Tamanho = 64 bits (8 bytes). Em alguns sistemas, long int tem 32 bits (4 bytes) igual a int.
    long long int numeromuitogrande = 9223372036854775807; // Igual ao long int, porém é 64 bits para qualquer sistema. Long pode ser 32 ou 64 bits dependendo do sistema.
    float numeromenospreciso = 9.223372036854775807; // Números decimais com menor precisão do que double. Máximo 9 dígitos significativos. Tamanho = 32 bits.
    // NÃO EXISTE LONG FLOAT
    double numeromaispreciso = 9.223372036854775807; // Números decimais com maior precisão do que float. Máximo 17 dígitos significativos. Tamanho = 64 bits.
    long double numerograndemaispreciso = 9.223372036854775807; // Números decimais com maior precisão do que double. Máximo 19 dígitos significativos. Tamanho = 128 bits.
    short int numerocurto = 32767; // MAIOR valor de short int = -32.767. MENOR valor de short int = -32.768. Tamanho = 16 bits (2 bytes).
    unsigned int numeronormalpositivo = 2147483647; // unsigned aceita apenas números positivos. MAIOR valor de unsigned int = 4.294.967.295. MENOR valor de unsigned int = 0.

    printf("Número normal (int): %d \n", numeronormal);
    printf("Número grande (long int): %ld \n", numerogrande);
    printf("Número muito grande (long long int): %lld \n", numeromuitogrande);
    printf("Número decimal menos preciso (float): %f \n", numeromenospreciso);
    printf("Número decimal mais preciso (double): %.21f \n", numeromaispreciso);
    printf("Número decimal grande mais preciso (long double): %.21lf \n", numerograndemaispreciso);
    printf("Número normal short (short int): %d \n", numerocurto);
    printf("Número normal positivo (int): %d \n", numeronormalpositivo);

    return 0;

}