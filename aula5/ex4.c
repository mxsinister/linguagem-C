#include <stdio.h>

int ehBissexto(int ano){
    if (ano % 4 == 0 && ano % 100 != 0){
        return 1;
    }
    else if (ano % 400 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int ano;
    do{
        printf ("Insira o ano: ");
        scanf("%d", &ano);
        //ehBissexto (ano) == 1 ? printf("O ano %d eh bissexto\n", ano) : printf("O ano %d nao eh bissexto\n", ano);
        //optei pelo else/if pq ele ainda estava imprimindo "nao eh bissexto" quando colocava -1 
        if (ano == -1) {printf ("Encerrando programa");}
        else if (ehBissexto (ano) == 1) {printf("O ano %d eh bissexto\n", ano);}
        else if (ehBissexto (ano) == 0) {printf("O ano %d nao eh bissexto\n", ano);}
    }while (ano != -1);

}