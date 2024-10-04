#ifndef ESTRUTURA_H
#define ESTRUTURA_H
#include "requisicao.h"

typedef struct Node Node;

struct Node {
    Requisicao *requisicao;
    Node *next;
};

typedef struct {
    Node *first;
    int size;
} Estrutura;

Estrutura *create();
void inserir(Estrutura *estrutura, Requisicao *requisicao);
Requisicao *remover(Estrutura *estrutura);
int get_size(Estrutura *estrutura);

#endif