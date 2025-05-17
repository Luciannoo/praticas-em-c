#include <stdio.h>
int main(){
    int i = 0;

    //definindo a primeira condição
    while(i <= 10){
        //condição que veirifica se o número é par
        if(i % 2 == 0){
            printf("O número %d é par \n", i);
        }
        i++; //evitando loop infinito 
    }
}