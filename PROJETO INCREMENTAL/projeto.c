#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int escolha = -1;
    do{
        printf("===== SISTEMA BANCÁRIO =====\n0 - Sair\n1 - Criar Conta\n2 - Exibir Contas\n3 - Depositar\n4 - Sacar\n5 - Buscar Conta\n=============================");
        printf("\nEscolha uma opção: ");
        scanf ("%d", &escolha);

        switch (escolha) {
            case 0:
                printf("Saindo do sistema.");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(750);
                system("cls");
                break;
            case 1:
                printf("Opção Criar Conta selecionada.");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(750);
                system("cls");
                break;
            case 2:
                printf("Opção Exibir Contas selecionada.");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(750);
                system("cls");
                break;
            case 3:
                printf("Opção Depositar selecionada.");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(750);
                system("cls");
                break;
            case 4:
                printf("Opção Sacar selecionada.");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(750);
                system("cls");
                break;
            case 5:
                printf("Opção Buscar Conta selecionada.");
                Sleep(1000);
                printf(".");
                Sleep(1000);
                printf(".");
                Sleep(750);
                system("cls");
                break;
            default:
                printf("Opção inválida. Tente novamente.");
                Sleep(2750);
                system("cls");
        }
    }while(escolha != 0);
}