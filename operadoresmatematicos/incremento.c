//pratica de pós e pré incremento
#include <stdio.h>
int main(){
    int valor = 20, incremento;
    printf("Valor inicial da variável: %d\n", valor);
    
    //operação de pós incremento
    incremento = valor++;
    printf("Valor pós incremento: %d\n", valor);
    
    incremento = ++valor;
    printf("Valor pré incremento: %d\n", valor);
     
}