#include <stdio.h>

void calculadora(float *valor1, float *valor2, float *resultadoS, float *resultadoM){
    *resultadoS = *valor1 + *valor2;
    *resultadoM = *valor1 * *valor2;

}

int main(){
    float valor1, valor2, resultadoS, resultadoM;

    printf("Digite o valor 1: ");
    scanf("%f", &valor1);
     
    printf("Digite o valor 2: ");
    scanf("%f", &valor2);

    calculadora(&valor1, &valor2, &resultadoS, &resultadoM);

    printf("Soma: %.2f\n", resultadoS);
    printf("Multiplicação: %.2f", resultadoM);
    
    return 0;
 }