#include <stdio.h>

void trocar(int *valor1, int *valor2){
    int valortemp = *valor1;
    *valor1 = *valor2;
    *valor2 = valortemp;
}

int main(){
    int valor1, valor2;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);
     
    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    trocar(&valor1, &valor2);
    
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);

    return 0;
 }