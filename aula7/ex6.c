#include <stdio.h>
#include <stdlib.h>

int contarRepet(int array[]){
    int maisRepetido, conta;
    int conta2 = 0;
    for (int i = 0; i < 10; i++) {
        conta = 0;

        for(int j = i+1; j < 10; j++){
            if (array[j] == array[i]){
                conta++;

                if (conta > conta2){
                    conta2 = conta;
                    maisRepetido = array[j];
                }
            }
        }
    }
    return maisRepetido;
}

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        int numero;

        printf("digite o numero [%d]: ", i);
        scanf("%d", &numero);

        numeros[i] = numero;
    }

    int maisRepetido = contarRepet(numeros);

    printf("Numero mais repetido: %d", maisRepetido);
  
    return 0;
}

