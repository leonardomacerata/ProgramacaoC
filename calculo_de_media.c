#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    printf("Cálculo de Média \n");
    printf("Digite a Nota 1: \n");
    scanf("%f", &nota1);
    printf("Digite a Nota 2: \n");
    scanf("%f", &nota2);
    printf("Digite a Nota 3: \n");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("Média: %.1f \n", media);
    return 0;
}