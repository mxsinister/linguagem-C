#include <stdio.h>
#include <string.h>

int ehPalindromo(char palavra[], int enter){
    char arvalap[enter];
    for (int i = enter -1, j = 0; i >= 0; i--, j++){
        arvalap[j] = palavra[i];
    }
    arvalap[enter] = '\0';
    int igual = (strcmp (palavra, arvalap));
    return igual;
}


int main(){
    char palavra[50];
    
    printf("Insira uma palavra: ");

    fgets(palavra, 50, stdin);
    int enter = (strcspn(palavra, "\n"));
    palavra[enter] = '\0';

    ehPalindromo(palavra, enter) == 0 ? printf("Eh palindromo") : printf("Nao eh palindromo");

}