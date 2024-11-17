#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>

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
Nodo* criarNodo(Produto produto);
// Função para adicionar um produto no início da lista
void adicionarProduto(Nodo **cabeca, Produto produto);
// Função para listar todos os produtos da lista
void listarProdutos(Nodo *cabeca);
// Função para buscar um produto pelo ID
Nodo* buscarProduto(Nodo *cabeca, int id);
// Função para editar um produto da lista
void editarProduto(Nodo *cabeca, int id);
// Função para remover um produto da lista
void removerProduto(Nodo **cabeca, int id);
// Função para salvar os produtos em um arquivo de texto
void salvarEmArquivoTxt(Nodo *cabeca, const char *nomeArquivo);
// Função para carregar os produtos de um arquivo de texto
void carregarDoArquivoTxt(Nodo **cabeca, const char *nomeArquivo);

#endif