#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


typedef struct {
    int codigo;
    char titulo[50];
    char genero[50];
    int anoLancamento;
} Filme;

void salvarFilmes(Filme *filmes, int n);
int carregarFilmes(Filme **filmes);
void cadastrarFilme(Filme **filmes, int *n, int *capacidade);
void exibirFilmes(Filme *filmes, int n);
void buscarPorCodigo(Filme *filmes, int n, int codigo);
void buscarPorTitulo(Filme *filmes, int n, const char *titulo);
void atualizarFilme(Filme *filmes, int n, int codigo);
void excluirFilme(Filme *filmes, int *n, int codigo);
void listarPorGenero(Filme *filmes, int n, const char *genero);
void mostrarMenu(Filme **filmes, int *n, int *capacidade);


int main() {
    setlocale(LC_ALL, "portuguese");

    Filme *filmes = NULL;
    int n = carregarFilmes(&filmes);
    int capacidade = n > 0 ? n * 2 : 10;

    if (filmes == NULL) {
        filmes = malloc(capacidade * sizeof(Filme));
        if (!filmes) {
            perror("Erro de alocação inicial");
            exit(1);
        }
    }

    mostrarMenu(&filmes, &n, &capacidade);

    free(filmes);
    return 0;
}

void mostrarMenu(Filme **filmes, int *n, int *capacidade) {
    int op;
    do {
        printf("\n===== TEOMINIX =====\n1. Cadastrar novo filme\n2. Exibir todos os filmes\n3. Buscar filme por código\n4. Buscar filme por título\n5. Atualizar dados de um filme\n6. Excluir filme\n7. Listar filmes por gênero\n8. Salvar e sair\n");
        printf("===========================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                cadastrarFilme(filmes, n, capacidade);
                break;
            case 2:
                exibirFilmes(*filmes, *n);
                break;
            case 3: {
                int codigo;
                printf("Código: "); 
                scanf("%d", &codigo);
                buscarPorCodigo(*filmes, *n, codigo);
                break;
            }
            case 4: {
                char titulo[50];
                getchar();
                printf("Título: "); 
                scanf("%49[^\n]", titulo);
                buscarPorTitulo(*filmes, *n, titulo);
                break;
            }
            case 5: {
                int codigo;
                printf("Código do filme a atualizar: "); 
                scanf("%d", &codigo);
                atualizarFilme(*filmes, *n, codigo);
                break;
            }
            case 6: {
                int codigo;
                printf("Código do filme a excluir: "); 
                scanf("%d", &codigo);
                excluirFilme(*filmes, n, codigo);
                break;
            }
            case 7: {
                char genero[30];
                getchar();
                printf("Gênero: "); scanf("%49[^\n]", genero);
                listarPorGenero(*filmes, *n, genero);
                break;
            }
            case 8:
                salvarFilmes(*filmes, *n);
                printf("Salvo e encerrando...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (op != 8);
}

void salvarFilmes(Filme *filmes, int n) {
    FILE *fp = fopen("filmes.txt", "w");
    if (!fp) {
        perror("Erro ao abrir arquivo para escrita");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d|%s|%s|%d\n", filmes[i].codigo, filmes[i].titulo, filmes[i].genero, filmes[i].anoLancamento);
    }

    fclose(fp);
}

int carregarFilmes(Filme **filmes) {
    FILE *fp = fopen("filmes.txt", "r");
    if (!fp) return 0;

    int capacidade = 10, n = 0;
    *filmes = malloc(capacidade * sizeof(Filme));
    if (!*filmes) {
        perror("Erro de alocação inicial");
        fclose(fp);
        exit(1);
    }

    Filme f;
    while (fscanf(fp, "%d|%49[^|]|%49[^|]|%d\n", &f.codigo, f.titulo, f.genero, &f.anoLancamento) == 4) {
        if (n >= capacidade) {
            capacidade *= 2;
            Filme *temp = realloc(*filmes, capacidade * sizeof(Filme));
            if (!temp) {
                perror("Erro de realocação");
                fclose(fp);
                free(*filmes);
                exit(1);
            }
            *filmes = temp;
        }
        (*filmes)[n++] = f;
    }

    fclose(fp);
    return n;
}

void cadastrarFilme(Filme **filmes, int *n, int *capacidade) {
    if (*n >= *capacidade) {
        *capacidade *= 2;
        Filme *temp = realloc(*filmes, *capacidade * sizeof(Filme));
        if (!temp) {
            perror("Erro de realocação");
            exit(1);
        }
        *filmes = temp;
    }

    Filme f;
    f.codigo = *n + 1;
    getchar();

    printf("Título: "); 
    scanf("%49[^\n]", f.titulo); 
    getchar();

    printf("Gênero: "); 
    scanf("%49[^\n]", f.genero); 
    getchar();

    printf("Ano de lançamento: "); 
    scanf("%d", &f.anoLancamento);
    getchar(); //TESTE

    (*filmes)[(*n)++] = f;

    printf("Filme cadastrado com o código: %d\n", f.codigo);
}

void exibirFilmes(Filme *filmes, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nCódigo: %d\nTítulo: %s\nGênero: %s\nAno: %d\n", filmes[i].codigo, filmes[i].titulo, filmes[i].genero, filmes[i].anoLancamento);
    }
}

void buscarPorCodigo(Filme *filmes, int n, int codigo) {
    for (int i = 0; i < n; i++) {
        if (filmes[i].codigo == codigo) {
            printf("Encontrado: %s (%d)\n", filmes[i].titulo, filmes[i].anoLancamento);

            getchar(); //TESTE
            return;
        }
    }
    printf("Filme nao encontrado.\n");
}

void buscarPorTitulo(Filme *filmes, int n, const char *titulo) {
    for (int i = 0; i < n; i++) {
        if (strcmp(filmes[i].titulo, titulo) == 0) {
            printf("Encontrado: Código %d, Genero %s, Ano %d\n", filmes[i].codigo, filmes[i].genero, filmes[i].anoLancamento);

            getchar(); //TESTE
            return;
        }
    }
    printf("Filme nao encontrado.\n");
}

void atualizarFilme(Filme *filmes, int n, int codigo) {
    for (int i = 0; i < n; i++) {
        if (filmes[i].codigo == codigo) {
            getchar();

            printf("Novo título: "); 
            scanf("%49[^\n]", filmes[i].titulo); 
            getchar();

            printf("Novo genero: "); scanf("%49[^\n]", filmes[i].genero); 
            getchar();

            printf("Novo ano: "); scanf("%d", &filmes[i].anoLancamento);
            printf("Filme atualizado.\n");
            getchar(); //TESTE

            return;
        }
    }
    printf("Filme nao encontrado.\n");
}

void excluirFilme(Filme *filmes, int *n, int codigo) {
    for (int i = 0; i < *n; i++) {
        if (filmes[i].codigo == codigo) {
            for (int j = i; j < *n - 1; j++) {
                filmes[j] = filmes[j + 1];
            }
            (*n)--;
            printf("Filme excluído.\n");
            return;
        }
    }
    printf("Filme não encontrado.\n");
}

void listarPorGenero(Filme *filmes, int n, const char *genero) {
    int encontrados = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(filmes[i].genero, genero) == 0) {
            printf("%s (%d)\n", filmes[i].titulo, filmes[i].anoLancamento);
            encontrados++;
        }
    }
    if (!encontrados)
        printf("Nenhum filme encontrado para o gênero.\n");
}
