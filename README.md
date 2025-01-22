# Inventory Manager

O Inventory Manager é um sistema de gerenciamento de estoque desenvolvido em C, projetado para permitir o controle eficiente de produtos, incluindo funcionalidades de cadastro, consulta, atualização e remoção.

## Objetivo

Este sistema foi desenvolvido como parte da avaliação da terceira unidade da disciplina **Técnicas de Programação**, com o objetivo de consolidar e aplicar os seguintes conhecimentos:
- Estruturas de dados (listas encadeadas),
- Funções,
- Structs,
- Ponteiros,
- Alocação dinâmica e manipulação de arquivos em C.

## Funcionalidades

O sistema oferece as seguintes funcionalidades:

1. **Cadastro de Produtos**  
   Permite o registro de produtos com informações como nome, preço e quantidade.

2. **Listagem de Produtos**  
   Exibe todos os produtos cadastrados com detalhes como ID, nome, preço e quantidade.

3. **Edição de Produtos**  
   Permite a edição de dados de produtos existentes, buscando pelo ID.

4. **Remoção de Produtos**  
   Remove produtos do sistema com base no ID.

5. **Salvar em Arquivo .TXT**  
   Armazena os dados em um arquivo `.txt`, que atua como banco de dados simples.

## Tecnologias Utilizadas

- **Backend**: Código em C para as operações principais.
- **Banco de Dados**: Arquivos `.txt` gerenciados pelo código em C.

## Estrutura do Projeto

```
inventory-manager/
├─── .vscode/
├─── backend/
     └── program/
          ├── funcoes.c
          ├── funcoes.h
          └── main.c
```

## Instalação

1. Clone este repositório:

    ```bash
    git clone https://github.com/mateusnriiy/inventory-manager.git
    ```

2. Acesse o diretório do projeto:

    ```bash
    cd inventory-manager
    ```

3. Compile o código C:

    ```bash
    gcc -o inventory-manager backend/program/main.c backend/program/funcoes.c
    ```

## Licença

Este projeto está licenciado sob a Licença MIT. Consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
