#include <stdio.h>

int n1;


int main(){
    printf("\nInsira um numero: ");
    scanf("%d", &n1);

    (n1 % 2) == 0 ? printf("\nO numero inserido e par.") : printf("\nO numero inserido e impar.");

    return 0;
}