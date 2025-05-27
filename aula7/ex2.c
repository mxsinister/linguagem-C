#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[10];


    for (int i = 0; i < 10; i++) {
        int numero;

        printf("digite o numero [%d]: ", i);
        scanf("%d", &numero);

        numeros[i] = numero;
    }

    for (int i = 9; i > -1; i--) {

    printf("Numero [%d]: %d\n", i, numeros[i]);

    }
    return 0;
}