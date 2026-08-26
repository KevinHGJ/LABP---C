#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moradores = 0;
    int fulano = 0, beltrano = 0, ciclano = 0, voto;

    printf("Menu de opcoes \n");
    printf("1: Fulano de Tal\n");
    printf("2: Beltrano de Tal\n");
    printf("3: Ciclano de Tal\n");

    while(moradores < 100){
        printf("Voto do morador %i: ", moradores + 1); scanf("%i", &voto);
        if(voto <=0 || voto >= 4)
            printf("Digite um numero valido\n");
        else{
            moradores++;
            if(voto == 1) fulano++;
            else if(voto == 2) beltrano++;
            else ciclano++;
            printf("Total de votos - Fulano: %i (%.1f %%)\n", fulano, 100.0 * fulano / moradores);
            printf("Total de votos - Beltrano: %i (%.1f %%)\n", beltrano, 100.0 * beltrano / moradores);
            printf("Total de votos - Ciclano: %i (%.1f %%)\n", ciclano, 100.0 * ciclano / moradores);
        }
    }
    return 0;
}
