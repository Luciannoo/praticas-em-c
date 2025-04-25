/*
iniciar o programa
declarar variáveis para as notas de 4 bimestre 
perguntar qual foi a nota de cada um dos 4 bimestres
declarar uma variável soma do tipo float
somar essas notas e dividir por 4 e imprimir o resultado
*/
#include <stdio.h>
int main(){
    float nota1, nota2, nota3, nota4;
    float media;

    printf("Nota do primeiro bimestre: %f\n");
    scanf("%f", &nota1);

    printf("Nota do segundo bimestre: %f\n");
    scanf("%f", &nota2);

    printf("Nota do terceiro bimestre: %f\n");
    scanf("%f", &nota3);

    printf("Nota do quarto bimestre: %f\n");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Sua média é: %.2f", media);
}