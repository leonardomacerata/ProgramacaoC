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

printf("Produto %s tem estoque %u e o valor unitário é %.2f \n", produtoA, estoqueA, valorA);

return 0;
}