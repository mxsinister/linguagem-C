#include <stdio.h>
#include <string.h>

typedef struct pessoa{
    char nome[50];
    int idade;
} pessoa;

int main() {
    pessoa usuario;

    printf("Qual seu nome? ");
    scanf("%49[^\n]", usuario.nome);

    printf("Qual a sua idade? ");
    scanf("%d", &usuario.idade);

    printf("Seja bem vindo(a), %s!\nSeus dados:\nNome: %s\nIdade: %d", usuario.nome, usuario.nome, usuario.idade);
}