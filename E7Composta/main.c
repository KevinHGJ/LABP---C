#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Entre com a idade (em anos):");
    scanf("%i", &idade);
    if(idade < 15)
        printf("Fora da tabela.\n");
    else{
        if(idade <= 20)
            printf("CLASSIFICACAO: Geracao Z.\n");
        else if(idade <= 34)
            printf("CLASSIFICACAO: Geracao Y.\n");
        else if(idade <= 49)
            printf("CLASSIFICACAO: Geracao X.\n");
        else if(idade <= 65)
            printf("CLASSIFICACAO: Geracao BABY BOOMER.\n");
        else
            printf("CLASSIFICACAO: Geracao SILENCIOSA.\n");
    }
    return 0;
}
