#include <stdio.h>
int main(){
    //loop com múltiplas variáveis
    //i é incrementado e j é decrementado em cada iteração
    for (int i = 0, j = 10; i < j; i++, j-- ){
        printf("i = %d, j = %d\n", i, j);
    }
}