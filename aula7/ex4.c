#include <stdio.h>
#include <stdlib.h>

int main() {

    float notas[10];
    float soma = 0;
    float media = 0;
    float nota;

    for (int i = 0; i < 10; i++) {
        printf("digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);

        notas[i] = nota
        ;
    }

    for (int i = 0; i < 10; i++) {
        soma += notas[i];
    }
    media = soma / 10;

    for (int i = 0; i < 10; i++) {
        printf("Nota do aluno %d: %.2f\n", i+1, notas[i]);
        if notas[i] > acima
    }
    printf ("Media das notas = %.2f", media);

}

//terminar