# Inventory Manager

Bem-vindo ao **Inventory Manager**!  

Este repositório contém o código-fonte de um sistema de gerenciamento de estoque de produtos, desenvolvido em **C puro**. O projeto também utiliza uma API que interliga o executável em C à uma interface.  

## Objetivo

O sistema foi desenvolvido como parte da avaliação da terceira unidade da disciplina **Técnicas de Programação**, com o objetivo de consolidar e aplicar os seguintes conhecimentos:
- Estruturas de dados (listas encadeadas),
- Funções,
- Structs,
- Ponteiros,
- Alocação dinâmica e manipulação de arquivos em C.

## Diferenciais do Projeto

Buscando ir além dos requisitos básicos da disciplina, optamos por incorporar tecnologias modernas como Node.js e React. Isso resultou em um sistema mais robusto e funcional, unindo conceitos fundamentais de programação em C a ferramentas atuais para o desenvolvimento de soluções completas.

## Funcionalidades

O **InventoryManager** oferece as seguintes funcionalidades principais:

1. **Cadastro de Produtos**:
   - Realize o cadastro dos novos produtos com detalhes como nome, preço e quantidade.

2. **Listagem dos produtos**:
   - Realize a listagem de todos os produtudos cadastrados com detalhes como ID, nome, preço e quantidade.
 
4. **Edição dos Produtos**:
   - Realize a edição dos produtos cadastrados buscando pelo seu ID, permite editar o nome, preço e quantidade.
     
5. **Remoção dos Produtos**:
   - Realize removação dos produtos cadastrados buscando pelo seu ID.
     
6. **Salvar em arquivo .TXT**:
   - Salve os dados do sistema um arquivo .TXT utilizando-o como banco de dados.
     
## Tecnologias Utilizadas

- **Backend**: Código em C responsável pelas operações principais do sistema.
- **API**: Desenvolvida em Node.js para interligar o backend ao frontend.
- **Frontend**: Interface desenvolvida com HTML, CSS e JavaScrpit, permitindo uma experiência intuitiva para o usuário.
- **Banco de Dados**: Arquivos em txt ou estruturados em C para armazenamento de produtos e transações.

## Estrutura do Projeto

```
├───inventory-maganer
    ├───.vscode
    ├───backend
    |   ├─── api.js
    |   └───program
    |       ├─── funcoes.c
    |       ├─── funcoes.h
    |       └─── main.c
    └───frontend
        ├─── index.html
        ├─── style.css
        └─── index.js
```
- `main.c`: Arquivo principal que inicializa o sistema.
- `funcoes.c` e `funcoes.h`: biblioteca para cadastrar, listar, editar, remover e salvar em um arquivo os produtos do estoque.

## Pré-requisitos

Para rodar o sistema localmente, você precisará de:

- Compilador C (ex.: GCC);
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
    gcc -o inventory-manager main.c funcoe.c
    ```

4. Inicie o sistema:

    ```bash
    ./inventory-manager
    ```

5. Abra o arquivo `index.html` em um navegador para acessar a interface gráfica.


## Contribuição

Contribuições são bem-vindas! Siga os passos abaixo para contribuir:

1. Faça um _fork_ do projeto
2. Crie uma nova _branch_: `git checkout -b minha-nova-feature`
3. Realize as alterações e faça _commit_: `git commit -m 'Adiciona nova funcionalidade'`
4. Faça o _push_ da _branch_: `git push origin minha-nova-feature`
5. Abra um _pull request_
