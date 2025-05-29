#include <stdio.h>

int main(){
    int numeros[3][3];
    int busca = 0;
    int achado = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++) {
            printf("insira o valor do numero [%d] [%d]: ", i, j);
            scanf("%d", &numeros[i][j]);
        }
        printf("\n");
    }

    printf ("digite o numero que voce deseja buscar: ");
    scanf ("%d", &busca);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++) {
            if (numeros[i][j] == busca) {
                achado = 1;
                printf("Numero encontrado na posicao [%d] [%d]", i, j);
            }
        }
    }

    
    if (achado == 0){
        printf("Numero nao encontrado no vetor.");
    }
    return 0;
}

/*
printf("Numero encontrado na posicao [%d]", i, j);
int achado = 1;
        */