#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

#define maxContas 100

int ids = 1001;
int totalContas = 0;

typedef struct{
  char nome[50];
  int endereco;
  float saldo;  
} conta;

conta contas[maxContas];

int contaExiste(int numero){

    if (totalContas == 0){
        printf ("Nenhuma conta cadastrada.\n");
        return -2;
    }

    for (int i = 0; i < totalContas ; i++){
        if (contas[i].endereco == numero){
            return i;
        }
    }
    return -1;
}

void criarConta(contas);
void exibirConta(contas);
void depositar(contas);
void sacar(contas);
void buscarConta(contas);
void sair();
void transferir(contas);
void deletarConta(contas);

void mostrarMenu(){
    int escolha;
    printf("===== SISTEMA BANC�RIO =====\n0 - Sair\n1 - Criar Conta\n2 - Exibir Contas\n3 - Depositar\n4 - Sacar\n5 - Buscar Conta\n=============================");
    printf("\nEscolha uma op��o: ");
    scanf ("%d", &escolha);
    switch (escolha) {
        case 0:
            sair();
            break;
        case 1:
            criarConta(contas);
            break;
        case 2:
            exibirConta(contas);
            break;
        case 3:
            depositar(contas);
            break;
        case 4:
            sacar(contas);
            break;
        case 5:
            buscarConta(contas);
            break;
        case 6:
            transferir(contas);
            break;
        case 7:
            deletar(contas);
        default:
            printf("Opcao invalida. Tente novamente.");
            Sleep(2750);
            system("cls");
        }
}

int main(){
    setlocale(LC_ALL, "portuguese");

    

    mostrarMenu();
}

void criarConta(conta contas[]) {

    if (totalContas >= maxContas){
        printf("O sistema atingiu seu limite de contas.");
        return;
    }
    printf("Op��o Criar Conta selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");

    printf("--------CADASTRO--------\nDigite seu nome: ");
    fgets(contas[totalContas].nome, maxContas, stdin);

    contas[totalContas].nome[strcspn(contas[totalContas].nome, "\n")] = '\0';
    contas[totalContas].endereco = ids;
    contas[totalContas].saldo = 0.0;

    ids++;
    totalContas++;

    printf("Ol�, %s. Sua conta foi criada com sucesso", contas[totalContas].nome);
    printf("--------DADOS---------");
    printf("N�mero: %d", contas[totalContas].endereco);
    printf("Nome: %s", contas[totalContas].nome);
    printf("Saldo: %d", contas[totalContas].saldo);
}

void exibirContas() {
    printf("Op��o Exibir Contas selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
    if (totalContas = 0){
        printf("Nenhuma conta cadastrada.");
        Sleep(2750);
        return;
    }

    for (int i = 0; i < totalContas; i++){
        printf("N�mero: %d", contas[i].endereco);
        printf("Nome: %s", contas[i].nome);
        printf("Nome: %d", contas[i].nome);
    }
}

void depositar(conta contas[]) {
    int numero;

    printf("Op��o Depositar selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
    
    printf("Digite o n�mero da conta: ")/
    scanf("%d", numero);

    int i = contaExiste(numero);

    if (i == -1){
        printf ("Conta n�o encontrada.\n");
        return;
    };

    if (i >= 0){
        float valorDeposito;
        printf("Informe o valor do dep�sito: ");
        scanf("%d", valorDeposito);

        if (valorDeposito<= 0){
            printf ("Valor inv�lido.");
            return;
        }
        
        contas[i].saldo += valorDeposito;}
}

void sacar(conta contas[]) {
    int numero;

    printf("Op��o Sacar selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    printf("Digite o n�mero da conta: ")/
    scanf("%d", numero);

    int i = contaExiste(numero);

    if (i == -1){
        printf ("Conta n�o encontrada.\n");
        return;
    };

    if (i >= 0){
        float valorSaque;
        printf("Informe o valor do saque: ");
        scanf("%f", valorSaque);
        
        if (valorSaque <= 0) {
            printf("Valor do saque inv�lido.\n");
        }
        else{
            if (valorSaque > contas[i].saldo){
                printf("Saldo da conta insuficiente\n");}
            else{
                contas[i].saldo -= valorSaque;
            }
        }
}

void buscarConta(conta contas[]) {
    int numero;

    printf("Op��o Buscar Conta selecionada.");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(750);
    system("cls");
    
    printf("Digite o n�mero da conta");
    scanf("%d", numero);

    int i = contaExiste(contas, numero);

    if (i == -1){
        printf ("Conta n�o encontrada.\n");
    }
    if (i >= 0){
        printf("--------DADOS---------");
        printf("N�mero: %d", contas[i].endereco);
        printf("Nome: %s", contas[i].nome);
        printf("Saldo: %d", contas[i].saldo);
    }
    }
}

void transferir(conta contas[]){
    int numOrigem;
    printf("\nInforme o n�mero da conta de origem: ");
    scanf("%d", &numOrigem);

    int numDestino;
    printf("\nInforme o n�mero da conta de destino: ");
    scanf("%d", &numDestino);

    int indiceOrigem = buscarConta(numOrigem);
    int indiceDestino = buscarConta(numDestino);

    
}

void deletar(conta contas[]){
    int numero;

    printf("Informe o numero da conta: ");
    scanf("%d", numero);

    int indice = contaExiste(contas, numero);

    if (indice == -1){
        printf("Conta n�o encontrada,\n");
        return;
    }
    if (indice >= 0){
        for (int i = indice; i < totalContas - 1; i++){
            strcpy(contas[i].nome, contas[i+1].nome);
            contas[i].endereco = contas[i + 1].endereco;
            contas[i].saldo = contas[i + 1].saldo;
        }
        printf("Conta deletada com sucesso\n");

        strcpy(contas[totalContas - 1].nome, "");
        contas[totalContas - 1].endereco = 0;
        contas[totalContas - 1].saldo = 0;
    }
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