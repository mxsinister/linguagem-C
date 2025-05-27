#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void criarConta();
void exibirConta();
void depositar();
void sacar();
void buscarConta();
void sair();

void mostrarMenu(){
    int escolha;
    printf("===== SISTEMA BANCARIO =====\n0 - Sair\n1 - Criar Conta\n2 - Exibir Contas\n3 - Depositar\n4 - Sacar\n5 - Buscar Conta\n=============================");
    printf("\nEscolha uma opcao: ");
    scanf ("%d", &escolha);
    switch (escolha) {
        case 0:
            sair();
            break;
        case 1:
            criarConta();
            break;
        case 2:
            exibirConta();
            break;
        case 3:
            depositar();
            break;
        case 4:
            sacar();
            break;
        case 5:
            buscarConta();
            break;
        default:
            printf("Opcao invalida. Tente novamente.");
            Sleep(2750);
            system("cls");
        }
}

int main(){
    mostrarMenu();
}

    /*do{
        printf("===== SISTEMA BANCARIO =====\n0 - Sair\n1 - Criar Conta\n2 - Exibir Contas\n3 - Depositar\n4 - Sacar\n5 - Buscar Conta\n=============================");
        printf("\nEscolha uma opçao: ");
        scanf ("%d", &escolha);

        
}*/

void criarConta() {
    printf("Opcao Criar Conta selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
    mostrarMenu();
}

void exibirConta() {
    printf("Opcao Exibir Contas selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
    mostrarMenu();
}

void depositar() {
    printf("Opcao Depositar selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
    mostrarMenu();
}

void sacar() {
    printf("Opcao Sacar selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
    mostrarMenu();
}

void buscarConta() {
    printf("Opcao Buscar Conta selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
    mostrarMenu();
}

void sair(){
    printf("Saindo do sistema.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
}