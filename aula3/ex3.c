#include <stdio.h>

int main() {
    float peso;
    float altura;

    printf("\nInsira seu peso em quilogramas: ");
    scanf("%f", &peso);

    printf("\nInsira sua altura em metros: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("o seu IMC e de %.2f.\n", imc);

    if (imc < 18.5) {printf ("voce esta abaixo do peso.");}
    else if (imc >= 18.5 && imc <= 24.9) {printf ("voce tem o peso normal.");}
    else if (imc >= 25 && imc <= 29.9) {printf ("voce tem sobrepeso.");}
    else if (imc >= 30 && imc <= 34.9) {printf ("voce tem obesidade grau 1.");}
    else if (imc >= 35 && imc <= 39.9) {printf ("voce tem obesidade grau 2.");}
    else {printf("voce tem obesidade grau 3");};

    return 0;
}