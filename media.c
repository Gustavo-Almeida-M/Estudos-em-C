#include <stdio.h>

void main()
{
    float media, valor1, valor2;

    //Recebendo os valores
    printf("Digite o primeiro número\n");
    scanf("%f", &valor1);
    printf("Digite o segundo número\n");
    scanf("%f", &valor2);

    //Somando e dividindo
    media = (valor1 + valor2)/2;

    //Media final
    printf("A media é %3.2f", media);
}