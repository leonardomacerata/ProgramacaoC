#include <stdio.h>

int main(){

    // Loops aninhadas podem ser compostos por FOR, WHILE ou DO-WHILE. O mais utilizado é FOR.
    // A variáveis começam em i e vão até n. Mas o recomendado é utilizar no máximo 3 variáveis (i, j e k)
    // Vamos imprimir a tabuada completa de 0 a 10

    for (int i = 1; i <= 10; i++) //loop externo. Só é executado após o loop interno completar o comando
    {
        for (int j = 1; j <=10; j++) //loop interno
        {
            printf("%d x %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }
    
    return 0;
}