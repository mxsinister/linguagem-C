#include <stdio.h>
#include <string.h>

int main(){
    char frase1[50];
    char frase2[50];
    int enter;
    char fraseCombinada[101] = "";

    printf("Insira uma frase: ");
    fgets(frase1, 50, stdin);
    enter = (strcspn(frase1, "\n"));
    frase1[enter] = '\0';

    printf("Insira outra frase: ");
    fgets(frase2, 50, stdin);
    enter = (strcspn(frase2, "\n"));
    frase2[enter] = '\0';
    
    strcat(fraseCombinada, frase1);
    strcat(fraseCombinada, frase2);

    printf("%s", fraseCombinada);
}