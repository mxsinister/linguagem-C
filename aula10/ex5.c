#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char cargo[50];
    struct {
        char rua[50];
        char cidade[50];
        int numero;
    }endereco;
} funcionario;

int main(){
    int enter;
    funcionario funcionarios[2];

    printf("--- CADASTRO ---\n");

    for (int i = 0; i != 2 ; i++){
        printf("Nome: ");
        scanf("%49[^\n]", funcionarios[i].nome);
        enter = (strcspn(funcionarios[i].nome, "\n"));
        funcionarios[i].nome[enter] = '\0';
        getchar();

        printf("Cargo: ");
        scanf("%49[^\n]", funcionarios[i].cargo);
        enter = (strcspn(funcionarios[i].cargo, "\n"));
        funcionarios[i].cargo[enter] = '\0';
        getchar();

        printf("Rua: ");
        scanf("%49[^\n]", funcionarios[i].endereco.rua);
        enter = (strcspn(funcionarios[i].endereco.rua, "\n"));
        funcionarios[i].endereco.rua[enter] = '\0';
        getchar();

        printf("Numero: ");
        scanf("%d", &funcionarios[i].endereco.numero);
        getchar();

        printf("Cidade: ");
        scanf("%49[^\n]", funcionarios[i].endereco.cidade);
        enter = (strcspn(funcionarios[i].endereco.cidade, "\n"));
        funcionarios[i].endereco.cidade[enter] = '\0';
        printf("\n");
        getchar();
    }
    printf("\n------------ DADOS FUNCIONARIOS ------------\n");

    for (int i = 0; i != 2 ; i++){
        printf ("\nfuncionario %d\n", i+1);
        printf("\nNome: %s", funcionarios[i].nome);

        printf("\nCargo: %s", funcionarios[i].cargo);

        printf("\nRua: %s", funcionarios[i].endereco.rua);

        printf("\nNumero: %d", funcionarios[i].endereco.numero);

        printf("\nCidade: %s \n", funcionarios[i].endereco.cidade);
    }

}