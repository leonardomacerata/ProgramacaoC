#include <stdio.h>

int main (){

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // a variável 'a', que é do tipo int (inteira), é convertida implicitamente para uma variável resultante do tipo float (decimal). Em algumas operações, como divisão, a conversão implítica pode não funciona. Veja exemplo abaixo

    // conversão implícita as vezes não funciona na operação divisão
    int c = 10;
    float d = 3;
    float quociente1 = c / d; // INCORRETO: a variável 'c', que é do tipo int (inteira), é convertida implicitamente para a variável do tipo float (decimal). Note que o resultado é 3.00, onde deveria ser 3.33, conforme abaixo

    // conversão explícita sempre funciona na operação divisão
    float quociente2 = (float) c / d; // CORRETO: a variável 'c', que é do tipo int (inteira), é convertida explicitamente para a variável do tipo float (decimal)

    printf("Resultado = %.2f \n", resultado);

    printf("Quociente com conversão implícita = %.2f \n", quociente1);

    printf("Quociente com conversão explícita = %.2f \n", quociente2);

    return 0;

}