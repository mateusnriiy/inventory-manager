#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "criar.c"
#include "pesquisar.c"
#include "atualizar.c"
#include "deletar.c"

// Estrutura para armazenar as informações de um produto
typedef struct Produto {
    int id;              // ID do produto
    char nome[50];       // Nome do produto
    float preco;         // Preço do produto
    int quantidade;      // Quantidade do produto
} Produto;

// Estrutura de um nó da lista encadeada
typedef struct Nodo {
    Produto produto;       // Produto armazenado no nó
    struct Nodo *proximo;  // Ponteiro para o próximo nó
} Nodo;

// Função para criar um novo nó da lista encadeada
Nodo* criarNodo(Produto produto) {
    Nodo *novoNodo = (Nodo*) malloc(sizeof(Nodo));  // Aloca memória para o novo nó
    if (novoNodo != NULL) {                          // Verifica se a alocação foi bem-sucedida
        novoNodo->produto = produto;                 // Atribui o produto ao nó
        novoNodo->proximo = NULL;                    // Define o próximo nó como NULL
    }
    return novoNodo;                                 // Retorna o novo nó
}

void carregarDoArquivoTxt(Nodo **cabeca, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r"); // Abre o arquivo em modo de leitura
    if (arquivo == NULL) {                   // Verifica se o arquivo foi aberto corretamente
        printf("Arquivo não encontrado ou erro ao abrir!\n");
        return;
    }

    Produto produto;                         // Variável para armazenar temporariamente cada produto
    while (fscanf(arquivo, "%d %49s %f %d", // Lê os valores formatados de cada produto
                  &produto.id, produto.nome,
                  &produto.preco, &produto.quantidade) == 4) {
        adicionarProduto(cabeca, produto);   // Adiciona o produto lido à lista
    }

    fclose(arquivo);                         // Fecha o arquivo
    printf("Produtos carregados do arquivo TXT com sucesso!\n");
}

// Função para listar todos os produtos da lista
void listarProdutos(Nodo *cabeca) {
    Nodo *atual = cabeca;                // Ponteiro para iterar na lista
    while (atual != NULL) {              // Loop enquanto houver produtos
        printf("ID: %d | Nome: %s | Preço: %.2f | Quantidade: %d\n",
               atual->produto.id, atual->produto.nome, atual->produto.preco, atual->produto.quantidade);
        atual = atual->proximo;          // Avança para o próximo nó
    }
}

// Função principal
int main() {
    Nodo *cabeca = NULL; // Inicializa a cabeça da lista como vazia
    int opcao, id;
    Produto produto;

    // Carrega os produtos do arquivo de texto ao iniciar o programa
    carregarDoArquivoTxt(&cabeca, "produtos.txt");

    do {
        printf("\n--- Sistema de Gerenciamento de Produtos ---\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Editar produto\n");
        printf("4. Remover produto\n");
        printf("5. Salvar produtos em arquivo\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o ID: ");
                scanf("%d", &produto.id);
                printf("Digite o nome: ");
                scanf(" %[^\n]s", produto.nome);
                printf("Digite o preço: ");
                scanf("%f", &produto.preco);
                printf("Digite a quantidade: ");
                scanf("%d", &produto.quantidade);
                adicionarProduto(&cabeca, produto);
                break;
            case 2:
                listarProdutos(cabeca);
                break;
            case 3:
                printf("Digite o ID do produto a editar: ");
                scanf("%d", &id);
                editarProduto(cabeca, id);
                break;
            case 4:
                printf("Digite o ID do produto a remover: ");
                scanf("%d", &id);
                removerProduto(&cabeca, id);
                break;
            case 5:
                salvarEmArquivoTxt(cabeca, "produtos.txt");
                break;
            case 0:
                salvarEmArquivoTxt(cabeca, "produtos.txt");
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
