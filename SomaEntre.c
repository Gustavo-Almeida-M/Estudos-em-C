#include <stdio.h>

void main()
{
  //Criando as varáveis.
    int num1, num2, somaPar = 0, somaImpar = 0;
    //Lendo o valor iniciao e final, para então somar os valores que estão entre eles.
    printf("Digite o valor inicial depois o valor final.");
    scanf("%d %d", &num1, &num2);
    
    for(int i = num1; i <= num2; i++)
    {
        if(i % 2 == 0)
        {
           somaPar += i; 
        }
        else
        {
            somaImpar += i;
        }
    }
    printf("A soma dos números par é igual a: %d, e a soma dos números impar é: %d", somaPar, somaImpar);
}
