#include <stdio.h>

int main(){
    int senha = 1703;
    int inserida = 0;
    do{
        printf("\nDigite a senha: ");
        scanf ("%d", &inserida);
        if (inserida != senha){printf("Senha incorreta. Tente novamente.");}
    } while (inserida != senha);
    if (inserida == senha) {printf("Senha correta. Liberando acesso.");}
    return 0;
}
