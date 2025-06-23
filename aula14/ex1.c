#include <stdio.h>
#include <stdlib.h>

int main() {
    int *mem;
    int quantidade;

    printf("Quantos numeros deseja armazenar? ");
    scanf("%d", &quantidade);

    mem = (int*) malloc(quantidade * sizeof(int));
    if (mem == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Digite o %dº nomero: ", i + 1);
        scanf("%d", &mem[i]);
    }

    printf("\nNumeros informados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%dº numero: %d\n", i+1, mem[i]);
    }
    printf("\n");

    free(mem);
    return 0;
}