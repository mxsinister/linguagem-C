#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50];
    char palavra2[50];
    char palavra3[50];
    int enter;

    printf("Insira uma palavra: ");
    fgets(palavra1, 50, stdin);
    enter = (strcspn(palavra1, "\n"));
    palavra1[enter] = '\0';

    printf("Insira a segunda palavra: ");
    fgets(palavra2, 50, stdin);
    enter = (strcspn(palavra2, "\n"));
    palavra2[enter] = '\0';

    printf("Insira a terceira palavra: ");
    fgets(palavra3, 50, stdin);
    enter = (strcspn(palavra3, "\n"));
    palavra3[enter] = '\0';

    printf("%s\n", palavra3);
    printf("%s\n", palavra2);
    printf("%s\n", palavra1);
    return 0;
}