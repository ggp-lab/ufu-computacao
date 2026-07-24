#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    int dado;
    struct No *prox;
}No;

typedef struct Lista {
    No *inicio;
}Lista;
void CriarListaVazia(Lista *l);
int InserirInicio(Lista *l, int elem);
#endif