#include <stdio.h>
int main(){
    int numero;

    do{
        printf("Digite um número par pra sair do programa \n");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            printf("%d esse número é par\n\n", numero);
        } else{
            printf("%d esse número é impar\n\n", numero);
        }
    } while (numero % 2 != 0);

    printf("Você digitou um número par, saindo...");
}