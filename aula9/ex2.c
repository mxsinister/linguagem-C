#include <stdio.h>
#include <string.h>

int main(){
    char frase1[50];
    char frase2[50];
    int enter;
    int igual;

    printf("Insira uma frase: ");
    fgets(frase1, 50, stdin);
    enter = (strcspn(frase1, "\n"));
    frase1[enter] = '\0';

    printf("Insira outra frase: ");
    fgets(frase2, 50, stdin);
    enter = (strcspn(frase2, "\n"));
    frase2[enter] = '\0';

    igual = (strcmp(frase1, frase2));

    igual == 0 ? printf("As duas frases sao iguais.") : printf("As frases sao diferentes.");
}