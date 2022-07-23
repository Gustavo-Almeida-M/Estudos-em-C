#include <stdio.h>

int main(){
    int contador = 0, ler = 0;
    char frase[200];
    
    scanf("%[^\n]", frase);
    
    for(int i = 0; frase[i] != '\0'; i++){
        ler += 1;
    }
    
    for(int i = 0; i <= ler; i++){
        
        if(frase[i] == ' ' || frase[i] == '\0'){
            for(int j = i - 1; j >= contador; j--){
                printf("%c", frase[j]);
            }
            
            if(contador == 0){
                printf(" ");
            }
            
            contador = i;
        }
    }
}