#include <stdio.h>

int main(){

    int idade = 59;

    // Criança = menor que 12
    //Adulto = maior que 12 e menor que 60
    //Idoso = maior que 60

    if (idade < 12){
        printf ("Criança.\n");
    } else if (idade >= 12 && idade < 60) {
        printf("Adulto. \n");
    } else {
        printf("Idoso.\n");
    }

    return 0;
}