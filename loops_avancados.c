#include <stdio.h>

int main(){

    // É 1 único loop que pode conter múltiplas variáveis, condições múltiplas, atualizações complexas.

    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("i = %d, j = %d \n", i, j);
    }
    
    return 0;
}