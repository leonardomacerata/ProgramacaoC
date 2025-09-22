#include <stdio.h>

int main(){

    int i = 1, rainha = 1;

    printf("Movimentar a Torre 5 casas para a direita: \n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Torre se movimentou 1 casa para direita.\n");
    }
    
    printf("\n\n");
    
    printf("Movimentar o Bispo 5 casas na diagonal para cima e à direita: \n");
    while (i <= 5)
    {
        printf("Bispo se movimentou 1 casa para cima.\n");
        printf("Bispo se movimentou 1 casa para direita.\n");
        i++;
    }
    
    printf("\n\n");

    printf("Movimentar a Rainha 8 casas para esquerda: \n");
    do
    {
        printf("Rainha se movimentou 1 casa para esquerda.\n", rainha);
        rainha++;
    } while (rainha <= 8);
    
    printf("\n\n");
    
    return 0;
}