#include <stdio.h>

int main(){
    int nota1, nota2, nota3, media;

    printf("Cálculo de Média \n");
    printf("Digite a Nota 1: \n");
    scanf("%d", &nota1);
    printf("Digite a Nota 2: \n");
    scanf("%d", &nota2);
    printf("Digite a Nota 3: \n");
    scanf("%d", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("Média: %d \n", media);

    
    




    return 0;
}