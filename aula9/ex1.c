#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50];
    int tamanho;
    int enter;
    
    printf("Insira uma palavra: ");

    fgets(palavra, 50, stdin);
    enter = (strcspn(palavra, "\n"));
    palavra[enter] = '\0';

    tamanho = strlen(palavra);
    if (tamanho > 5 && tamanho <= 8){
        printf ("Palavra pequena");
    }
    else if (tamanho > 8 && tamanho <= 15){
        printf ("Palavra media");
    }
    else if (tamanho > 15){
        printf ("Palavra longa");
    }
    return 0;

}