#include <stdio.h>

void ateN(int n3, int n4, int n1, int n2){
    if (n3 <= n2){
        n4 = n4 + n1;
        n3++;
        ateN(n3, n4, n1, n2);}
    else{
        printf("O resultado dessa multiplicacao eh %d", n4);
    }
}

int main(){
    int n1, n2;
    printf("Insira o valor de a: ");
    scanf("%d", &n1);
    printf("Insira o valor de b: ");
    scanf("%d", &n2);

    ateN (2, n1, n1, n2);
    return 0;
}