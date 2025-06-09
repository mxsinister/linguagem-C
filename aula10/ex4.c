#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
} produto;

int buscarProduto(produto produtos[], int quantidade, char nomeBusca[]) {
    for (int i = 0; i < quantidade; i++) {
        if (strcasecmp(produtos[i].nome, nomeBusca) == 0) {
            return i;
        }
    }
    return -1;
}


int main(){
    produto produtos[3];
    char nomeBusca[50];
    int indice, enter;

    printf("--- CADASTRO ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Produto %d\n", i + 1);
        printf("Nome: ");

        scanf("%49[^\n]", produtos[i].nome);
        enter = (strcspn(produtos[i].nome, "\n"));
        produtos[i].nome[enter] = '\0';

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        getchar();
        printf("\n");
    }
    printf("Voce deseja procurar qual produto? ");
    scanf("%49[^\n]", nomeBusca);

    enter = (strcspn(nomeBusca, "\n"));
    nomeBusca[enter] = '\0';

    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';  // Remove \n

    indice = buscarProduto(produtos, 3, nomeBusca);

    indice != -1 ? printf("O produto %s custa R$ %.2f.\n", produtos[indice].nome, produtos[indice].preco) : printf("Produto não encontrado.\n");
    
    return 0;
}