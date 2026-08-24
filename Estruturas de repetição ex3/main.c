#include <stdio.h>
#include <stdlib.h>
#define sm 1621.01
int main()
{
    int alunos = 0;
    float salario, soma = 0, media;
    while(alunos < 3) {
        printf("Aluno %i - Salario: R$ ", alunos +1);
        scanf("%f", &salario);
        if(salario < sm)
            printf("Erro: Valor do salario. escolha de novo.\n");
        else{
            alunos++;
            soma += salario;
        }
    }
    media = soma / alunos;
    printf("Media salarial: R$ %.2f", media);
    return 0;
}
