#include <stdio.h>

int main (){

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // a variável 'a', que é do tipo int (inteira), é convertida implicitamente para uma variável resultante do tipo float (decimal)

    int c = 10;
    float d = 3;
    float quociente = (float) c / b; // a variável 'a', que é do tipo int (interira), é convertida explicitamente para a variável do tipo float (decimal)

    printf("Resultado = %.2f \n", resultado);

    printf("Quociente = %.2f \n", quociente);

    return 0;

}