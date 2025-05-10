//calculando o aumento do salário 
#include <stdio.h>
int main(){
    float salario = 4.600;
    float novoSalario;

    float salarioAumento = salario * 0.25;
    novoSalario = salario + salarioAumento;
    printf("%f", novoSalario);
}