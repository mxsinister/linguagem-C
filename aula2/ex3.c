#include <stdio.h>

int main() {
    char nome[90];
    float peso;
    float altura;

    printf("\nInsira seu nome: ");
    scanf("%s", nome);

    printf("\nInsira seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("\nInsira sua altura em metros: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("Ola %s ", nome);
    printf("o seu IMC e de %.2f", imc);

}