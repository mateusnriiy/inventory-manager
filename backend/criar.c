#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para adicionar um produto no início da lista
void adicionarProduto(Nodo **cabeca, Produto produto) {
    Nodo *novo = criarNodo(produto);     // Cria um novo nó
    novo->proximo = *cabeca;             // Aponta o próximo nó para a cabeça da lista
    *cabeca = novo;                      // Atualiza a cabeça da lista para o novo nó
    printf("Produto cadastrado com sucesso!\n");
}
