#include <stdio.h>
int main() {
    
    //declaração da matriz
    int number[3][3] = {
        //inicialização dos elementos
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //acessando os elementos 
    printf("O elemento da posição [1][0] é: %d\n", number[1][0]);
    printf("O elemento da posição [0][0] é: %d\n", number[0][0]);
    printf("O elemento da posição [2][2] é: %d\n", number[2][2]);
}