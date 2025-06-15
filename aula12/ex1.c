#include <stdio.h>

void substituir(int *valor1, int valor2){
    *valor1 = valor2;
}

int main(){


    int valor1, valor2;

    printf("Digite o valor original: ");
    scanf("%d", &valor1);
     
    printf("Digite o novo valor: ");
    scanf("%d", &valor2);
    
    printf("Valor original: %d\n", valor1);

    substituir(&valor1, valor2);

    printf("Valor modificado: %d\n", valor1);
    return 0;
 }