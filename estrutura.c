#include "estrutura.h"
#include <stdlib.h>
#include <stdio.h>

Estrutura* create() {
    Estrutura* estrutura = (Estrutura*) malloc(sizeof(Estrutura));

    if (estrutura == NULL) {
        printf("Erro ao alocar memória para a estrutura.\n");
        exit(EXIT_FAILURE);
    }
    estrutura->first = NULL;
    estrutura->size = 0;
    return estrutura;

}

void inserir(Estrutura *estrutura, Requisicao *requisicao) {
    Node *node = malloc(sizeof(Node));
    if (node == NULL) {
        printf("Erro ao alocar memória para o nó.\n");
        exit(EXIT_FAILURE);
    }

    node->requisicao = requisicao;
    node->next = NULL;

    if (estrutura->first == NULL) {
        estrutura->first = node;

    } else {
        Node *current = estrutura->first;

        while (current->next != NULL) {
            current = current->next;
        }
        current->next = node;
    }

    estrutura->size++;
}

Requisicao *remover(Estrutura *estrutura) {
 if (estrutura->first == NULL) {
        printf("Nenhum nó para remover\n");
        return NULL;
 };

 Node *node_to_remove = estrutura->first;
 Requisicao *requisicao = node_to_remove->requisicao;
 estrutura->first = node_to_remove->next;
 free(node_to_remove);
 estrutura->size--;

 return requisicao;
}

int get_size(Estrutura *estrutura) {
    return estrutura->size;
}
