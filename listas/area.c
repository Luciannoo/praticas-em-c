#include <stdio.h>
int main(){
    //Cálculo de Área e Perímetro de um Retângulo
    float altura, largura, area, perimetro;

    printf("Altura do retângulo: "); 
    scanf("%f", &altura);

    printf("Largura do retângulo: ");
    scanf("%f", &largura);

    //calculando a área
    area = altura * largura;
    printf("A aréa do retângulo é: %.2f\n", area);

    //calculando o perimetro
    perimetro = 2 * (altura + largura);
    printf("O perímetro do retângulo é: %.2f", perimetro);
}
