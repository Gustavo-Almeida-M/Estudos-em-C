/*
    Atividade proposta: Implemente um programa que recebe todos os dados da pessoa e calcule a pontuação no score de crédito.
    Na primeira linha, você irá receber as respostas dos critérios de 1 até 4, com S para sim e N para não.
    Na segunda linha será fornecido os valores da renda mensal, do empréstimo e a quantidade de parcelas.
    Na próxima linha será fornecidos as quantidades de carros, casas e apartamentos caso a resposta do critério 4 seja S.
    Imprima a pontuação obtida. 
*/
#include <stdio.h>

void main()
{
  //Criando as variaveis.
    char CadastroAT, VinculoEP, NomeLimpo, Bens;
    float salario, emprestimo, valorParcelas, salario3;
    int parcelas, pontos = 0;
  
  //recebendo as variaveis de informações da "escolha".
    scanf("%c %c %c %c", &CadastroAT, &VinculoEP, &NomeLimpo, &Bens);
  //Recebendo as variaveis para saber o ganho e as demais informacoes sobre o emprestimo.
    scanf("%f %f %d", &salario, &emprestimo, &parcelas);
    
  //Operacao para descobri o valor das parcelas, para ser usado posteriomente.
    valorParcelas = emprestimo / parcelas;
  
  //Comparando os valores passados pela variaveis, e adicionando pontos para a variavel "pontos".
    switch(CadastroAT)
        {
            case 'S':
            pontos += 100;
            break;
        }
        switch(VinculoEP)
        {
            case 'S':
            pontos += 200;
            break;
        }
        switch(NomeLimpo)
        {
            case 'S':
            pontos += 200;
            break;
        }
  //Descobrindo qual é a proporcao do valor do emprestimo com o salario fornecido.
        emprestimo /= salario;
        if(emprestimo <= 2)
        {
            pontos += 200;
        }else if(emprestimo <= 3)
        {
            pontos += 100;
        }else if(emprestimo <= 4)
        {
            pontos += 50;
        }
  //A questão diz que se o valor das parcelas for maior que 30% do salaraio, o sistema deve retornar 0.
        salario *= 0.3;
  //Comparando o valor do salario com o valor das parcelas.
    if(valorParcelas > salario)
    {
        printf("0");
    }
  //Comparando se o bens se o bens é verdadeiro.
    else if(Bens == 'S')
    {
      //Criando as variaveis que serao necessarias para descobrir a pontuação.
        int carros, casas, apartamentos, pontosBens;
        scanf("%d %d %d", &carros, &casas, &apartamentos);
        
      //Multiplicando os pontos.
        carros *= 10;
        casas *= 40;
        apartamentos *= 40;
        pontosBens = apartamentos + casas + carros;
        pontos += pontosBens;
        
      //Imprimindo a resposta.
        printf("%d", pontos);
    }else
    {
      //Imprimindo a resposta.
        printf("%d", pontos);
    }
}
