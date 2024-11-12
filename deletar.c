#include <stdio.h>
#include<string.h>
#include <stdlib.h>
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