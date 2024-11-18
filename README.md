# Inventory Manager

Bem-vindo ao **Inventory Manager**!  

Este repositório contém o código-fonte de um sistema de gerenciamento de estoque de produtos, desenvolvido em **C puro**. O projeto também utiliza uma API para interligar o executável em C a uma interface web.

## Objetivo

Este sistema foi desenvolvido como parte da avaliação da terceira unidade da disciplina **Técnicas de Programação**, com o objetivo de consolidar e aplicar os seguintes conhecimentos:
- Estruturas de dados (listas encadeadas),
- Funções,
- Structs,
- Ponteiros,
- Alocação dinâmica e manipulação de arquivos em C.

## Diferenciais do Projeto

O **Inventory Manager** vai além dos requisitos básicos da disciplina ao incorporar tecnologias modernas, como **Node.js** e **HTML, CSS e JavaScript**, resultando em um sistema robusto que combina conceitos fundamentais de programação em C com ferramentas atuais para o desenvolvimento de soluções completas.

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
- **API**: Desenvolvida em Node.js para conectar o backend ao frontend.
- **Frontend**: Interface desenvolvida com HTML, CSS e JavaScript.
- **Banco de Dados**: Arquivos `.txt` gerenciados pelo código em C.

## Estrutura do Projeto

```
inventory-manager/
├─── .vscode/
├─── backend/
│    ├── api.js
│    └── program/
│         ├── funcoes.c
│         ├── funcoes.h
│         └── main.c
└─── frontend/
     ├── index.html
     ├── style.css
     └── index.js
```

### Descrição dos Arquivos

- **`api.js`**: Conecta o executável em C ao Node.js, permitindo a interação com a interface web.  
- **`main.c`**: Arquivo principal que inicializa o sistema.  
- **`funcoes.c`** e **`funcoes.h`**: Biblioteca para operações de cadastro, listagem, edição, remoção e salvamento.  
- **`index.html`**: Interface gráfica do sistema.  
- **`style.css`**: Arquivo de estilos para a interface.  
- **`index.js`**: Lógica para interação com a interface gráfica.

## Pré-requisitos

Para rodar o sistema localmente, você precisará de:

- Compilador C (ex.: GCC);
- Node.js e npm;
- Navegador para acessar a interface HTML.

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

4. Inicie a API:

    ```bash
    cd backend
    node api.js
    ```

5. Abra o arquivo `index.html` no navegador para acessar a interface gráfica.

## Contribuição

Contribuições são bem-vindas! Siga os passos abaixo para contribuir:

1. Faça um _fork_ do projeto.  
2. Crie uma nova _branch_:  

    ```bash
    git checkout -b minha-nova-feature
    ```

3. Realize as alterações e faça o _commit_:  

    ```bash
    git commit -m 'Adiciona nova funcionalidade'
    ```

4. Faça o _push_ da _branch_:  

    ```bash
    git push origin minha-nova-feature
    ```

5. Abra um _pull request_.

## Licença

Este projeto está licenciado sob a Licença MIT. Consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
