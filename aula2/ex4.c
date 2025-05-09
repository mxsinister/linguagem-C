#include <stdio.h>
#include <stdlib.h>

float angulo1;
float angulo2;
float angulo3;

int main() {
    printf ("Ola, esse e um programa para te ajudar a encontrar o terceiro angulo de um triangulo com base nos outros dois angulos.\nPara comecar insira o primeiro angulo: ");
    scanf("%f", &angulo1);
    printf ("Insira agora o segundo angulo: ");
    scanf("%f", &angulo2);
    
    angulo3 = abs((angulo1 + angulo2) - 180);
    printf ("O terceiro angulo do triangulo e %.2f graus", angulo3);
    return 0;
}