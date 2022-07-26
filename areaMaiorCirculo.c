#include <stdio.h>
#include <math.h>

#define Pi 3.14

typedef struct
{
    float x, y;
}Pos;
float area(float raio)
{ 
    float valor = Pi * (raio * raio);
    return valor;
}

void main()
{
    int contador;
    scanf("%d", &contador);
    float raio, maior, final;
    Pos p1;
    for(int i = 0; i < contador; i++)
    {
    scanf("%f %f %f", &p1.x, &p1.y, &raio);
    final = area(raio);
    if(maior < final){maior = final;}
    }
    printf("%.2f", maior);
}
