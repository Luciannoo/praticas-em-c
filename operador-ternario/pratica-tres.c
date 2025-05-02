#include <stdio.h>
int main(){
    int num1, num2;
    int maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o primeiro número: ");
    scanf("%d", &num2);

    num1 > num2 ? (maior = num1) : (maior = num2);
    printf("O número maior é: %d\n\n", maior);
}