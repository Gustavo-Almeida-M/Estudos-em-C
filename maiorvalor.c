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

/*
#include <stdio.h>

void main()
{
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1 > num2 && num1 > num3)
    {
        printf("%d", num1);
    }else if(num2 > num1 && num2 > num3)
    {
        printf("%d", num2);
    }else if(num3 > num2 && num3 > num1)
    {
        printf("%d", num3);
    }else if(num1 == num2 || num1 == num3)
    {
        printf("%d", num1);
    }else if(num2 == num1 || num2 == num3)
    {
        printf("%d", num2);
    }
}
*/