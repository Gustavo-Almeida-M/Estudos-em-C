#include <stdio.h>

double fat(double valor)
{
    double v = 0;

    if(valor <= 1){ v = 1;}
    else
    {
        v = valor * fat(valor - 1);
    }
    
    return v;
}

void main()
{
    double valor;
    scanf("%lf", &valor);

    double fatorial = fat(valor);

    printf("%.2lf", fatorial);
}
