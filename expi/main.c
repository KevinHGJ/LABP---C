#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main()
{
    int n = 0;
    int i = 2;
    float somap = 0.0, somai = 0.0;
    float resultado_divisao = 0.0;

    printf("Escolha um valor inteiro N (N>2): \n");
    scanf("%i", &n);




    while (n <= 2){
        printf("Escolha um numero MAIOR que 2:  \n");
        scanf("%i", &n);
    }

    for(i = 2; i <= n; i++){
        resultado_divisao = 1.0 * pi / i;
        if(i % 2 == 0){
            somap += resultado_divisao;
            printf("Par %i o resultado de pi / %i, e: %.4f e somando com o anterior da: %.4f  \n\n", i, i,resultado_divisao, somap);
        }
        else {
            somai += resultado_divisao;
            printf("Impar %i o resultado de pi / %i, e: %.4f e somando com o anterior da: %.4f  \n\n", i, i,resultado_divisao, somai);
        }

        };

    printf("A soma dos resultados dos divisores pares e: %.4f\n", somap);
    printf("A soma dos resultados dos divisores impares e: %.4f\n", somai);

    return 0;
}
