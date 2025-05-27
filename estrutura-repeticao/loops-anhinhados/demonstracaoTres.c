#include <stdio.h>
int main() {
    /*
    Os loops aninhados são frequentemente usados quando precisamos 
    trabalhar com estruturas de dados que possuem múltiplos níveis ou
    quando a operação que estamos realizando requer múltiplas camadas de repetição.
    */
    //para cada execução do loop externo tem a executação completa do interna

    for (int i = 1; i <= 10; i++) { //O loop externo controla as linhas (multiplicando)
        for (int j = 1; j <= 10; j++) { //o loop interno controla as colunas (multiplicador)
            // printf("%d\t", i * j);
            printf("%d X %d = %d \n", i, j, i * j);   
        }
        printf("\n");

        /* Para cada valor de i (de 1 a 10), o loop interno percorre j (de 1 a 10),
        e, em cada iteração do loop interno, a multiplicação de i e j é impressa.*/
    }
    return 0;
}