#include <stdio.h>
#include <stdlib.h>

int main() {

    int numeros[10];
    int busca = 0;
    int achado = 0;

    for (int i = 0; i < 10; i++) {
        int numero;

        printf("digite o numero [%d]: ", i);
        scanf("%d", &numero);

        numeros[i] = numero;
    }

    printf ("digite o numero que voce deseja buscar: ");
    scanf ("%d", &busca);

    for (int i = 0; i < 10; i++) {

        if (numeros[i] == busca){
            printf("Numero encontrado na posicao %d", i);
            int achado = 1;
        }
    }
    
    if (achado == 0){
        printf("Numero nao encontrado no vetor.");}
    return 0;
}