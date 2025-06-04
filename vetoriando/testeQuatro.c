#include <stdint.h>
int main() {
    int vetor[10];
    for(int i = 0;i < 10;i++){
        vetor[i] = i * 2;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}