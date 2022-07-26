#include <stdio.h>

void main()
{
  //Criando e lendo os valores.
    int idade;
    printf("Digite a idade do seu filho.");
    scanf("%d", &idade);
    
  //Fazendo os testes para saber qual categoria se encaixa o usuario.
    if(idade <= 3){printf("Fralda");}
    else if(idade <= 5){printf("Baby");}
    else if(idade <= 7){printf("Kid");}
    else if(idade <= 12){printf("Juvenil");}
    else if(idade <= 19){printf("Jovem");}
    else{printf("Não é permitido");}
}
