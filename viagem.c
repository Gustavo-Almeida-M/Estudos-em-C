#include <stdio.h>

void main()
{
    int local, ida, valor;
    printf("Selecione o seu destino\n");
    printf("Região Norte n1 \n Região Nordeste n2 \n Região Centro-oeste n3 \n Região Sul n4 \n");
    scanf("%d", &local);
    printf("Ida e volta? <1 para sim / 2 para não>");
    scanf("%d", &ida);
    if (local == 1)
    {
        if (ida == 1)
        {
            valor = 900;
            printf("O valor da passagem será de %d \n", valor);
        }else
        {
            valor = 500;
            printf("O valor da passagem será de %d \n", valor);
        }
        
    }else if (local == 2)
    {
        if (ida == 1)
        {
            valor = 650;
            printf("O valor da passagem será de %d \n", valor);
        }else
        {
            valor = 350;
            printf("O valor da passagem será de %d \n", valor);
        }
        
    }else if (local == 3)
    {
        if (ida == 1)
        {
            valor = 600;
            printf("O valor da passagem será de %d \n", valor);
        }else
        {
            valor = 350;
            printf("O valor da passagem será de %d \n", valor);
        }
        
    }else if (local == 4)
    {
        if (ida == 1)
        {
            valor = 550;
            printf("O valor da passagem será de %d \n", valor);
        }else
        {
            valor = 300;
            printf("O valor da passagem será de %d \n", valor);
        }
        
    }else
    {
        printf("Não corresponde a nenhuma passagem.");
    }
    
}