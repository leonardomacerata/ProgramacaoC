#include <stdio.h>

int main(){

    int idade = 17;

    //Criança = menor que 12
    //Adolescente = maior que 12 e menor que 18
    //Adulto = maior que 18 e menor que 60
    //Idoso = maior que 60

    if (idade < 12){
        printf ("Criança.\n");
    } else if (idade >= 12 && idade <18) {
        printf("Adolescente.\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Adulto. \n");
    } else {
        printf("Idoso.\n");
    }

    return 0;
}