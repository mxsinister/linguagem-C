#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *origem, *destino;
    char linha[1024];

    origem = fopen("origem.txt", "r");
    
    if (origem == NULL) {
        printf("Erro ao abrir 'origem.txt'!.\n");
        return 1;
    }

    destino = fopen("destino.txt", "w");

    if (destino == NULL) {
        printf("Erro ao abrir 'destino.txt'!\n");
        fclose(origem);
        return 2;
    }

    while (fgets(linha, sizeof(linha), origem) != NULL) {
        fputs(linha, destino);
    }

    fclose(origem);
    fclose(destino);

    printf("Arquivo copiado com sucesso!\n");
    return 0;
}