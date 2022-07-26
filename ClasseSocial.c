#include <stdio.h>

void main()
{
    float num;
    
    //Lendo o valor da variavel
    scanf("%f", &num);
    
    //Comparacao dos valores para determinar a sua categoria
    if(num <= 324)
    {
        printf("Extremamente pobre");
    }
    else if(num <= 648)
    {
        printf("Pobre");
    }
    else if(num <= 1164)
    {
        printf("Vulneravel");
    }
    else if(num <= 1764)
    {
        printf("Baixa classe media");
    }
    else if(num <= 2564)
    {
        printf("Media classe media");
    }
    else if(num <= 4076)
    {
        printf("Alta classe media");
    }
    else if(num <= 9920)
    {
        printf("Baixa classe alta");
    }
    else 
    {
        printf("Alta classe alta");
    }
}
