#include <stdint.h>
int main(){
    int minuto, tempoAnuncio, quantidadeAnuncio;
    int tempoSegundos, tempoMinuto;

    minuto = 60; //cada 60 seg temos um minuto
    tempoAnuncio = 15; //cada anuncio contém 15 seg
    quantidadeAnuncio = 30; //quantidade de anuncios

    //calcular quantos seg será os 30 anuncios
    tempoSegundos = tempoAnuncio* quantidadeAnuncio;
    printf("Ao final dos 30 anuncíos, você gastará %d seg\n", tempoSegundos);
    tempoMinuto = (tempoSegundos / minuto);
    printf("E o tempo final em minutos é: %d min\n", tempoMinuto);

}