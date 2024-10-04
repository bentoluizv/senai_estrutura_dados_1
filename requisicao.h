#ifndef REQUISICAO_H
#define REQUISICAO_H

typedef struct {
    char nome[40];
    int inscricao;
    char procedimento[10];
} Requisicao;

Requisicao* cria_requisicao(const char *nome, int inscricao, const char *procedimento);
const char* get_nome(Requisicao* r);
int get_inscricao(Requisicao* r);
const char* get_procedimento(Requisicao* r);
void libera(Requisicao* r);

#endif