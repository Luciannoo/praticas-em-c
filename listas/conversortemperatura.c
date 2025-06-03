#include <stdio.h>
int main(){
    float grauCelcius, grauFahrenheit, grauKelvin;

    printf("Digite uma temperatura em Celcius: \n");
    scanf("%f", &grauCelcius);

    //aplicando a fórmula de C para F
    grauFahrenheit = (grauCelcius * 9/5) + 32;

    //aplicando a fórmula de C para K
    grauKelvin = grauCelcius + 273.15;
    
    printf("Temperatura em Fahrenheit: %.2f\n", grauFahrenheit);

    printf("Temperatura em Kelvin: %.2f\n", grauKelvin);

}