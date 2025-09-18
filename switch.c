#include <stdio.h>

int main(){
    
    int opcao;
    float saldo = 10.00, deposito, saque;

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

    case 2:
        printf("Digite o valor do depósito:\n");
        scanf("%f", &deposito);
        printf("Valor depositado: R$%.2f \n", deposito);
        break;

    case 3:
        printf("Digite o valor do saque:\n");
        scanf("%f", &saque);
        printf("Valor sacado: R$%.2f \n", saque);
        break;
    
    default:
        break;
    }

    return 0;
}