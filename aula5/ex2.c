#include <stdio.h>
#include <stdlib.h>

void mensagempersonalizada(char nome[999], int idade){
    printf ("Ola, %s! vc tem %d anos.", nome, idade);
}

int main(){
    char nome[999];
    int idade;

    printf("Insira seu nome: ");
    scanf("%s", &nome);

    printf("Insira sua idade: ");
    scanf("%d", &idade);
    
    mensagempersonalizada(nome, idade);

    return 0;
}