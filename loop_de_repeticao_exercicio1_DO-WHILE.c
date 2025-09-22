#include <stdio.h>

int main(){

    //Exercício: digitar um número para para sair do loop

    int numero;

    do
    {
        printf("Digite um número par para sair do programa:\n");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("%d é par.\n");
        }
        else
        {
            printf("%d é ímpar.\n");
        }
        
        
    } while (numero %2 != 0);
        printf("Você digitou um número par, saindo do programa.\n");
    

    return 0;
}