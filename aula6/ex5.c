#include <stdio.h>

void numeros(int par, int impar, int positivos, int negativos){
    int num;
    printf ("Insira um numero: ");
    scanf ("%d", &num);

    if (num == 0){
        printf("Numeros pares: %d\nNumeros impares: %d\nNumeros positivos: %d\nNumeros negativos: %d", par, impar, positivos, negativos);
        return;
    }

    num % 2 == 0 ? par++ : impar++;
    num > 0 ? positivos++ : negativos++;
    
    numeros(par, impar, positivos, negativos);
}

int main(){
    numeros(0, 0, 0, 0);
}