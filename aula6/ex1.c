#include <stdio.h>

void ateN(int n1, int n2){
    if (n1 < n2){
        printf("%d, ", n1);
        n1++;
        ateN(n1, n2);}
    else if (n1 == n2){
        printf("%d.", n1);}
    else if (n2 < 1){
        printf("Insira um numero maior que 1.");
    }
}

int main(){
    int n2;
    printf("Insira o numero: ");
    scanf("%d", &n2);
    printf("Contando: ");
    ateN (1, n2);
    return 0;
}