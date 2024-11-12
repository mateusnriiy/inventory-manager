# Sistema de Gerenciamento de Estoque de Produtos

Este repositório contém o código-fonte de um sistema de gerenciamento de estoque de produtos, desenvolvido em C puro para o backend e HTML para o frontend. O projeto faz parte da nota da terceira unidade da disciplina de Tecnicas de programação e possui o intuito de fixar os conteúdos de estrutura de dados(lista encadeada), Funções, Struct, Ponteiros, Alocação dinâmica e arquivos.

## Funcionalidades

O sistema de gerenciamento de estoque oferece as seguintes funcionalidades:

1. **Cadastro de Produtos**:
   - Adicione novos produtos com informações detalhadas, como nome, descrição, categoria, preço e quantidade em estoque.
   - Atualize ou remova produtos existentes no catálogo.

2. **Movimentação de Estoque**:
   - Registre entradas de novos itens ao estoque com data, quantidade e outras informações relevantes.
   - Registre saídas de itens para vendas ou outras finalidades, controlando a quantidade e o destino dos produtos.

3. **Controle de Quantidade em Tempo Real**:
   - Consulte a quantidade atual de cada produto em estoque.
   - Receba alertas para produtos com baixo estoque, facilitando o planejamento de reposições.

4. **Geração de Relatórios**:
   - Relatórios detalhados sobre movimentação de estoque, facilitando a análise de entradas e saídas.
   - Relatórios de inventário com listagem de todos os produtos e suas respectivas quantidades.
   - Relatórios de produtos com baixo estoque, permitindo ações proativas para evitar rupturas de estoque.

5. **Histórico de Movimentações**:
   - Visualize o histórico de entradas e saídas de cada produto para rastrear movimentações e garantir transparência.

## Tecnologias Utilizadas

- **Backend**: Linguagem C
- **Frontend**: HTML, CSS e JavaScript para a interface web
- **Banco de Dados**: Arquivos binários ou base de dados relacional para armazenamento de produtos e movimentações

## Pré-requisitos

Para rodar o sistema em ambiente local, você precisará de:

- Compilador C (ex.: GCC)
- Servidor HTTP (para servir os arquivos HTML, caso necessário)
- [Outros requisitos específicos caso necessário, como bibliotecas adicionais para C]

## Instalação

1. Clone este repositório:

    ```bash
    git clone 
    ```

2. Acesse o diretório do projeto:

    ```bash
    cd 
    ```

3. Compile o código C:

    ```bash
    gcc -o inventorymaganer main.c produto.c estoque.c -lm
    ```

4. Inicie o sistema:

    ```bash
    ./inventorymaganer
    ```

5. Abra o arquivo `index.html` em um navegador para acessar a interface do sistema.

## Uso

O sistema pode ser acessado através da interface HTML no navegador, onde é possível gerenciar o estoque, adicionar novas entradas e saídas, visualizar relatórios e acompanhar o inventário em tempo real.

## Estrutura de Arquivos

- `main.c`: Arquivo principal que inicializa o sistema.
- `produto.c` e `produto.h`: Gerenciamento de produtos (criação, atualização, exclusão).
- `estoque.c` e `estoque.h`: Funções para controle de estoque e movimentação de produtos.
- `index.html`: Interface de usuário principal para o gerenciamento do estoque.
- `style.css`: Estilos para a interface HTML.
- `script.js`: Scripts JavaScript para interatividade na interface.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir um _pull request_ ou relatar _issues_.

1. Faça um _fork_ do projeto
2. Crie uma nova _branch_: `git checkout -b minha-nova-feature`
3. Realize as alterações e faça _commit_: `git commit -m 'Adiciona nova funcionalidade'`
4. Faça o _push_ da _branch_: `git push origin minha-nova-feature`
5. Abra um _pull request_

## Licença

Este projeto é licenciado sob a Licença [Nome da Licença]. Consulte o arquivo `LICENSE` para mais informações.
