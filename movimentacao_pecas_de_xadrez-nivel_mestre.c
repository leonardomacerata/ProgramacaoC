#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0)
    {
        printf("%d \n", numero);
        recursivo(numero - 1);
    }
}

int main(){

    int quantidade = 10;

    printf("Contagem regressiva \n");
    recursivo(quantidade);

    
    return 0;
}