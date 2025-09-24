#include <stdio.h>
 
int main() {
    char *nomes[] = {"Alice", "Bob", "Carol"}; //Aqui o tamanho do array é definido pela variável i. Os valores do array são strings (nomes)
    int i;
    for(i = 0; i < 3; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;
}