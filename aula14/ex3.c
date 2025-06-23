#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int inicial, atualizado;

    printf("Insira o tamanho inicial do vetor: ");
    scanf("%d", &inicial);

    vetor = (int*) malloc(inicial * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite os %d numeros:", inicial);
    for (int i = 0; i < inicial; i++) {
        printf("\n%d° numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Novo tamanho desejado: ");
    scanf("%d", &atualizado);

    vetor = (int*) realloc(vetor, atualizado * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao realocar memoria.\n");
        return 1;
    }

    if (atualizado > inicial) {
        printf("Digite os %d novos numeros:", atualizado - inicial);
        for (int i = inicial; i < atualizado; i++) {
            printf("\n%dº numero", i + 1);
            scanf("%d", &vetor[i]);
        }
    }

    printf("\nVetor final:\n");
    for (int i = 0; i < atualizado; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");


    free(vetor);
    return 0;
}
