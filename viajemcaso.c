#include <stdio.h>

void main()
{
    int planeta;
    float pesoPlaneta, peso;

    printf("Digite o peso na terra. \n");
    scanf("%f", &peso);
    printf("Digite [1] para marte e [2] para saturno \n");
    scanf("%d", &planeta);
    switch (planeta)
    {
    case 1:
        pesoPlaneta = (peso / 10) * 0.38; 
        break;
    
    case 2:
        pesoPlaneta = (peso / 10) * 1.15;
        break;
    
    }
    printf("O peso no planeta é %5.2f \n", pesoPlaneta);
}