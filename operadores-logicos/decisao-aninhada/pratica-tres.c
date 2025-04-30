#include <stdio.h>
int main(){
    //verificar se um número é positivo
    //verificar se um número é zero
    //verificar se um número é negativo
    //verificar se um número é par ou ímpar
    //utilizaremos estrutura encadeadas e anhinadas
    int numero;
    printf("Solicitação para digitar um valor: ");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0){
            printf("número par\n\n");
        } else {
            printf("número ímpar\n\n");
        } 
    } else if (numero == 0){
        printf("número é zero\n\n");
    } else {
        printf("negativo\n\n");
    }

}