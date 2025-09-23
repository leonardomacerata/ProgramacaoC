#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0)
    {
        printf("Torre se movimentou 1 casa para direita. \n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0)
    {
        printf("Bispo se movimentou 1 casa para cima.\n");
        printf("Bispo se movimentou 1 casa para direita. \n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Rainha se movimentou 1 casa para esquerda.\n");
        moverRainha(casas - 1);
    }

}

int main(){

    int k = 1;

    printf("Movimentar a Torre 5 casas para a direita: \n");
    moverTorre(5);

    printf("\n\n");

    printf("Movimentar o Bispo 5 casas na diagonal para cima e à direita: \n");
    moverBispo(5);
    
    printf("\n\n");

    printf("Movimentar a Rainha 8 casas para esquerda: \n");
    moverRainha(8);

    printf("\n\n");

    printf("Movimentar o Cavalo para cima à direita: \n");
    while (k--)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("Cavalo se movimentou 1 casa para cima. \n");
        }
        printf("Cavalo se movimentou 1 casa para direita. \n");
    }
   
    printf("\n\n");

    return 0;
}