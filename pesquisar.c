#include <stdio.h>
#include<string.h>
#include <stdlib.h>

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