#include <stdio.h>
int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //verificando idade usando estrutura de condição encadeadas
    //idade >= 60 é idoso
    //idade >= 18 e < 60 é adulto
    //idade >=12 e < 18 é adolescente
    //idade < 12 é criança
    if (idade >= 60){
        printf("Você é idoso!\n");
    } else if (idade >= 18 && idade < 60 ){
        printf("Você é adulto!\n");
    } else if (idade >= 12 && idade < 18){
        printf("Você é adolescente!\n");
    } else{
        printf("Você é criança!\n");
    }
}