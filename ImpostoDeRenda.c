#include <stdio.h>

void main()
{
    char tipo;
    
    //Lendo o valor da variavel
    scanf("%c", &tipo);
    
    //Comparando o termo
    if(tipo =='F')
    {
        float ganho;
        
        //Recebendo o valor o ganho
        scanf("%f", &ganho);
        
        //Comparando a renda
        if(ganho <=13000)
        {
            printf("0.00");
        }else
        {
            float imposto = (ganho/100)*15;
            printf("%6.2f", imposto);
        }
    }else
    {
        float lucro, imposto, desconto;
        //Recebendo os valores das variaveis
        scanf("%f %f", &lucro, &desconto);
        
        //Operacao para descobrir o resultado
        imposto = (lucro/100)*25;
        imposto -= desconto;
        
        printf("%6.2f", imposto);
    }
}
