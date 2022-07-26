#include <stdio.h>

void main()
{
    float valorProduto, jogador1;
    char jogador2;
    
  //lendo as variaveis
    printf("Digite o valor do produto, o valor que o jogador número 1 disse e depois o que o jogardor 2 disse, se ele acha que é maior ou menos(M para maior / m para menor)");
    scanf("%f %f %c", &valorProduto, &jogador1, &jogador2);
    
  //Comparacao de igualdade
    if(valorProduto == jogador1)
    {
        printf("O primeiro venceu!");
    }
    else
    {
      //Comaparacao para o segundo
        if((valorProduto > jogador1 && jogador2 == 'M') || (valorProduto < jogador1 && jogador2 == 'm'))
        {
            printf("O segundo venceu!");
        }
        else
        {
          //Caso primeiro
            printf("O primeiro venceu!");
        }
    }
}
