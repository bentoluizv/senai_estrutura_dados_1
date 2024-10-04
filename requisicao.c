#include "requisicao.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Requisicao *cria_requisicao(const char *nome, int inscricao, const char *procedimento) {
    Requisicao *r = (Requisicao *) malloc(sizeof(Requisicao));
    if (r == NULL) {
        printf("Erro ao alocar memória para a requisição.\n");
        exit(EXIT_FAILURE);
    }
    strncpy(r->nome, nome, 40);
    r->inscricao = inscricao;
    strncpy(r->procedimento, procedimento, 10);

    return r;
}

const char *get_nome(Requisicao *r) {
    return r->nome;
}

int get_inscricao(Requisicao *r) {
    return r->inscricao;
}

const char *get_procedimento(Requisicao *r) {
    return r->procedimento;
}

void libera(Requisicao *r) {
    if (r != NULL) {
        free(r);
    }
}