#include <stdio.h>

void main()
{
    float valorProduto, jogador1, jogador2;
    
  //lendo os valores
    scanf("%f %f %f", &valorProduto, &jogador1, &jogador2);
    
  //descobrindo a diferenca
    jogador1 -= valorProduto;
    jogador2 -= valorProduto;
    
  
  //Elevando ao quadrado para não aver numeros negativos
    jogador1 *= jogador1;
    jogador2 *= jogador2;
    
  //Caso empate
    if(jogador1 == jogador2)
    {
        printf("empate");
    }
    else
    {
      //Comparando para saber qual é o mais proximo
        if(jogador1 < jogador2)
        {
            printf("primeiro");
        }
        else
        {
            printf("segundo");
        }
    }
}
