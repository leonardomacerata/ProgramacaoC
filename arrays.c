#include <stdio.h>

// Arrays = conjunto de dados do mesmo tipo = vetores

// tipo da variável[quantidade/tamanho] = {valores}


int main() {
    int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores
 
    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento é %d\n", numeros[0]); //numeros[0] = 10. Que é o primero valor do array
    printf("O terceiro elemento é %d\n", numeros[2]); //numeros[2] = 30. Que é o terceiro valor do array
    printf("O quinto elemento é %d\n", numeros[4]); //numeros[4] = 50. Que é o quinto valor do array
 
    return 0;
}