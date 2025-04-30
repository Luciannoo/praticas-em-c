//criação de um jogo de advinhação
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int opcao;
    int numeroSecreto, palpite, regras;
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        //inicia o gerador de números aleatórios
        srand(time(0));
        numeroSecreto = rand() % 10;//gera um número aleatório
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite){
            printf("Você acertou!\n");
        } else {
            printf("Você errou!\n");
            printf("Número secreto: %d", numeroSecreto);
        }
    break;
    case 2:
        printf("Regras do jogo");
        printf("Escolha a opção da regra do jogo");
        scanf("%d", &regras);
        switch (regras){
        case 1:
            printf("Regra 1");
        break;
        case 2:
            printf("Regra 2");
        break;
        case 3:
            printf("Regra 3");
        break;
        
        default:
            break;
        }
    break;
    case 3:
         printf("Saindo do jogo");
    break;
    
    default:
        printf("Opção inválida");
    break;
    }
}
