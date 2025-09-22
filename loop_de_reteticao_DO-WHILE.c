#include <stdio.h>

int main(){

    int i = 1;

    do  //garante a execução do primeiro comando. Casos de uso: menus e opções interativas com o usuário.
    {
        printf("%d\n", i);
        i++; 
    }
    while (i <= 5);
    
    
    return 0;
}