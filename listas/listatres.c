//calculando a importância que será dividida por 3
#include <stdio.h>
int main(){
    //valor da imporâtancia
    float importancia = 780.000;
    float primeiroGanhador, segundoGanhador, terceiroGanhador;
    //primeiro ganhador receberá = 46% do total
    //segundo ganhador receberá = 32% do total
    //terceiro ganhador receberá = o restante do total

    primeiroGanhador = importancia * 0.46;
    segundoGanhador = importancia * 0.32;
    terceiroGanhador = importancia - primeiroGanhador - segundoGanhador;
    printf("Primeiro ganhador reberá: %.3f\n", primeiroGanhador);
    printf("Segundo ganhador reberá: %.3f\n", segundoGanhador);
    printf("Terceiro ganhador reberá: %.3f\n", terceiroGanhador);
}