#include<stdio.h>

int main(){
    int a =20;
    int b = 20;
    float c = 20.2;
    char d = 'a'; //char é caracter. Aqui nos referimos a char como um carcter da tabela ASCII, onde a = 97.

    //se verdadeiro = 1, se falso = 0
    printf("a maior que b: %d \n", a > b);
    printf("a menor que b b: %d \n", a < b);
    printf("a igual b: %d \n", a == b);
    printf("a diferente de b: %d \n", a != b);
    printf("a maior ou igual que b: %d \n", a >= b);
    printf("a menor ou igual que b: %d \n", a <= b);    
    printf("a maior ou igual que c: %d \n", a >= c);
    printf("O valor ASCII de %c é: %d \n",d ,d);
    printf("char a maior ou igual que d: %d \n", a >= d);
    printf("a maior ou igual que c: %d \n", a >= (int)c); //float é explicitamente tranformada em int



    return 0;
}