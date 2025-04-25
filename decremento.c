//pratica de pós e pré decremento
#include <stdio.h>
int main(){
    int valor = 20, decremento;
    printf("Valor inicial da variável: %d\n", valor);

    printf("operação decremento: \n");
    
    //operação de pós decremento
    decremento = valor--; 
    printf("Valor pós incremento: %d\n", valor);
    printf("Valor atual da variável: %d\n\n", valor);

    //operação de pré decremento
    decremento = --valor;
    printf("Valor pré decremento: %d\n", valor);
    printf("Valor atual da variável: %d\n", valor);
     
}