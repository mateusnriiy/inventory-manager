#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

// Função para criar um novo nó da lista encadeada
Nodo* criarNodo(Produto produto) {
    Nodo *novoNodo = (Nodo*) malloc(sizeof(Nodo));  // Aloca memória para o novo nó
    if (novoNodo != NULL) {                          // Verifica se a alocação foi bem-sucedida
        novoNodo->produto = produto;                 // Atribui o produto ao nó
        novoNodo->proximo = NULL;                    // Define o próximo nó como NULL
    }
    return novoNodo;                                 // Retorna o novo nó
}

// Função para adicionar um produto no início da lista
void adicionarProduto(Nodo **cabeca, Produto produto) {
    Nodo *novo = criarNodo(produto);     // Cria um novo nó
    novo->proximo = *cabeca;             // Aponta o próximo nó para a cabeça da lista
    *cabeca = novo;                      // Atualiza a cabeça da lista para o novo nó
    printf("Produto cadastrado com sucesso!\n");
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

// Função para buscar um produto pelo ID
Nodo* buscarProduto(Nodo *cabeca, int id) {
    Nodo *atual = cabeca;                // Ponteiro para iterar na lista
    while (atual != NULL) {              // Loop até encontrar o produto ou chegar ao fim
        if (atual->produto.id == id) {   // Verifica se o ID corresponde
            return atual;                // Retorna o nó encontrado
        }
        atual = atual->proximo;          // Avança para o próximo nó
    }
    return NULL;                         // Retorna NULL se o produto não foi encontrado
}

// Função para editar um produto da lista
void editarProduto(Nodo *cabeca, int id) {
    Nodo *nodo = buscarProduto(cabeca, id);   // Busca o produto pelo ID
    if (nodo != NULL) {                       // Verifica se o produto foi encontrado
        printf("Digite o novo nome: ");
        scanf(" %[^\n]s", nodo->produto.nome);      // Lê o novo nome
        printf("Digite o novo preço: ");
        scanf("%f", &nodo->produto.preco);          // Lê o novo preço
        printf("Digite a nova quantidade: ");
        scanf("%d", &nodo->produto.quantidade);     // Lê a nova quantidade
        printf("Produto editado com sucesso!\n");
    } else {
        printf("Produto não encontrado!\n");        // Informa se o produto não foi encontrado
    }
}

// Função para remover um produto da lista
void removerProduto(Nodo **cabeca, int id) {
    Nodo *atual = *cabeca;                 // Ponteiro para o nó atual
    Nodo *anterior = NULL;                 // Ponteiro para o nó anterior

    while (atual != NULL && atual->produto.id != id) { // Loop até encontrar o produto ou chegar ao fim
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {                   // Verifica se o produto foi encontrado
        printf("Produto não encontrado!\n");
        return;
    }

    if (anterior == NULL) {                // Caso o produto esteja na cabeça da lista
        *cabeca = atual->proximo;
    } else {
        anterior->proximo = atual->proximo; // Remove o nó da lista
    }

    free(atual);                           // Libera a memória do nó removido
    printf("Produto removido com sucesso!\n");
}

// Função para salvar os produtos em um arquivo de texto
void salvarEmArquivoTxt(Nodo *cabeca, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");  // Abre o arquivo em modo de escrita
    if (arquivo == NULL) {                    // Verifica se o arquivo foi aberto corretamente
        printf("Erro ao abrir o arquivo para salvar!\n");
        return;
    }

    Nodo *atual = cabeca;
    while (atual != NULL) {
        fprintf(arquivo, "%d %s %.2f %d\n", // Salva cada produto no formato de texto
                atual->produto.id, atual->produto.nome,
                atual->produto.preco, atual->produto.quantidade);
        atual = atual->proximo;
    }

    fclose(arquivo);                        // Fecha o arquivo
    printf("Produtos salvos no arquivo TXT com sucesso!\n");
}

// Função para carregar os produtos de um arquivo de texto
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