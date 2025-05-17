#include <stdio.h>
int main(){
    //usamos a estrura de decisição if para imprimir apenas os números pares
    for (int i = 1; i <= 30; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }    

    }
}