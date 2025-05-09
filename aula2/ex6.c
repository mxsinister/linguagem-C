#include <stdio.h>

float v1;
//float v2;
//percebi que so precisava de uma variavel



int main(){
    printf("\nInsira um numero: ");
    scanf("%f", &v1);

    //v2 = v1 * 0.9;
    printf ("Valor com 10%% de desconto: R$%.2f\n", (v1 * 0.9));
    printf ("Valor de cada parcela em 3 vezes sem juros: R$%.2f\n", (v1 / 3));
    printf ("Comissao do vendedor (a vista): R$%.2F\n", ((v1 * 0.9)*0.05));
    printf ("Comissao do vendedor (parcelado): R$%.2f\n", (v1 * 0.05));
    return 0;
}