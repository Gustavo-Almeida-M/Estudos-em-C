#include <stdio.h>

void main()
{
    int numero;

    scanf("%d", &numero);
    
    for (int i = 2; i <= numero; i++)
    {
        if (numero % i != 0 || numero == 2)
        {
            printf("Número é primo");
            break;
        }
        else
        {
            printf("Número não é primo");
            break;
        }
        
    }
    
}