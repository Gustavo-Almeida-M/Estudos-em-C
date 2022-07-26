#include <stdio.h>
#include <stdlib.h>

//Esse código é apenas para teste de mate

void main()
{
    //Atribuicao dos tipos de variaveis.
    int num1, num2, total;
    //Imprimindo mensagens fazendo requisiçoes de números e, também, coletando os valores.
    printf("Infomer um número.\n");
    scanf("%d.", &num1);
    printf("Infomer o segundo número.\n");
    scanf("%d.", &num2);
    //Somando os valores coletados.
    total = num1 + num2;
    //Imprimindo a resposta da soma.
    printf("O total é: %d.\n", total);
    //Subtraindo os valores coletados.
    total = num1 - num2;
    //Imprimindo a resposta da diminuição.
    printf("O total é: %d.\n", total);
    //Dividindo os valores coletados.
    total = num1 / num2;
    //Imprimindo a resposta da divisao.
    printf("O total é: %d.\n", total);
    //Dividindo os valores coletados.
    total = num1 % num2;
    //Imprimindo o resto da divisao.
    printf("O total é: %d.\n", total);
    printf("%i", num1);
}
