#include <stdio.h>

int main(){
    int numero;
    int somaPares = 0;

    printf("Escolha um numero: ");
    scanf("%d", &numero);

    for (int contador = 1; contador <= numero; contador++) {
        if (contador % 2 == 0){
            somaPares = somaPares + contador;
        }
    }
    printf("\nos numeros pares somam %d", somaPares);

    return 0;
}