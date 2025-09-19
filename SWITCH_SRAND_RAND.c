#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao, numerosecreto, palpite;
 
    printf("Menu Principal\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Regras\n");
    printf("3 - Sair do Jogo\n");
    printf("Escolha uma Opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0)); //Iniciliza o contador (timer) do menor valor que é 0
        numerosecreto = rand() % 10; //O resultado será um número entre 0 a 9 (10 números possíveis). Para 9 números possíveis, de 0 a 8, o comando seria: rand() % 9
        // Para números de 1 a 9, por exemplo, o comando seria: rand() % 10 + 1
        printf("Digite um número de 0 a 9: \n");
        scanf("%d", &palpite);
        if (numerosecreto == palpite)
        {
            printf("Você acertou!\n");
        } else {
            printf("Você errou.\n");
        }
        
        printf("O número secreto é: %d \n", numerosecreto);
        break;

    case 2:
        printf("As regras são....\n");
        break;

    case 3:
        printf("Saindo do Jogo.\n");
        break;
    
    default:
        printf("Opção Inválida\n");
        break;
    }


    return 0;
}