#include <stdio.h>

int main(){
    int numeros[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++) {
            printf("insira o numero [%d] [%d]: ", i, j);
            scanf("%d", &numeros[i][j]);
        }
        printf("\n");
    }
    int maior = numeros[0][0];
    int menor = numeros[0][0];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++) {
            if (numeros[i][j] > maior){
                maior = numeros[i][j];}

            if (menor > numeros [i][j]){
                menor = numeros[i][j];}
            
        }
        printf("\n");
    }
    printf("O maior numero da matriz e: %d\nO menor numero da matriz e: %d", maior, menor);

}