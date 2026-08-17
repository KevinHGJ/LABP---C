#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;
    printf("Escolha uma senha numerica (xxxx): ");
    if(senha < 1000 | | senha > 9999);
        printf("Erro: No valor da senha (xxxx).\n");
    else{
        if(senha %2 != 0 && senha % 17 == 0)
            printf("Parabens!! Senha criada com Sucesso.\n");
        else
            printf("Lamento, escolha a senha novamente.\n");
    }
    return 0;
}
