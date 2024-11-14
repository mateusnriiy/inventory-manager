#include <stdio.h>
#include "funcoes.h"

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
