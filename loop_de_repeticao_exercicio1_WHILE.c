#include <stdio.h>

int main(){

    //Exercício: imprimir apenas os número pares de 0 a 10

    int i = 0;

    while (i <= 10)
    {
        if (i % 2 == 0) //Todo número inteiro que divido por 2 tiver como resultado 0, é par. Se não, é ímpar. Comando para ímpar (i % 2 != 0).
        {
            printf("O número %d é par.\n", i);
        }

        i++;    
    }
    
    

    return 0;
}