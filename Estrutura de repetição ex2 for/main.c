#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int contador, x;
    int quantidade = 0, soma = 0;
    float media, x3;

    printf("Valor inteiro de X(X >= 1): ");
    scanf("%i", &x);
    if (x < 1) printf("Erro, Escolha de novo\n");
    else {
        x3= pow(x, 3);
        printf("Os impares entre [%i, %.1f] sao: \n", x, x3);
        for(contador = x; contador <=x3; contador++){
            if(contador %2 != 0) {
                quantidade++;
                printf("Impar %i: %i\n", quantidade, contador);
                soma = soma + contador;
            }
        }
        printf("Soma dos impares entre [%i, %.1f] sao: %i\n ", x, x3, soma);
        media = 1.0 * soma / quantidade;
        printf("Media dos impares entre [%i, %.1f]: %.1f \n", x, x3, media);
    }

    return 0;
}
