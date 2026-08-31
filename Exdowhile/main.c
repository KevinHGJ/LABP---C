#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moradores = 0;
    int fulano = 0, beltrano = 0 , ciclano = 0;
    int voto, opcao;

    printf("Menu de Opcoes:\n");
    printf("1: CADASTRAR O VOTO\n");
    printf("0: SAIR DA VOTACAO\n");
    do{
        printf("SUA OPCAO: "); scanf("%i", &opcao);
        if(opcao == 0)
            printf("Fim do programa.\n");
        else if(opcao != 1)
            printf("Erro na opcao escolha de novo: ");
        else{
            printf("Menu de opcoes \n");
            printf("1: Fulano de Tal\n");
            printf("2: Beltrano de Tal\n");
            printf("3: Ciclano de Tal\n");
            printf("Voto do morador %i: ", moradores + 1); scanf("%i", &voto);
            moradores++;
    if(voto <= 0 || voto >= 4){
        printf("Escreva uma opcao valida");
        }
    else {
        moradores++;
    }
    if(voto == 1) fulano++;
    else if(voto == 2) beltrano++;
    else if(voto == 3) ciclano++;
        printf("Total de votos - Fulano: %i (%.1f %%)\n", fulano, 100.0 * fulano / moradores);
        printf("Total de votos - Beltrano: %i (%.1f %%)\n", beltrano, 100.0 * beltrano / moradores);
        printf("Total de votos - Ciclano: %i (%.1f %%)\n", ciclano, 100.0 * ciclano / moradores);
    }
    }
    while(opcao != 0);

    return 0;
}
