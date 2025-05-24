#include <stdio.h>

void ateN(int n2, int n1){
    if (n1 > n2){
        printf("%d, ", n1);
        n1--;
        ateN(n2, n1);}
    else if (n1 == n2){
        printf("%d.", n1);}
    else if (n1 < 1){
        printf("Insira um numero maior que 1.");
    }
}

int main(){
    int n1;
    printf("Insira o numero: ");
    scanf("%d", &n1);
    printf("Contando: ");
    ateN (1, n1);
    return 0;
}