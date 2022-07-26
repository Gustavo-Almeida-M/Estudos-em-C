#include <stdio.h>

void main()
{
  //Declarando e lendo as variaveis
    float distancia, valor = 0;    
    scanf("%f", &distancia);
    
  // Se a distancia for ate 30 km, sera cobrado 0.50 por km, se não, vai ser cobrado 0.45, mais o valor padrao de 5 reais.
    if(distancia <= 30)
    {
        valor = distancia * 0.5 + 5;
        printf("%.2f", valor);
    }
    else
    {
        valor = distancia * 0.45 + 5;
        printf("%.2f", valor);
    }
}
