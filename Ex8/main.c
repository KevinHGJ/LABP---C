#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada, multiplo = 0, resultado;


    printf("Escolha a tabuada de 1 a 10: ");
    scanf("%i", &tabuada);

    while(multiplo <=10){
    resultado = tabuada * multiplo;
    printf("O numero escolhido foi %i: \n", tabuada);
    printf("A tabuada de %i * %i e: %i\n", tabuada, multiplo, resultado);
    multiplo++;
    }
    return 0;
}
