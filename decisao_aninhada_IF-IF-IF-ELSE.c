#include <stdio.h>

int main(){

    int idade =70, renda = 4000, dependentes = 2;

    //condição 1: idade entre 18 e 65 anos
    //condição 2: renda menor que 3000
    //condição 3: número de dependentes maior que 2

    if (idade >= 18 && idade <= 65)
    {
        if (renda < 3000)
        {
            if (dependentes > 2)
            {
                printf("Atende a todos os critérios.\n");
            } else
            {
                printf("Não atende ao critério de dependentes.\n");
            }
            
            
        } else
        {
            printf("Não atende ao critério de renda.\n");
        }
        
        
    } else
    {
        printf("Não atende ao critéio de idade.\n");
    }
    
    

    return 0;

}