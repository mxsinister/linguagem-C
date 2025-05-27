#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[10];
    int maior = 0, menor;
    //int maior1 = 0;
    //int maior2;
    //int menor1 = 0;
    //int menor2 = 0;


    for (int i = 0; i < 10; i++) {
        int numero;

        printf("digite o numero [%d]: ", i);
        scanf("%d", &numero);

        numeros[i] = numero;
    }

    //maior2 = numeros[2];

    menor = numeros[0];

    for (int i = 0; i < 10; i++) {

        if (numeros[i] > maior){
            maior = numeros [i];
        }
        if (numeros[i] < menor){
            menor = numeros [i];
        }
    }
    printf("o maior numero eh %d\no menor numero eh %d", maior, menor);
    return 0;
}