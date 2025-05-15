#include <stdio.h>

int main(){
    int qtdPar = 0, qtdImpar = 0, numero = -1;

    while (numero != 0){
        printf("\ninsira um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0 && numero != 0) {
            qtdPar++;
        }
        else if (numero % 2 != 0 && numero != 0){
            qtdImpar++;
        }
    }
    printf("Quantidade de pares: %d\n", qtdPar);
    printf("Quantidade de impares: %d", qtdImpar);

    return 0;
}