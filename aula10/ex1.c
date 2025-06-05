#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
};

int main(){
    int enter = 0;

    printf ("------- CADASTRO -------\n");
    printf("Digite seu nome: ");

    struct pessoa pessoa1;
    
    fgets(pessoa1.nome, 50, stdin);
    enter = (strcspn(pessoa1.nome, "\n"));
    pessoa1.nome[enter] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);

    printf("---- DADOS ----\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos", pessoa1.idade);

}