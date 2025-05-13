#include <stdio.h>

int main(){
    int idade;
    printf("qual a sua idade? ");
    scanf("%d", &idade);

    if (idade >= 13 && idade <= 17) {
        printf ("Voce e um adolescente");
    }
    else if (idade >= 18 && idade <= 64){
        printf ("Voce e um adulto");
    }
    else if (idade >= 65){
        printf ("Voce e um idoso");
    }
    else if (idade < 0){
        printf ("Idade invalida! tente novamente.");
    }
    else{
        printf ("Voce e uma crianca");
    }
    return 0;
}