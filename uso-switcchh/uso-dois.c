//criando um menu com switch
#include <stdio.h>
int main(){
    int opcao;
    float saldo = 3000;
     
    printf("Escolha uma opção: \n");
    printf("1. Verificar saldo: \n");
    printf("2. Fazer depósito: \n");
    printf("3. Fazer saque: \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Seu saldo é: %f reais\n", saldo);
    break;
    case 2:
        printf("Digite ao banco que você precisa depositar : \n");
        printf("Digite a agência que você quer depositar: \n");
        printf("Digite a conta que você quer depositar: \n");
    break;
    case 3:
        printf("Digite o valor que você deseja sacar: \n");
    break;
    default:
        printf("Opção inválida: \n");
    break;
    }
    
}