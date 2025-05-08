#include <stdio.h>

int main() {
    char nome[20];
    float nota1;
    float nota2;

    printf("\nInsira seu nome: ");
    scanf("%s", nome);

    printf("\nInsira sua primeira nota: ");
    scanf("%f", &nota1);

    printf("\nInsira sua segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    printf ("O aluno %s ", nome);
    printf ("obteve como media final  %.2f", media);
}