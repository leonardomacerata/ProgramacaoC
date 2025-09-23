#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0)
    {
        printf("Torre se movimentou 1 casa para direita. \n");
        recursivo(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0)
    {
        printf("Bispo se movimentou 1 casa para cima.\n");
        printf("Bispo se movimentou 1 casa para direita. \n");
        recursivo(casas - 1);
    }
}

int main(){

   printf("Movimentar a Torre 5 casas para a direita: \n");
   moverTorre(5);

   printf("\n\n");

   printf("Movimentar o Bispo 5 casas na diagonal para cima e à direita: \n");
    
    return 0;
}