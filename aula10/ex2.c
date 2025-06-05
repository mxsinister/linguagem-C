#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[50];
    float nota;
};
int main(){
    int quantidade;
    float media;

    printf ("Quantos alunos você deseja cadastrar? ");
    scanf ("%d", &quantidade);
    getchar();

    if (quantidade <= 0){
        printf("Encerrando programa.");
    }
    else{
        struct aluno alunos[quantidade];

        for (int i = 0; i < quantidade; i++){
            printf("\nNome: ");
            scanf("%49[^\n]", alunos[i].nome);
            getchar();

            printf("Nota: ");
            scanf("%f", &alunos[i].nota);
            getchar();

            media += alunos[i].nota;
        }
        media = media / quantidade;
        printf("\nA media geral eh %.2f", media);
    }

}