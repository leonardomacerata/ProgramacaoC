#include <stdio.h>

int main(){

    // Vamos imprimir um padrão triangular de letras de A a E, nos eixos x e y

    int i, j;
    char letra;

    for (i = 1; i <= 5; i++)
    {
        letra = 'A';
        for (j = 1; j <= i; j++) // j <= i (1 <= 1, então j é 2), logo j > i (2 > 1). Para de executar o loop interno, e executa o loop externo
        {
            printf("%c", letra);
            ++letra;
        }
        printf("\n");
    }
    
    
    return 0;
}