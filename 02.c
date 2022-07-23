#include <stdio.h>

void main(){
    char produto[30];

    printf("Informe o nome do produto: \n");
    //Passando o nome da variável, tamanho dela e onde vai ser armazenada, stdin quer dizer que vai ser guardada na memoria. 
    fgets(produto, 30, stdin);

    printf("Produto: %s \n", produto);

}