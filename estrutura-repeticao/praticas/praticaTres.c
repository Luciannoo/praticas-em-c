#include <stdio.h>
int main(){
    //calculando toda a tabuada de um número
    int numero, i;
    //solicintando o número
    printf("Digite o número para calcular a tabuada do mesmo: ");
    scanf("%d", &numero); //lendo o número

    //iniciando|condicção|incremento
    for (i = 0; i <= 10; i++){
        //impressão %d = numero, outra = i e outra igual a numero * i porque são três especificações
        printf("%d X %d = %d \n", numero, i, numero * i);   
    }  
}