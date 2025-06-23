#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char nome[50], email[50];
    int idade, quantidade;

    printf("Quantos usuarios deseja cadastrar? ");
    scanf("%d", &quantidade);
    getchar();

    arquivo = fopen("usuarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\nUsuario %d:\n", i + 1);
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;

        printf("Idade: ");
        scanf("%d", &idade);
        getchar();

        printf("Email: ");
        fgets(email, sizeof(email), stdin);
        email[strcspn(email, "\n")] = 0;

        fprintf(arquivo, "%s %d %s\n", nome, idade, email);
    }

    fclose(arquivo);

    arquivo = fopen("usuarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;}

    printf("\n--- Usuarios cadastrados ---\n");
    while (fscanf(arquivo, "%s %d %s", nome, &idade, email) == 3) {
        printf("Nome: %s \nIdade: %d \nEmail: %s\n\n", nome, idade, email);}

    fclose(arquivo);
    return 0;
}
