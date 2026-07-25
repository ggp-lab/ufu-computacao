#ifndef LISTA_H
#define LISTA_H

typedef struct No{
    int dado;
    struct No *prox;
    struct No *ant;
}No;

typedef struct Lista{
    No *inicio;
    No*fim;
}Lista;

void CriarListaVazia(Lista *l);

#endif