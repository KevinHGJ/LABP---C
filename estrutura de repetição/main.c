#include <stdio.h>
#include <stdlib.h>

int main()
{
   int contador;
   int quantidade = 0;

   printf("Sugestao de Senhas (xxxx): \n");
   for(contador = 1000; contador <=9999; contador++){
        if(contador % 2 != 0 && contador % 17 == 0) {
            quantidade++;
            printf("Senha %i: %i\n", quantidade, contador);
        }
   }

    return 0;
}
