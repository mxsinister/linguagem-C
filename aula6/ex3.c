#include <stdio.h>

void ateN(int n3, int n1, int n2){
    if (n1 <= n2){
        n3 = n3 + n1;
        n1++;
        ateN(n3, n1, n2);}
    else{
        printf("A soma dos %d primeiros numeros naturais e %d", n2, n3);
    }
}

int main(){
    int n2;
    printf("Insira o numero: ");
    scanf("%d", &n2);

    ateN (0, 0, n2);
    return 0;
}