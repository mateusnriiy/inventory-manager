# Inventory Manager

Bem-vindo ao **Inventory Manager**! Este repositório contém o código-fonte de um sistema de gerenciamento de estoque de produtos, desenvolvido com backend em C puro e frontend em HTML, CSS e JavaScript. O projeto integra a avaliação da terceira unidade da disciplina de Técnicas de Programação e tem como objetivo consolidar os conhecimentos sobre estrutura de dados (listas encadeadas), funções, structs, ponteiros, alocação dinâmica e manipulação de arquivos.

## Funcionalidades

O **InventoryManager** oferece as seguintes funcionalidades principais:

1. **Cadastro de Produtos**:
   - Adicione novos produtos com detalhes como nome, descrição, categoria, preço e quantidade.
   - Atualize ou remova produtos do estoque.

2. **Listagem dos produtos**:
 
3. **Edição dos Produtos**:

4. **Remoção dos Produtos**:

5. **Salvar em arquivo .TXT**:

## Tecnologias Utilizadas

- **Backend**: C (para lógica e controle de dados).
- **Frontend**: HTML, CSS e JavaScript para a interface web
- **Banco de Dados**: Arquivos em txt ou estruturados em C para armazenamento de produtos e transações.

## Pré-requisitos

Para rodar o sistema localmente, você precisará de:

- Compilador C (ex.: GCC)
- Navegador para exibir a interface HTML

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
    gcc main.c funcoe.c -o inventory-manager 
    ```

4. Inicie o sistema:

    ```bash
    ./inventory-manager
    ```

5. Abra o arquivo `index.html` em um navegador para acessar a interface gráfica.

## Estrutura do Projeto

- `main.c`: Arquivo principal que inicializa o sistema.
- `funcoes.c` e `funcoes.h`: biblioteca para cadastrar, listar, editar, remover e salvar em um arquivo os produtos do estoque.
- `index.html`: Interface de usuário principal para o gerenciamento de estoque.
- `style.css`: Arquivo CSS para estilização da interface.
- `script.js`: Código JavaScript para interatividade na interface HTML.

## Contribuição

Contribuições são bem-vindas! Siga os passos abaixo para contribuir:

1. Faça um _fork_ do projeto
2. Crie uma nova _branch_: `git checkout -b minha-nova-feature`
3. Realize as alterações e faça _commit_: `git commit -m 'Adiciona nova funcionalidade'`
4. Faça o _push_ da _branch_: `git push origin minha-nova-feature`
5. Abra um _pull request_
