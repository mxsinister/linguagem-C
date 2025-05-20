#include <stdio.h>


float arearetangulo(float base, float altura) {
    return base * altura;
}


int main(){
    float base, altura;
    printf("Insira a base do retangulo: ");
    scanf("%f", &base);
    printf("insira a altura do retangulo: ");
    scanf("%f", &altura);
    
    float area = arearetangulo(base, altura);
    printf("A area do retangulo e %.2f", area);
    return 0;
}

