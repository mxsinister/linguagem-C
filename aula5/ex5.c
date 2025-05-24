#include <stdio.h>

float somar(float numero1, float numero2){
    return (numero1 + numero2);}
float subtrair(float numero1, float numero2){
    return (numero1 - numero2);}
float multiplicar(float numero1, float numero2){
    return (numero1 * numero2);}
float dividir(float numero1, float numero2){
    if (numero2 == 0){
        printf("Uma divisao por 0 nao e possivel.\n");
        return;
        /*eu ia colocar a verificação no final do main, mas percebi que no exercicio estava escrito para verificar
        dentro da função se era um 0
        talvez eu tenha levado muito no literal, mas de uma forma ou outra está funcionando*/
    }
    else {
        return (numero1 / numero2);}}

int main(){
    float numero1, numero2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("\nEscolha a operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\nOpcao: ");
    scanf("%d", &opcao);


    switch (opcao){
        case 1:
            resultado = somar(numero1, numero2);
            printf("A soma e: %f", resultado);
            break;
        case 2:
            resultado = subtrair(numero1, numero2);
            printf("A subtracao e: %f", resultado);
            break;
        case 3:
            resultado = multiplicar(numero1, numero2);
            printf("A multiplicacao e: %f", resultado);
            break;
        case 4:
            if (numero2 != 0){
                resultado = dividir(numero1, numero2);
                printf("A divisao e: %f", resultado);}
            else {dividir(numero1, numero2);}
            break;
}}