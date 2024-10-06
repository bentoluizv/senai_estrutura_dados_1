# ESTRUTURA DE DADOS - DESAFIO 1

`Aluno: Bento Luiz Vervloet Machado da Silva Neto`

## estrutura.c

> Este arquivo implementa uma estrutura de dados que pode ser usada para armazenar e manipular uma lista encadeada de requisições que apresenta um comportamento de fila.
>
> A estrutura principal é chamada **Estrutura**, que mantém uma lista de nós (**Node**), onde cada nó contém uma requisição e uma referência para o próximo nó.

* ### Estrutura* create()

> Esta função aloca dinamicamente memória para uma nova estrutura Estrutura.
>
> Inicializa o primeiro nó da estrutura (first) como NULL e o tamanho da estrutura (size) como 0.
>
> Caso a alocação falhe, imprime uma mensagem de erro e finaliza o programa.

* ### void inserir(Estrutura *estrutura, Requisicao *requisicao)

> Insere uma nova requisição na estrutura. A requisição é inserida no final da lista encadeada.
>
> Primeiro, um novo nó (Node) é criado e alocado dinamicamente.
>
> Se a lista estiver vazia, o novo nó se torna o primeiro da lista.
>
> Caso contrário, percorre-se a lista até encontrar o último nó e o novo nó é adicionado ao final.
>
> O tamanho da estrutura (size) é incrementado.

* ### Requisicao* remover(Estrutura *estrutura)

> Remove e retorna a primeira requisição da estrutura.
>
> Se a lista estiver vazia, imprime uma mensagem de aviso e retorna NULL.
>
> O nó removido é liberado da memória e o ponteiro para o próximo nó é atualizado.
>
> O tamanho da estrutura (size) é decrementado.

* ### int get_size(Estrutura *estrutura)

> Retorna o tamanho atual da estrutura, ou seja, quantos nós estão presentes na lista.

## requisicao.c

> Este arquivo define a estrutura e operações relacionadas a uma Requisicao, que é um objeto que armazena informações sobre uma requisição específica.

* ### Requisicao* cria_requisicao(const char *nome, int inscricao, const char *procedimento)

> Esta função cria uma nova requisição, alocando memória dinamicamente para ela.
>
> Atribui os valores de nome, inscricao e procedimento à requisição.
>
> Usa a função strncpy para copiar strings para garantir que o tamanho máximo seja respeitado.
>
> Caso a alocação de memória falhe, uma mensagem de erro é exibida e o programa é encerrado.

* ### const char* get_nome(Requisicao *r)

> Retorna o nome da requisição.

* ### int get_inscricao(Requisicao *r)

> Retorna o número de inscrição associado à requisição.

* ### const char* get_procedimento(Requisicao *r)

> Retorna o procedimento associado à requisição.

* ### void libera(Requisicao *r)

> Libera a memória alocada para a requisição.
