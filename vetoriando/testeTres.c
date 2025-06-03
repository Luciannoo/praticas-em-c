#include <stdio.h>
int main() {
    /*Declaramos o array nomes como um array de ponteiros para
    char, utilizando a sintaxe char *nomes[] = {...}. Isso é
    necessário porque as strings literais são armazenadas como ponteiros para char.*/
    char *nomes[] = {"Luciano", "Ester", "Geto", "Glaudencio"};

    for(int i = 0; i < 5; i++){
        printf("%s\n", nomes[i]);
    }
}