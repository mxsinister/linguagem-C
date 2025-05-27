#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        int numero;

        printf("digite o valor %d: ", i);
        scanf("%d", &numero);

        numeros[i] = numero;

        soma = soma + numero;
    }
    printf("A soma dos numeros eh %d\n", soma);
    return 0;
}