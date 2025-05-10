//calculando o valor dos dias trabalhados
#include <stdio.h>
int main(){
    float valorDia = 30;
    float diasTrabalhados, valorTrabalho, desconto, valorDesconto;

    printf("Quantos dias você trabalhou? ");
    scanf("%f", &diasTrabalhados);

    valorTrabalho = valorDia * diasTrabalhados;
    printf("Este é o valor sem o desconto: %.2f\n\n", valorTrabalho);

    desconto = valorTrabalho * 0.08;
    valorDesconto = valorTrabalho - desconto;

    printf("Valor com desconto: %.2f\n\n", valorDesconto);

}