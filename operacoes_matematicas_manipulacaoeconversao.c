#include <stdio.h>

int main (){

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // a variável a, que é do tipo int (inteira) é convertida implicitamente para uma variável resultante do tipo float (decimal)

    printf("Resultado = %.2f \n", resultado);

    return 0;

}