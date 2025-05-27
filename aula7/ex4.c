#include <stdio.h>
#include <stdlib.h>

int main() {

    float notas[10];
    float media = 0;

    for (int i = 0; i < 10; i++) {
        int numero;

        printf("digite a nota do aluno %d: ", i + 1);
        scanf("%d", &numero);

        notas[i] = numero;
    }
    for (int i = 0; i < 10; i++) {
        media = media + notas[1];
    }
    media = media / 10;
    //terminar


}