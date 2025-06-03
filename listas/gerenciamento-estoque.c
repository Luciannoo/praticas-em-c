#include <stdio.h>
int main(){
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    //informações do produto
    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e valor unitário é %.2f\n", produtoB, estoqueB, valorB);

    //comparação com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueA;
    resultadoB = estoqueB > estoqueB;
    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    //comparação entre valores totais dos produtos
    printf("O valor total de A é maior que o valor de B: %d\n", (estoqueA * valorA) > (estoqueB * valorB));

}