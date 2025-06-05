#include <stdio.h>
#include <string.h>

typedef struct pessoa{
    char nome[50];
    int idade;
} pessoa;

int main() {
    pessoa usuario;

    printf("Qual seu nome? ");
    scanf("%s", usuario.nome);

    printf("Qual a sua idade? ");
    scanf("%d", usuario.idade);
}