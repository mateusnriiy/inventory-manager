#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

void processarComando(char *comando, Nodo **cabeca) {
    if (strcmp(comando, "list") == 0) {
        listarProdutos(*cabeca);
    } else if (strncmp(comando, "add ", 4) == 0) {
        Produto produto;
        sscanf(comando + 4, "%d %49s %f %d", &produto.id, produto.nome, &produto.preco, &produto.quantidade);
        adicionarProduto(cabeca, produto);
        printf("Produto adicionado: %d %s %.2f %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
    } else if (strncmp(comando, "edit ", 5) == 0) {
        int id;
        sscanf(comando + 5, "%d", &id);
        editarProduto(*cabeca, id);
    } else if (strncmp(comando, "remove ", 7) == 0) {
        int id;
        sscanf(comando + 7, "%d", &id);
        removerProduto(cabeca, id);
    } else if (strcmp(comando, "save") == 0) {
        salvarEmArquivoTxt(*cabeca, "produtos.txt");
        printf("Produtos salvos no arquivo.\n");
    } else if (strcmp(comando, "load") == 0) {
        carregarDoArquivoTxt(cabeca, "produtos.txt");
        printf("Produtos carregados do arquivo.\n");
    } else {
        printf("Comando inválido.\n");
    }
}

int main() {
    Nodo *cabeca = NULL;
    char comando[256];

    carregarDoArquivoTxt(&cabeca, "produtos.txt");

    while (fgets(comando, sizeof(comando), stdin)) {
        comando[strcspn(comando, "\n")] = '\0'; // Remove newline
        processarComando(comando, &cabeca);
    }

    salvarEmArquivoTxt(cabeca, "produtos.txt");
    return 0;
}