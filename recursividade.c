#include <stdio.h>

// Recursividade é quando uma função chama a si mesma para resolver problemas de forma mais simples e eficiente.
// Recursividade é uma técnica que pode ser usada para substituir loops, dividir problemas complexos em partes menores e simplificar a lógica de muitos algoritmos.
// Procedimentos são blocos de código para realizar uma tarefa específica. MAIN e VOID são procedimentos.

void recursivo(int numero){ //PROCEDIMENTO
    if (numero > 0)
    {
        printf("%d \n", numero);

        recursivo(numero - 1); //RECURSIVIDADE
    }
}

int main(){ //PROCEDIMENTO

    int quantidade = 10;

    printf("Contagem regressiva \n");
    recursivo(quantidade);

    
    return 0;
}