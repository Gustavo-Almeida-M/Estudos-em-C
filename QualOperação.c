#include <stdio.h>

void main()
{
    double resultado, valor1, valor2;
    char car;
    
    //Lendo as variaveis
    scanf("%lf %lf %c", &valor1, &valor2, &car);
    
    //Comparcao com if
    if(car == '+')
    {
        resultado = valor1 + valor2;
        printf("%lf", resultado);
    } else if(car == '-')
    {
        resultado = valor1 - valor2;
        printf("%lf", resultado);
    } else if(car == '*')
    {
        resultado = valor1 * valor2;
        printf("%lf", resultado);
    } else if(car == '/')
    {
        if (valor2 == 0)
        {
        printf("Operacao invalida");
        }else{
        resultado = valor1 / valor2;
        printf("%lf", resultado);
        }
    } else
    {
        printf("Operacao invalida");
    }
}
