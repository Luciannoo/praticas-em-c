#include <stdio.h>
int main(){
    // conversão de variáveis do tipo explicita
    int a = 10;
    int b = 3;
    //usando o modelo casting
    float quociente = (float) a / b; // a é explicitamente convertido para float

    printf("Quocinte: %.2f", quociente);
}