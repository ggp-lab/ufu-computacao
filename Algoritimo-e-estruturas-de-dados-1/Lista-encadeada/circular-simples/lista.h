#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    int dado;
    struct No *prox;
}No;
typedef struct Lista{
    struct Lista *inicio;
}Lista;

void CriarListaVazia(Lista *l);



#endif