#include <stdio.h>

int main(){

    int i = 1, j = 1, k = 1, l;

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
        printf("Rainha se movimentou 1 casa para esquerda.\n", j);
        j++;
    } while (j <= 8);

    printf("\n\n");

    printf("Movimentar o Cavalo para cima à direita: \n");
    while (k--)
    {
        for (l = 0; l < 2; l++)
        {
            printf("Cavalo se movimentou 1 casa para cima. \n");
        }
        printf("Cavalo se movimentou 1 casa para direita. \n");
    }
   
    printf("\n\n");
    
    return 0;
}