#include <stdio.h>

int main() {
    int num;
    printf("Digite um número negativo para sair: ");
    scanf("%d", &num);
    
    while (num >= 0){
        printf("Número digitado: %d\n", num);
        printf("Digite um número negativo para sair: ");
        scanf("%d", &num);
    }
    printf("Número negativo detectado, saindo...\n\n");

    return 0;
}