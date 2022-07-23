#include <stdio.h>

void main()
{
    char nome[30];
    int idade, alimentado, resfriado;
    float peso;
    printf("Digite o nome do voluntario\n");
    fgets(nome, 30, stdin);
    printf("Digite seu peso\n");
    scanf("%f", &peso);
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    printf("Esta bem alimentado? (1 para sim/2 para não.)\n");
    scanf("%d", &alimentado);
    printf("Esta resfriado? (1 para sim/2 para não.)\n");
    scanf("%d", &resfriado);

    if (peso >= 50 && (idade >= 16 && idade <= 69) && alimentado || 2 && resfriado || 1)
    {
        printf("O %s esta apto para doar\n", nome);
    }else
    {
        printf("O %s não esta apto.\n", nome);
    }
    
}