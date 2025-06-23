#include <stdio.h>
#include <stdlib.h>

int main() {
    float *mem;
    int quantidade;

    printf("Quantos números reais deseja armazenar? ");
    scanf("%d", &quantidade);

    mem = (float*) calloc(quantidade, sizeof(float));
    if (mem == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("\nValores iniciais:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%.2f ", mem[i]);
    }

    printf("\n\nInsira os novos valores:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &mem[i]);
    }

    printf("\nValores atualizados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%.2f ", mem[i]);
    }
    printf("\n");

    free(mem);
    return 0;
}
