#include <stdio.h>

int main(){

    int a = -1, b = 9;

    if (a > 0 && b > 10){ // AND: se a E b são maiores que x, então verdadeiro, se não falso
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

     if (a > 0 || b > 10){ // OR: se a OU b são maiores que x, então verdadeiro, se não falso
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

     if (!(a > 0)){ // NOT: inverte o resultado, ou seja, se a condição for verdadeiro, então o resultado será falso
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}