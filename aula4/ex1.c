#include <stdio.h>

int main(){
    int cmcIntervalo;
    int fimIntervalo;

    printf("Qual o comeco do intervalo? ");
    scanf("%d", &cmcIntervalo);

    printf("Qual o fim do intervalo? ");
    scanf("%d", &fimIntervalo);

    for (int contador = cmcIntervalo; contador < fimIntervalo +1; contador++) {
        printf ("Contando: %d\n", contador);
    }
    return 0;
}