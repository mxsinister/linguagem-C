#include <stdio.h>
#include <string.h>

int ehPalindromo(char palavra[], int enter){
    enter = strlen(palavra);
    char arvalap[enter];
    for (int i = enter, j = 0; i > 0; i--, j++){
        arvalap[j] = palavra[i];
    }
    int igual = (strcmp (palavra, arvalap));
    return igual;
}


int main(){
    char palavra[50];
    int enter;
    
    printf("Insira uma palavra: ");

    fgets(palavra, 50, stdin);
    enter = (strcspn(palavra, "\n"));
    palavra[enter] = '\0';

    printf (ehPalindromo(palavra, enter));

}