#include <stdio.h>

int main (){

char produtoA[30] = "ProdutoA";
char produtoB[30] = "ProdutoB";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

double valorTotalA;
double valorTotalB;

int resultadoEstoqueA;
int resultadoEstoqueB;

//Exibir informações dos produtos
printf("Produto %s tem estoque %u e o valor unitário é R$%.2f \n", produtoA, estoqueA, valorA);
printf("Produto %s tem estoque %u e o valor unitário é R$%.2f \n", produtoB, estoqueB, valorB);

//Comparações com o valor mínimo em estoque
resultadoEstoqueA = estoqueA > estoqueMinimoA;
resultadoEstoqueB = estoqueB > estoqueMinimoB;

printf("O produto %s tem estoque mínimo %d \n", produtoA, resultadoEstoqueA);
printf("O produto %s tem estoque mínimo %d \n", produtoB, resultadoEstoqueB);

// Comparações entre valores totais dos produtos
printf("O valor total de A (R$%.2f) é maior do que o valor total de B (R$%.2f): %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB) );

return 0;
}