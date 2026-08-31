#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada, multiplo = 1, resultado, somatoria = 0;
    double produtoria = 1.0;


    printf("Escolha a tabuada de 1 a 10: ");
    scanf("%i", &tabuada);
    printf("O numero escolhido foi %i: \n", tabuada);

    while(multiplo <=10){
    resultado = tabuada * multiplo;
    printf("A tabuada de %i * %i = %i\n", tabuada, multiplo, resultado);
    somatoria += resultado;
    produtoria *= resultado;
    multiplo++;
    }

    printf("\nCURIOSIDADE:\n");
    printf("SOMATORIA DOS RESULTADOS E: %i\n", somatoria);
    printf("PRODUTORIA DOS RESULTADOS E: %.0f\n", produtoria);
    return 0;
}
