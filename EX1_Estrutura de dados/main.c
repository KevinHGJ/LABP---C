#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int main()
{
    int matricula [TAMANHO],opcao;
    float bimestre1[TAMANHO], media;
    int indice = 0;
    int i, soma;

    printf("MENU DE OPCOES:\n");
    printf("1: CADASTRAR ALUNO: \n");
    printf("2: LISTA DE ALUNOS DA MEDIA DA TURMA: \n");
    printf("3: PESQUISAR POR MATRICULA (XXX): \n");
    printf("4: EXIBIR DADOS ORDENADOS POR MATRICULA: \n");
    printf("5: PESQUISA (BINARIA) DE MATRICULA (XXX): \n");
    printf("0: SAIR \n");
    do{
      printf("SUA OPCAO: ");
      scanf("%i", &opcao);
      if(opcao == 0)printf("FIM DO PROGRAMA");
      else if(opcao < 0 || opcao > 5)
        printf("ERRO: ESCOLHA NOVAMENTE: \n");
      else if(opcao == 1){
        if(indice == TAMANHO)
            printf("TURMA LOTADA! \n");
        else{
            printf("Dados do aluno %i\n", indice + 1);
            printf("Matricula(xxx): ");
            scanf("%i", &matricula[indice]);
            printf("BIMESTRE 1 [0.0, 10.0]: ");
            scanf("%f", &bimestre1[indice]);
            if(matricula[indice] <= 99 || matricula[indice] >=1000)
                printf("ERRO NA MATRICULA!! ESCOLHA NOVAMENTE\n");
            else if(bimestre1[indice] < 0 || bimestre1[indice] > 10)
                printf("ERRO NA NOTA!! ESCOLHA NOVAMENTE\n");
            else{
                printf("ALUNO CADASTRADO COM SUCESSO\n");
                indice++;
            }
        }
      }
      else if(opcao == 2){
        soma = 0;
        for(i = 0; i < indice; i++)
        soma = soma + bimestre1[i];
        media = soma / indice;
        printf("LISTA DOS ALUNOS ACIMA DA MEDIA (%.0f): \n", media);
        for(i = 0; i < indice; i++){
            if(bimestre1[i] > media)
                printf("Aluno %i[MATRICULA: %i]: %.1f\n", i + 1,matricula[i], bimestre1[i]);
        }
      }
    }
    while(opcao != 0);

    return 0;
}
