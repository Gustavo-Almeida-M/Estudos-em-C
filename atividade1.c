#include <stdio.h>

void main(){
    //Atividade 1
    char* nome = "Gustavo Almeida Monteiro\n";
    printf("%s", nome);

    //Atividade 2
    int valor1 = 30, valor2 = 27;
    int total = valor1 * valor2;
    printf("O resultado é: %d\n", total);

    //Atividade 19

    float valor, atraso, juros, somaJuros;

    //Passando os valores
    printf("Qual o valor da prestação?\n");
    scanf("%f", &valor);
    printf("Quantos meses está em atraso?\n");
    scanf("%f", &atraso);
    printf("Qual a porcentagem do juros?\n");
    scanf("%f", &juros);

    //Fazendo a porcentagem de juros
    somaJuros = (valor/100)*juros;
    //Multiplicando o juros pelos meses atrasados
    somaJuros *= atraso;
    //Somando os juros com o valor do produto
    valor += somaJuros;
    //Passando o valor final
    printf("O valor com o juros é: %3.2f", valor);
}