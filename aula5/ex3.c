#include <stdio.h>

void situacaoAluno (float media, int faltas){
    if (media >= 9.5 && faltas <= 10){
        printf ("Situacao: APROVADO COM LOUVOR");
    }
    else if (media >= 7.0 && faltas <= 10){
        printf ("Situacao: APROVADO");
    }
    else{
        printf("Situacao: REPROVADO");
    }
}

int main(){
    float media;
    int faltas;

    printf("Insira a sua media de notas: ");
    scanf("%f", &media);
    printf("Insira sua quantidade de faltas: ");
    scanf("%d", &faltas);
    situacaoAluno(media, faltas);
}