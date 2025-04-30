//verificando se uma pessoa está qualificada para um desconto especial
//com base na idade e na renda mensal.
#include <stdio.h>
int main(){
    //A pessoa deve ter mais de 60 anos ou menos de 18 anos
    //Ter uma renda mensal abaixo de 2000.
    int idade;
    float renda;
    printf("Sua idade: ");
    scanf("%d", &idade);
    printf("Sua renda: ");
    scanf("%f", &renda);

    if (idade < 18  || idade >= 60){
        if (renda < 2000){
            printf("Você foi aprovado para o desconto!\n");
        } else {
            printf("Você não atende aos critérios deviso a renda\n");
        }
    } else{
        printf("Você não atende aos critérios devido a idade\n");
    }
}