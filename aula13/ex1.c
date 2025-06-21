#include <stdio.h>

int main(){
    char c;
    int caracteres = 0;

    FILE *arquivo = fopen("../arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;}

    while ((c = fgetc(arquivo)) != EOF) {
        caracteres++;
    }
    fclose(arquivo);

    printf("Total de caracteres: %d", caracteres);

    return 0;
}