#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int atletas = 0;
    float menorTempo = INFINITY;
    float maiorTempo = -INFINITY;
    int tempo, matricula;
    int matriculaVencedor, matriculaUltimo;

    while(atletas < 3){
        printf("Dados do Atleta %i: \n", atletas +1);
        printf("Matricula (xxxxx): "); scanf("%i", &matricula);
        printf("Tempo (em minutos): "); scanf("%i", &tempo);
        if(matricula <= 9999 || matricula > 99999)
            printf("ERRO NA MATRICULA: \n Digite de novo: \n");
        else if(tempo <= 0)
            printf("ERRO NO TEMPO: \n Digite de novo");
        else{
            if(tempo < menorTempo){
                menorTempo = tempo;
                matriculaVencedor = matricula;
            }
            if(tempo > maiorTempo){
                maiorTempo = tempo;
                matriculaUltimo = matricula;
            }
            atletas++;
        }
    }
    printf("RESULTADO FINAL \n");
    printf("Dados do vencedor \n");
    printf("Matricula: %i \n", matriculaVencedor);
    printf("Tempo: %.0f \n", menorTempo);

    printf("Dados do ultimo colocado \n");
    printf("Matricula: %i \n", matriculaUltimo);
    printf("Tempo: %.0f \n", maiorTempo);
    return 0;
}
