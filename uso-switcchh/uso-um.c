//primeiro contato com o switch
#include <stdio.h>
int main(){
    int variavel;
    printf("Digite algum valor: ");
    scanf("%d", &variavel);

    //o valor (variavel) serve como controle para o switch
    switch (variavel){
    case 1:
        printf("Valor que aparecerá se a variável for = 1");
    break;
    case 2:
        printf("Valor que aparecerá se a variável for = 2");
    //break: para a execução
    break;
    default:
        printf("Valor que aparecerá se a variável não for = 1 ou 2");
    break;
    }
}