#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, nota3, nota4, media;

    // Exibição do menu
    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    //criando as opções do menu
    switch (opcao){
    case 1:
        //calculando a média do aluno
        printf("Adicione as notas do aluno\n");
        printf("Nota do primeiro bimestre: ");
        scanf("%f", &nota1);
        printf("Nota do segundo bimestre: ");
        scanf("%f", &nota2);
        printf("Nota do terceiro bimestre: ");
        scanf("%f", &nota3);
        printf("Nota do quarto bimestre: ");
        scanf("%f", &nota4);

        media = (nota1 + nota2 + nota3 + nota4) / 4;
        printf("Média do aluno: %.2f\n", media);
        //determinando que a nota tem que ser de 0 a 10
        if ((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10) && (nota3 >= 0 && nota3 <=10) && (nota4 >= 0 && nota4 <=10)){
            printf("Entrada correta!");
        } else{
            printf;("Ops, essa nota é inválida. Por favor, corriga!");
        }
    break;
    case 2:
        //verificando se o aluno passou ou não de acordo com a média
        printf("Informe a média do aluno: ");
        scanf("%f", &media);
        if (media >= 7){
            printf("Aluno aprovado!\n");
        } else{
            printf("Aluno reprovado!\n");
        }     
    break;
    case 3:
        printf("Saindo...");
    break;
    default:
        printf("opção inválida");
    break;
    }


}