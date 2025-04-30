#include <stdio.h>
int main(){
    //verificando os critérios para benefício social
    int idade, dependentes;
    float renda;
    //condição um = se idade do usuário estar entre 18 a 65 anos
    //condição dois = se a renda do usuário for menos que 3000 reais 
    //condição três = se o número de dependentes do usuário for maio que 2

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda: ");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade < 65){
        if (renda < 3000){
            if (dependentes > 2){
                printf("Você atende a todos os critérios\n");
            } else{
                printf("O número de dependentes não atende aos critérios\n");
            }
        } else{
            printf("Sua renda não atende aos critérios de renda\n");
        }
    } else {
        printf("Você não atende aos critérios idade\n");
    }
}