#include <stdio.h> //Habilita a biblioteca no programa

int main(){ //Inicia o programa
    int pontosturisticos1, pontosturisticos2; //Declaração das váriáveis do tipo int
    unsigned int populacao1, populacao2; //Declaração das variáveis do tipo unsigned int
    float area1, pib1, densidadepopulacional1, pibpercapita1, superpoder1, area2, pib2, densidadepopulacional2, pibpercapita2, superpoder2; //Declaração das váriáveis do tipo float
    char estado1[50], codigodacarta1[3], nomedacidade1[50], estado2[50], codigodacarta2[3], nomedacidade2[50]; //Declaração das váriáveis do tipo char

    printf("***** Bem-vindo ao jogo Super Trunfo ***** \n");
    printf("\n"); //Espaço de 1 linha
    printf("Instruções e Regras: \n");
    printf("1- Digite todos os dados para as duas cartas. \n");
    printf("2- Veja o resultado em Comparações das Cartas. \n");
    printf("2.1- A carta com o maior valor vence, com exceção do dado Densidade Populacional, onde o menor valor vence. \n");
    printf("\n"); //Espaço de 1 linha

    //O usuário digita os dados para a carta 1
    printf("Carta 1: \n"); //Imprime o texto e deixa o espaço de 1 linha
    printf("Digite o Estado: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &estado1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Código da Carta: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &codigodacarta1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Nome da Cidade: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &nomedacidade1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite a População: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%u", &populacao1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite a Área (em km2): \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%f", &area1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o PIB: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%f", &pib1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Número de Pontos Turísticos: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%d", &pontosturisticos1); //Coleta e armazena na variável o que foi digitado pelo usuário
   
    //Imprime os dados da carta 1
    printf("\n"); //Espaço de 1 linha
    printf("Carta 1: \n"); //Imprime o texto e deixa o espaço de 1 linha
    printf("Estado: %s \n", estado1); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Código da Carta: %s \n", codigodacarta1); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Nome da Cidade: %s \n", nomedacidade1); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("População: %u \n", populacao1); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Área: %.2f km2 \n", area1); //Limita a variável a duas casa decimais. Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("PIB: R$%.2f \n", pib1 ); //Limita a variável a duas casa decimais. Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1 ); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    densidadepopulacional1 = (float) populacao1 / area1; //Calcula o resultado para a variável 'densidadepopulacional'. Converte a variável 'populacao' de int para float, e deixa o espaço para 1 linha
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadepopulacional1); //Imprime o resultado da variável densidadepopulacional, limitando a 2 casas decimais, e deixa o espaço de 1 linha
    pibpercapita1 = pib1 / (float) populacao1; //Calcula o resultado para a variável 'pibpercapita'. Converte a variável 'populacao' de int para float, e deixa o espaço para 1 linha
    printf("PIB per Capita: R$%.2f \n", pibpercapita1); //Imprime o resultado da variável densidadepopulacional, limitando a 2 casas decimais, e deixa o espaço de 1 linha
    superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibpercapita1 + (1/densidadepopulacional1); //Modifica as variáveis int e unsigned int para float. Calcula o inverso da densidade populacional. Soma todos os valores. Deixa 1 linha de espaço.
    printf("Super Poder: %f \n", superpoder1); //Imprime o resultado da variável superpoder e deixa uma linha de espaço.
    printf("\n"); // Espaço após imprimir os dados

    //O usuário digita os dados para a carta 2
    printf("Carta 2: \n"); //Imprime o texto e deixa o espaço de 1 linha
    printf("Digite o Estado: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &estado2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Código da Carta: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &codigodacarta2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Nome da Cidade: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &nomedacidade2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite a População: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%u", &populacao2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite a Área (em km2): \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%f", &area2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o PIB: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%f", &pib2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Número de Pontos Turísticos: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%d", &pontosturisticos2); //Coleta e armazena na variável o que foi digitado pelo usuário

    //Imprime os dados da carta 2
    printf("\n"); //Espaço de 1 linha
    printf("Carta 2: \n"); //Imprime o texto e deixa o espaço de 1 linha
    printf("Estado: %s \n", estado2); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Código da Carta: %s \n", codigodacarta2); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Nome da Cidade: %s \n", nomedacidade2); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("População: %u \n", populacao2); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Área: %.2f km2 \n", area2); //Limita a variável a duas casa decimais. Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("PIB: R$%.2f \n", pib2 ); //Limita a variável a duas casa decimais. Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2 ); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    densidadepopulacional2 = (float) populacao2 / area2; //Calcula o resultado para a variável 'densidadepopulacional'. Converte a variável 'populacao' de int para float, e deixa o espaço para 1 linha
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadepopulacional2); //Imprime o resultado da variável densidadepopulacional, limitando a 2 casas decimais, e deixa o espaço de 1 linha
    pibpercapita2 = pib2 / (float) populacao2; //Calcula o resultado para a variável 'pibpercapita'. Converte a variável 'populacao' de int para float, e deixa o espaço para 1 linha
    printf("PIB per Capita: R$%.2f \n", pibpercapita2); //Imprime o resultado da variável densidadepopulacional, limitando a 2 casas decimais, e deixa o espaço de 1 linha
    superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibpercapita2 + (1/densidadepopulacional2); //Modifica as variáveis int e unsigned int para float. Calcula o inverso da densidade populacional. Soma todos os valores. Deixa 1 linha de espaço.
    printf("Super Poder: %f \n", superpoder2); //Imprime o resultado da variável superpoder e deixa uma linha de espaço.

    //Comparação das cartas
    printf("\n"); //Espaço de 1 linha
    printf("*** Comparação das Cartas *** \n");
    if (populacao1 > populacao2){ //Compara se o dado da carta 1 é maior do que o dado da carta 2.
        printf("População: Carta 1 venceu. \n"); //Se sim, então Imprime o texo.
    } else {
        printf("População: Carta 2 venceu. \n"); //Se não, então Imprime o texo.
    }

    if (area1 > area2){ //Compara se o dado da carta 1 é maior do que o dado da carta 2.
        printf("Área: Carta 1 venceu. \n"); //Se sim, então Imprime o texo.
    } else {
        printf("Área: Carta 2 venceu. \n"); //Se não, então Imprime o texo.
    }
    
    if (pib1 > pib2){ //Compara se o dado da carta 1 é maior do que o dado da carta 2.
        printf("PIB: Carta 1 venceu. \n"); //Se sim, então Imprime o texo.
    } else {
        printf("PIB: Carta 2 venceu. \n"); //Se não, então Imprime o texo.
    }

    if (pontosturisticos1 > pontosturisticos2){ //Compara se o dado da carta 1 é maior do que o dado da carta 2.
        printf("Pontos Turísticos: Carta 1 venceu. \n"); //Se sim, então Imprime o texo.
    } else {
        printf("Pontos Turísticos: Carta 2 venceu. \n"); //Se não, então Imprime o texo.
    }

    if (densidadepopulacional1 < densidadepopulacional2){ //Compara se o dado da carta 1 é maior do que o dado da carta 2.
        printf("Densidade Populacional: Carta 1 venceu. \n"); //Se sim, então Imprime o texo.
    } else {
        printf("Densidade Populacional: Carta 2 venceu. \n"); //Se não, então Imprime o texo.
    }

    if (pibpercapita1 > pibpercapita2){ //Compara se o dado da carta 1 é maior do que o dado da carta 2.
        printf("PIB per Capita: Carta 1 venceu. \n"); //Se sim, então Imprime o texo.
    } else {
        printf("PIB per Capita: Carta 2 venceu. \n"); //Se não, então Imprime o texo.
    }

     if (superpoder1 > superpoder2){ //Compara se o dado da carta 1 é maior do que o dado da carta 2.
        printf("Super Poder: Carta 1 venceu. \n"); //Se sim, então Imprime o texo.
    } else {
        printf("Super Poder: Carta 2 venceu. \n"); //Se não, então Imprime o texo.
    }

    return 0; //Finaliza o programa
}

