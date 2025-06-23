#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nome[100];
    char comentario[500];

    arquivo = fopen("comentarios.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    printf("Digite \"FIM\" a qualquer momento para encerrar o programa");
    while (1) {
        printf("\nNome do autor: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;

        if (strcmp(nome, "FIM") == 0) {break;}

        printf("Comentario: ");
        fgets(comentario, sizeof(comentario), stdin);
        comentario[strcspn(comentario, "\n")] = 0;

        if (strcmp(comentario, "FIM") == 0) {break;}

        fprintf(arquivo, "Autor: %s\n", nome);
        fprintf(arquivo, "Comentario: %s\n", comentario);
        fprintf(arquivo, "--------------------------\n");
    }

    fclose(arquivo);
    printf("Comentarios salvos com sucesso!\n");

    return 0;
}
