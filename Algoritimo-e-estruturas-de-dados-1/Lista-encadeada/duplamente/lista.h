#ifndef LISTAS_H
#define LISTAS_H

typedef struct No {
    struct No *ant;
    struct No *prox;
    int dado;
}No;

typedef struct Lista{
    No *inicio;
    No *fim;
}Lista;

void CriarListaVazia(Lista *l);
int RemoverElemento(Lista *l, int elem);
int BuscarElemento(Lista *l , int elem);
int inserirIncio(Lista *l, int elem);
int InserirNofim(Lista *l, int elem);

#endif