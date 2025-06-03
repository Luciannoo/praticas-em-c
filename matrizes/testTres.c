#include <stdio.h>
int main() {
    
    //declaração da matriz
    int index;
    char *nomesAlunos[3][3] = {
        //inicialização dos elementos
        {"João", "Pt: 10", "Mat: 8"},
        {"Guilherme", "Pt: 5", "Mat: 6"},
        {"Ricardo", "Pt: 8", "Mat: 9"}
    };

    printf("Para acessar as notas dos alunos, digite o número do aluno: \n");
    printf("Para a nota do João, digite: 0\n");
    printf("Para a nota do Guilherme, digite: 1\n");
    printf("Para a nota do Ricardo, digite: 2\n");
    printf("Digite um número: ");
    
    scanf("%d", &index);

    //acessando os elementos 
    printf("\nAs notas do aluno %s são: %s , %s \n\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
}