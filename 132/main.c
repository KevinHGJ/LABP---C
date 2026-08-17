#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;
    printf("Escolha uma senha numerica (xxxx): ");
    scanf("%i", &senha);

    if(senha < 1000 ||senha > 9999) {
        printf("Erro: No valor da senha (xxxx).\n");
    } else {

        int d1 = senha / 1000;
        int d2 = (senha / 100) % 10;
        int d3 = (senha / 10) % 10;
        int d4 = senha % 10;

        if (d1 != d2 && d1 != d3 && d1 != d4 &&
            d2 != d3 && d2 != d4 &&
            d3 != d4)
        {
            if(senha % 2 != 0 && senha % 17 == 0)
                printf("Parabens!! Senha criada com Sucesso.\n");
            else
                printf("Lamento, escolha a senha novamente.\n");
        } else {
            printf("Erro: A senha nao pode ter digitos iguais.\n");
        }
    }

    return 0;
}
