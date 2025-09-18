#include <stdio.h>

int main(){
    
    int opcao;
    float saldo = 10.00;

    printf("Escolha a opção:\n");
    printf("1 - Saldo\n");
    printf("2 - Depósito\n");
    printf("3 - Saque\n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Saldo: R$%.2f \n", saldo);
        break;
    
    default:
        break;
    }

    return 0;
}