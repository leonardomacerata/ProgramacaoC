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
        srand(time(0)); //Iniciliza o contador (timer)
        numerosecreto = rand() % 10; //Divide a parte decimal (resto) do contador (timer) por 10. O resultado é um dígito de 0 a 9
        break;

    case 2:
        /* code */
        break;

    case 3:
        /* code */
        break;
    
    default:
        printf("Opção Inválida\n");
        break;
    }


    return 0;
}