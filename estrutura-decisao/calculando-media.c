//calculando a média dos bimestres de um aluno
//passo 1: declarar variáveis do tipo float para 4 bimestres e para a média
//passo 2: solicitar ao aluno suas 4 notas refrentes aos 4 bimestres
//passo 3: calcular a média dessas notas
//passo 4: verificar se o aluno pasou ou não
//requisitos para passar: nota maior ou igual a 7

#include <stdio.h>
int main(){
    float nota1, nota2, nota3, nota4, media, notaFinal;

    //solicitando as notas
    printf("Digite a nota do primeiro bimestre: ");
    scanf("%f", &nota1);

    printf("Digite a nota do segundo bimestre: ");
    scanf("%f", &nota2);

    printf("Digite a nota do terceiro bimestre: ");
    scanf("%f", &nota3); 

    printf("Digite a nota do quarto bimestre: ");
    scanf("%f", &nota4);

    //calculando a média
    media = (nota1 + nota2 + nota3 + nota4) / 4; 

    notaFinal = nota1 + nota2 + nota3 + nota4;
    printf("Sua nota final somada é: %.2f\n\n", notaFinal);

    if (media >= 7) {
        printf("Parabéns, você foi aprovado\n\n");
    } else {
        printf("Infelizmente você não foi aprovado\n\n");
    }
}