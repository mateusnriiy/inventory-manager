#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Função para editar um produto da lista
void editarProduto(Nodo *cabeca, int id){
    Nodo *nodo = buscarProduto(cabeca, id); // Busca o produto pelo ID
    if (nodo != NULL){ // Verifica se o produto foi encontrado
        printf("Digite o novo nome: ");
        scanf(" %[^\n]s", nodo->produto.nome); // Lê o novo nome
        printf("Digite o novo preço: ");
        scanf("%f", &nodo->produto.preco); // Lê o novo preço
        printf("Digite a nova quantidade: ");
        scanf("%d", &nodo->produto.quantidade); // Lê a nova quantidade
        printf("Produto editado com sucesso!\n");
    }
    else {
        printf("Produto não encontrado!\n"); // Informa se o produto não foi encontrado
    }
}