#include <stdio.h>

void main()
{
    int num1, num2, num3, maior;

    //Lendo as variaveis
    scanf("%d %d %d", &num1, &num2, &num3);
    
    //Comparando os valores
    maior = num1;
    if (num2 > maior)
    {
        maior = num2;
        if (num3 >= maior)
        {
            maior = num3;
        }
    }
    else if (num3 > maior)
    {
        maior = num3;
    }
    printf("%d", maior);
}
