#include <stdio.h>
int main(){
    int temperatura;
    int resultado;

    printf("Qual a temperatura atual: ");
    scanf("%d", &temperatura);

    resultado = temperatura >= 34 ? 1 : 0;
    if (resultado == 1){
        printf("Está calor\n");
    } else if (temperatura < 20 && temperatura >= 14){
        printf("Está frio\n");
    } else if   (temperatura < 13) {
        printf("Está muito frio\n");
    } else {
        printf("Temperatura agradável\n");
    }
    // temperatura >= 34 ? printf("Está calor\n") : printf("Temperatura agradável\n");
}