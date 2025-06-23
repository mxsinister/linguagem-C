#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char linha[100];

    arquivo = fopen(".\\notas.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;}

    printf("Notas dos alunos: \n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {printf("%s", linha);}

    fclose(arquivo);
    return 0;
}