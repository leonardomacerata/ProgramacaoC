#include <stdio.h>

int main(){

    int = idade = 18, renda = 1000, dependentes = 2;

    //condição 1: idade entre 18 e 65 anos
    //condição 2: renda menor que 3000
    //condição 3: número de dependentes maior que 2

    if (idade >= 18 && idade <= 65) {
        //condição verdadeira
        if (renda < 3000){
            //condição verdadeira        
        } else {
            printf("Não entende ao critério de renda.\n");
        }
        if (dependentes > 2){
            //condição verdadeira
        } else {
            printf("Não atende ao critério de dependentes.\n")
        }
    } else {
        print("Não atende ao critário de idade.\n");
    }

    return 0;
}