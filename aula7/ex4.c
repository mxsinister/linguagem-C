#include <stdio.h>
#include <stdlib.h>

int main() {

    float notas[10];
    float media = 0;
    float nota;
    int acima = 0;

    for (int i = 0; i < 10; i++) {
        printf("digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);

        notas[i] = nota;
        media += notas[i];
        
    }
    media = media / 10;

    for (int i = 0; i < 10; i++) {
        if (notas[i] > media){
            acima++;
        }
    }
    printf ("Media das notas: %.2f\n", media);
    printf("Quantidade de notas acima da media: %d\n", acima);
    printf("Notas acima da media:");

    for (int i = 0; i < 10; i++) {
        if (notas[i] > media){
            printf("\n- %.2f", notas[i]);
        }
    }



}

//terminar