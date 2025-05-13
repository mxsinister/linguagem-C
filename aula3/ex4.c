#include <stdio.h>

int main(){
    float n1;
    float n2;
    int operador;

    printf ("insira o primeiro numero: ");
    scanf ("%f", &n1);

    printf ("\ninsira o segundo numero: ");
    scanf ("%f", &n2);

    printf ("\nescolha a operacao a ser realizada \ninsira [1] para [adicao]\ninsira [2] para [subtracao]\ninsira [3] para [multiplicacao]\ninsira [4] para [divisao]\noperacao: ");
    scanf ("%d", &operador);


    switch (operador)
    {
    case 1:
        printf ("o resultado e: %f", n1 + n2);
        break;
    case 2:
        printf ("o resultado e: %f", n1 - n2);
        break;
    case 3:
        printf ("o resultado e: %f", n1 * n2);
        break;
    case 4:
        if (n2 == 0) {printf ("divisor 0! essa operacao e impossivel.");}
        else {printf ("o resultado e: %f", n1 / n2);}
        break;
    default:
        printf ("Operacao invalida!");
    }
}