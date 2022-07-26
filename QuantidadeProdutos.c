#include <stdio.h>

void main()
{
  //Variáveis para saber quantos produts ele quer comprar, e zerando o contador para não ter lixo.
    int quantidadeProdutos, contador = 0;
  //Variável para saber qual o valor que ele tem para comparar.
    float valorCarteira;
  
    printf("Digite quantos produtos você deseja comprar.\n");
    scanf("%d", &quantidadeProdutos);
  
    printf("Digite o valor que você tem na carteira.\n");
    scanf("%f", &valorCarteira);
  
    for(int i = 1; i <= quantidadeProdutos; i++)
    {
      //lendo o valor do produto
        float valorProduto;
        printf("Digite o valor do produto.\n");
        scanf("%f", &valorProduto);
      //Comparando o valor do protudo com o da carteira, para caso seja menor, ele não execute.
        if(valorProduto <= valorCarteira)
        {
          //Somando o contador para saber se o produto pode ser comprado.
            contador++;
          //Diminuindo o valor da carteira, para saber se os proximos produtos podem ser comprados.
            valorCarteira -= valorProduto;
        }
    }
  //Imprimindo a quantidade de produtos que pode ser comprado.
    printf("Você pode compar até %d produtos.", contador);
}
