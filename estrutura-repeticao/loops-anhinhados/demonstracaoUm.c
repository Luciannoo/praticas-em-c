#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 10){ //loop externo
        int j = 1; //variável local
        while (j <= 10){ //loop interno
            printf("%d\n", j * i);
            j++; //incremento loop interno?
        }
        printf("\n");
        i++; //incremento loop externo
    }
    
}