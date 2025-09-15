#include <stdio.h> //Habilita a biblioteca no programa

int main(){ //Inicia o programa
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2; //Declaração das váriáveis do tipo int
    float area1, pib1, area2, pib2, densidadepopulacional1, pibpercapita1, densidadepopulacional2, pibpercapita2; //Declaração das váriáveis do tipo float
    char estado1[50], codigodacarta1[5], nomedacidade1[50], estado2[50], codigodacarta2[5], nomedacidade2[50]; //Declaração das váriáveis do tipo char

    // O usuário digita os dados para a carta 1
    printf("Carta 1: \n"); //Imprime o texto e deixa o espaço de 1 linha
    printf("Digite o Estado: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &estado1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Código da Carta: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &codigodacarta1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Nome da Cidade: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &nomedacidade1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite a População: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%d", &populacao1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite a Área (em km2): \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%f", &area1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o PIB: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%f", &pib1); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Número de Pontos Turísticos: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%d", &pontosturisticos1); //Coleta e armazena na variável o que foi digitado pelo usuário
   
    // Imprime os dados da carta 1
    printf("\n"); // Deixa o espaço de 1 linha antes de imprimir os dados
    printf("Carta 1: \n"); //Imprime o texto e deixa o espaço de 1 linha
    printf("Estado: %s \n", estado1); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Código da Carta: %s \n", codigodacarta1); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Nome da Cidade: %s \n", nomedacidade1); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("População: %d \n", populacao1); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Área: %.2f km2\n", area1); //Limita a variável a duas casa decimais. Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("PIB: %.2f \n", pib1 ); //Limita a variável a duas casa decimais. Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1 ); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    densidadepopulacional1 = (float) populacao1 / area1; //calcula o resultado para a variável 'densidadepopulacional'. Converte a variável 'populacao' de int para float, e deixa o espaço para 1 linha
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadepopulacional1); //Imprime o resultado da variável densidadepopulacional, limitando a 2 casas decimais, e deixa o espaço de 1 linha
    pibpercapita1 = pib1 / (float) populacao1; //calcula o resultado para a variável 'pibpercapita'. Converte a variável 'populacao' de int para float, e deixa o espaço para 1 linha
    printf("PIB per Capita: %.2f reais \n", pibpercapita1); //Imprime o resultado da variável densidadepopulacional, limitando a 2 casas decimais, e deixa o espaço de 1 linha
    printf("\n"); // Espaço após imprimir os dados

    // O usuário digita os dados para a carta 2
    printf("Carta 2: \n"); //Imprime o texto e deixa o espaço de 1 linha
    printf("Digite o Estado: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &estado2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Código da Carta: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &codigodacarta2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Nome da Cidade: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%s", &nomedacidade2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite a População: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%d", &populacao2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite a Área (em km2): \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%f", &area2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o PIB: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%f", &pib2); //Coleta e armazena na variável o que foi digitado pelo usuário
    printf("Digite o Número de Pontos Turísticos: \n"); //Imprime o texto e deixa o espaço de 1 linha
    scanf("%d", &pontosturisticos2); //Coleta e armazena na variável o que foi digitado pelo usuário

    // Imprime os dados da carta 2
    printf("\n"); // Deixa o espaço de 1 linha antes de imprimir os dados
    printf("Carta 2: \n"); //Imprime o texto e deixa o espaço de 1 linha
    printf("Estado: %s \n", estado2); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Código da Carta: %s \n", codigodacarta2); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Nome da Cidade: %s \n", nomedacidade2); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("População: %d \n", populacao2); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Área: %.2f km2\n", area2); //Limita a variável a duas casa decimais. Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("PIB: %.2f \n", pib2 ); //Limita a variável a duas casa decimais. Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2 ); //Imprime o texto e os dados da variável que foi digitado pelo usuário, e deixa o espaço de 1 linha
    densidadepopulacional2 = (float) populacao2 / area2; //calcula o resultado para a variável 'densidadepopulacional'. Converte a variável 'populacao' de int para float, e deixa o espaço para 1 linha
    printf("Densidade Populacional: %.2f hab/km2 \n", densidadepopulacional2); //Imprime o resultado da variável densidadepopulacional, limitando a 2 casas decimais, e deixa o espaço de 1 linha
    pibpercapita1 = pib2 / (float) populacao2; //calcula o resultado para a variável 'pibpercapita'. Converte a variável 'populacao' de int para float, e deixa o espaço para 1 linha
    printf("PIB per Capita: %.2f reais \n", pibpercapita2); //Imprime o resultado da variável densidadepopulacional, limitando a 2 casas decimais, e deixa o espaço de 1 linha




    printf("\n"); // Espaço após imprimir os dados das cartas

    return 0; //Finaliza o programa
}

