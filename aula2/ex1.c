#include <stdio.h>

int main() {
    int idade;
    float altura;
    char genero;
    char nome[20];
    
    printf("\nInsira sua idade: ");
    scanf("%d", &idade);

    printf("\nInsira sua altura em metros: ");
    scanf("%f", &altura);

    printf("\nInsira seu genero (M/F): ");
    scanf(" %c", &genero);

    printf("\nInsira seu nome: ");
    scanf("%s", nome);

    printf("Ola, %s\n", nome);
    printf("esse e o seu perfil:\n");
    printf("\nNome: %s\n", nome);
    printf("Idade: %d \n", idade);
    printf("Altura: %.2f \n", altura);
    printf("Genero: %c\n", genero);
    return 0;
}