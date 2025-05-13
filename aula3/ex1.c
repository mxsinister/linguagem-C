#include <stdio.h>

int main(){
    int nasc;
    int ano;
    int idade;
    
    printf("digite o ano do seu nascimento: ");
    scanf("%d", &nasc);

    printf("\ndigite o ano atual: ");
    scanf("%d", &ano);

    idade = (ano - nasc);

    if (idade >= 18) {
        printf ("voce completa %d anos em %d e portanto podera tirar sua habilitacao\n", idade, ano);
    }
    else {
        printf ("voce completa %d anos em %d e portanto nao podera tirar sua habilitacao\n", idade, ano);
    }

    return 0;
}