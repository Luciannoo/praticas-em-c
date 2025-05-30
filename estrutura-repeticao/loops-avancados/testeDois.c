#include <stdio.h>
int main() {
    //Loops com condições múltiplas
    //Utilizam mais de uma condição para determinar quando devem continuar ou parar
    //pode incluir múltiplas condições combinadas usando operadores lógicos
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    //o loop continua enquanto i for menor que 5 e j for maior que 5
    return 0;
}